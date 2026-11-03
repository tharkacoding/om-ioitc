// Autor: Mislav Balunovic

#include <cstdio>
#include <cstring>
#include <cassert>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <queue>

#define u first
#define v second
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR (i, 0, n)
#define _ << " _ " <<
#define TRACE(x) cerr << #x << " = " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)

using namespace std;
using pii = pair<int, int>;

const int MAXN = 110;

enum {NO, MAYBE, YES};

int n, p[MAXN], e[MAXN][MAXN], e_tmp[MAXN][MAXN];
int cookie, idx[MAXN], cnt[MAXN];
queue<int> q;

void find_edge(pii& par) {
  for (; !q.empty(); q.pop());
  memset(cnt, 0, sizeof(cnt));

  REP(u, n) REP(v, n)
    if (e[u][v] != NO) {
      ++cnt[v];
    }

  REP(x, n)
    if (cnt[x] == 0) {
      q.push(x);
    }

  par = {-1, -1};

  int curr = 0;
  while (!q.empty()) {
    int x = q.front();
    idx[x] = curr++;
    q.pop();

    int best_y = -1;

    REP(y, n)
      if (e[y][x] == MAYBE) {
	if (best_y == -1 || idx[y] > idx[best_y]) {
	  best_y = y;
	}
      }

    if (best_y != -1) {
      par = {best_y, x};
      return;
    }

    REP(y, n) {
      if (e[x][y] != NO) {
	--cnt[y];
	if (cnt[y] == 0) {
	  q.push(y);
	}
      }
    }
  }
}

int query(vector<int>& perm) {
  printf("query");
  for (int x : perm)
    printf(" %d",x+1);
  printf("\n");
  fflush(stdout);

  int ret;
  scanf("%d",&ret);
  return ret;
}

void rec(vector<int>& v, int a, int b, vector<int>& perm) {
  if (v.empty()) return;
  assert(b - a + 1 >= (int)v.size());

  int x = v[0];
  int k = 0;
  vector<int> in, rest;

  for (int u : v) {
    if (u == x) continue;
    if (e[u][x] == NO)
      rest.push_back(u);
    else {
      in.push_back(u);
      ++k;
    }
  }

  perm[x] = a + k;
  rec(in, a, a + k - 1, perm);
  rec(rest, a + k + 1, b, perm);
}

vector<int> gen_perm(int step) {
  vector<int> perm(n);
  vector<int> v;
  REP(x, n) v.push_back(x);
  rec(v, 0, n - 1, perm);

  if (step == -1) REP(x, n) perm[x] = n - 1 - perm[x];

  return perm;
}

void print(vector<int> perm) {
  for (int x : perm) printf("%d ",x+1);
  printf("\n");
}

void closure(int u, int v) {
  REP(x, n) if (e[x][u] == YES) e[x][v] = YES;
  REP(x, n) if (e[v][x] == YES) e[u][x] = YES;
  REP(x, n) if (e[x][u] == YES) REP(y, n) if (e[v][y] == YES) e[x][y] = YES;
}

int main(void) {
  scanf("%d",&n);
  REP(i, n) scanf("%d",&p[i]);

  REP(i, n) REP(j, n)
    if (p[i] < p[j])
      e[i][j] = MAYBE;

  while (true) {
    pii par;
    find_edge(par);

    if (par.u == -1) break;

    e[par.u][par.v] = NO;
    e[par.v][par.u] = YES;

    REP(x, n) REP(y, n) e_tmp[x][y] = e[x][y];
    REP(x, n) REP(y, n) if (e[x][y] == MAYBE) e[x][y] = YES;
    closure(par.v, par.u);

    vector<int> perm = gen_perm(1);
    REP(x, n) REP(y, n) e[x][y] = e_tmp[x][y];

    int qans = query(perm);

    e[par.u][par.v] = NO;
    e[par.v][par.u] = NO;

    if (qans == 0) {
      e[par.u][par.v] = YES;
      closure(par.u, par.v);
    }
  }

  printf("end\n");
  print(gen_perm(1));

  REP(x, n) REP(y, x) swap(e[x][y], e[y][x]);

  print(gen_perm(-1));

  fflush(stdout);

  return 0;
}
