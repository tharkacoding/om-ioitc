#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;

int n, sol;

vector<pair<int, int>> code[MAXN * MAXN];

void dump_code() {
  for (int i = 0; i < sol; ++i) {
    assert(!code[i].empty());
    for (const auto &p : code[i])
      printf("CMPSWP R%d R%d ", p.first + 1, p.second + 1);
    printf("\n");
  }
}

void cmpswp(int a, int b, int line_n) {
  if (code[line_n].empty()) code[line_n] = {};
  code[line_n].emplace_back(a, b);
}

int merge(int lo, int size, bool rev, int line_n) {
  if (size == 1) return 0;
  int k = 1;
  while (k * 2 < size) k <<= 1;
  for (int i = lo; i < lo + size - k; ++i) {
    if (!rev)
      cmpswp(i, i + k, line_n);
    else
      cmpswp(i + k, i, line_n);
  }
  return 1 + max(merge(lo, k, rev, line_n + 1),
                 merge(lo + k, size - k, rev, line_n + 1));
}

int malnar_sort(int lo, int size, bool rev, int line_n) {
  if (size == 1) return 0;
  int k = size / 2;
  int ret = max(malnar_sort(lo, k, !rev, line_n),
                malnar_sort(lo + k, size - k, rev, line_n));
  ret += merge(lo, size, rev, line_n + ret);
  return ret;
}

int main(void) {
  scanf("%d", &n);

  sol = malnar_sort(0, n, false, 0);

  printf("%d\n", sol);
  dump_code();

  return 0;
}
