#include <algorithm>
#include <cstdio>
#include <set>
#include <vector>

using namespace std;

#define MAX 25

typedef long long llint;
typedef pair<int, int> par;

int R, C;
int a[MAX][MAX];

void Rotate(int r, int c, bool output = false) {
  if (output) printf("%d %d\n", r, c);
  int t = a[r][c];
  a[r][c] = a[r - 1][c];
  a[r - 1][c] = a[r - 1][c - 1];
  a[r - 1][c - 1] = a[r][c - 1];
  a[r][c - 1] = t;
}

void UnRotate(int r, int c) {
  int t = a[r][c];
  a[r][c] = a[r][c - 1];
  a[r][c - 1] = a[r - 1][c - 1];
  a[r - 1][c - 1] = a[r - 1][c];
  a[r - 1][c] = t;
}

set<llint> seen;
vector<par> moves;

bool DFS(int rows, int cols, int moves_left) {
  bool done = true;
  llint hash = 0;
  for (int r = 0; r < rows; ++r) {
    for (int c = 0; c < cols; ++c) {
      if (a[r][c] != r * C   + c) done = false;
      hash = hash * 101 + a[r][c];
    }
  }
  if (done) return true;
  if (!moves_left) return false;
  if (seen.count(hash)) return false;
  seen.insert(hash);

  for (int r = 1; r < rows; ++r) {
    for (int c = 1; c < cols; ++c) {
      moves.push_back(par(r, c));
      Rotate(r, c);
      if (DFS(rows, cols, moves_left - 1)) {
        UnRotate(r, c);
        return true;
      }
      UnRotate(r, c);
      moves.pop_back();
    }
  }
  return false;
}

void IDDFS(int rows, int cols) {
  int max_depth = 10;
  moves.clear();
  seen.clear();
  while (!DFS(rows, cols, max_depth)) {
    seen.clear();
    max_depth *= 2;
  }
  for (int i = 0; i < moves.size(); ++i) {
    Rotate(moves[i].first, moves[i].second, /*output=*/true);
  }
}

void Find(int x, int* row, int* col) {
  for (int r = 0; r < R; ++r) {
    for (int c = 0; c < C; ++c) {
      if (a[r][c] == x) {
        *row = r;
        *col = c;
      }
    }
  }
}

void Down(int& row, int& col) {
  Rotate(++row, col, /*output=*/true);
}

void Up(int& row, int& col) {
  Rotate(row--, col + 1, /*output=*/true);
}

void Right(int& row, int& col) {
  Rotate(row + 1, ++col, /*output=*/true);
}

void Left(int& row, int& col) {
  Rotate(row, col--, /*output=*/true);
}

void TwoRowsMoveToTargetCol(int row, int col, int target_col) {
  if (row == 1 && col == target_col) Left(row, col);
  if (row == 1 && col == target_col - 1) Left(row, col);
  if (row == 1) Up(row, col);
  while (col < target_col) Right(row, col);
}

void VerticalSwap(int target_col) {
  Rotate(1, target_col, /*output=*/true);
  Rotate(1, target_col - 1, /*output=*/true);
  Rotate(1, target_col - 1, /*output=*/true);
  Rotate(1, target_col, /*output=*/true);
  Rotate(1, target_col, /*output=*/true);
  Rotate(1, target_col, /*output=*/true);
  Rotate(1, target_col - 1, /*output=*/true);
  Rotate(1, target_col, /*output=*/true);
}

void HorizontalSwap(int target_row) {
  Rotate(target_row, 1, /*output=*/true);
  Rotate(target_row - 1, 1, /*output=*/true);
  Rotate(target_row - 1, 1, /*output=*/true);
  Rotate(target_row, 1, /*output=*/true);
  Rotate(target_row, 1, /*output=*/true);
  Rotate(target_row, 1, /*output=*/true);
  Rotate(target_row - 1, 1, /*output=*/true);
  Rotate(target_row, 1, /*output=*/true);
}

void SolveFirstTwoRows() {
  for (int target_col = C - 1; target_col >= 4; --target_col) {
    int row, col;
    Find(1 * C + target_col, &row, &col);
    TwoRowsMoveToTargetCol(row, col, target_col);
    Find(0 * C + target_col, &row, &col);
    if (row == 1 && col == target_col) {
      VerticalSwap(target_col);
    } else {
      TwoRowsMoveToTargetCol(row, col, target_col);
    }
  }
  IDDFS(2, 4);
}

void Move(int row, int col, int target_row, int target_col) {
  if (row == target_row && col == target_col) return;
  if (row == 0 && col == 0) Right(row, col);
  if (row == 0) Down(row, col);
  if (row == target_row) Up(row, col);
  while (col > target_col) Left(row, col);
  while (col < target_col) Right(row, col);
  while (row < target_row) Down(row, col);
}

void Solve() {
  for (int target_row = R - 1; target_row > 1; --target_row) {
    for (int target_col = C - 1; target_col > 1; --target_col) {
      int row, col;
      Find(target_row * C + target_col, &row, &col);
      Move(row, col, target_row, target_col);
    }
    int row, col;
    Find(target_row * C + 0, &row, &col);
    Move(row, col, target_row, 1);
    Find(target_row * C + 1, &row, &col);
    if (row == target_row && col == 0) {
      HorizontalSwap(target_row);
    } else {
      if (row == target_row - 1 && col == 0) Up(row, col);
      Move(row, col, target_row, 1);
    }
  }
  SolveFirstTwoRows();
}

int main() {
  scanf("%d%d", &R, &C);
  for (int r = 0; r < R; ++r) {
    for (int c = 0; c < C; ++c) {
      scanf("%d", &a[r][c]); --a[r][c];
    }
  }
  if (C <= 3) {
    IDDFS(R, C);
  } else {
    Solve();
  }
  return 0;
}
