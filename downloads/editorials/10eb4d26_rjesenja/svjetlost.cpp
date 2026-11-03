// Autor: Tonko Sabolcec

#include <algorithm>
#include <cassert>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

const int MAXN = 2 * 100100;

struct Pt {
  int x, y;

  friend Pt operator-(const Pt &a, const Pt &b) {
    return {a.x - b.x, a.y - b.y};
  }

  friend bool operator<(const Pt &a, const Pt &b) {
    if (a.x != b.x) return a.x < b.x;
    return a.y < b.y;
  }
};

int ccw(const Pt &a, const Pt &b, const Pt &c) {
  ll w = (ll)a.x * (b.y - c.y) + (ll)b.x * (c.y - a.y) + (ll)c.x * (a.y - b.y);
  if (w > 0) return 1;
  if (w < 0) return -1;
  return 0;
}

int n, q;
int k[MAXN];
int out1[MAXN];
int out2[MAXN];
int L[MAXN], R[MAXN];
Pt P[MAXN];
Pt seg[MAXN];

bool cmp(int i, int j) {
  Pt a = seg[i], b = seg[j];
  if (a.y >= 0 && b.y < 0) return true;
  if (a.y < 0 && b.y >= 0) return false;
  if (a.y == 0 && b.y == 0) return a.x > b.x;
  int c = ccw({0, 0}, a, b);
  if (c != 0) return c > 0;
  return a < b;
}

void init_segments() {
  static map<pair<int, int>, int> ind;
  static set<int> alive;
  for (int i = 0; i < n; ++i) {
    ind[{i, (i + 1) % n}] = i;
    seg[i] = P[(i + 1) % n] - P[i];
    alive.insert(i);
  }
  for (int i = 0; i < q; ++i) {
    auto it = alive.find(k[i]);
    auto A = it, B = it;
    assert(it != alive.end());
    if (A == alive.begin()) A = alive.end();
    A--;
    B++;
    if (B == alive.end()) B = alive.begin();
    ind[{*A, *B}] = n + i;
    seg[n + i] = P[*B] - P[*A];
    out1[i] = ind[{*A, *it}];
    out2[i] = ind[{*it, *B}];
    alive.erase(it);
  }
  static int ord[MAXN];
  for (int i = 0; i < n + q; ++i)
    ord[i] = i;
  sort(ord, ord + n + q, cmp);
  int j = 1;
  for (int i = 0; i < n + q; ++i) {
    R[ord[i]] = i;
    while (ccw({0, 0}, seg[ord[j]], seg[ord[i]]) != 1)
      j = (j + 1) % (n + q);
    L[ord[i]] = j;
  }
}


namespace Tournament {
  const int off = 1 << 18;
  int from, to;
  double val;
  double data[2*off];
  double flag[2*off];

  void propagate(int nd) {
    data[nd] += flag[nd];
    if (nd < off) {
      flag[2 * nd] += flag[nd];
      flag[2 * nd + 1] += flag[nd];
    }
    flag[nd] = 0;
  }

  void _update(int nd, int lo, int hi) {
    propagate(nd);
    if (lo >= from && hi <= to) {
      flag[nd] = val;
      propagate(nd);
      return;
    }
    if (lo >= to || hi <= from) return;
    int mid = (lo + hi) / 2;
    _update(2 * nd, lo, mid);
    _update(2 * nd + 1, mid, hi);
    data[nd] = max(data[2 * nd], data[2 * nd + 1]);
  }

  void update(int l, int r, double v) {
    from = l, to = r + 1, val = v;
    _update(1, 0, off);
  } 
}

void update(int l, int r, double v) {
  if (l <= r) {
    Tournament::update(l, r, v);
  } else {
    Tournament::update(0, r, v);
    Tournament::update(l, n + q - 1, v);
  }
}

double query() {
  return Tournament::data[1];
}

int main(void) {
  scanf("%d", &n);
  for (int i = 0; i < n; ++i)
    scanf("%d%d", &P[i].x, &P[i].y);
  scanf("%d", &q);
  for (int i = 0; i < q; ++i) {
    scanf("%d", &k[i]);
    k[i]--;
  }

  init_segments();

  static double dist[MAXN];
  for (int i = 0; i < n + q; ++i)
    dist[i] = sqrt((ll)seg[i].x * seg[i].x + (ll)seg[i].y * seg[i].y);

  for (int i = 0; i < n; ++i)
    update(L[i], R[i], dist[i]);

  printf("%.10lf\n", query());
  for (int i = 0; i < q; ++i) {
    update(L[out1[i]], R[out1[i]], -dist[out1[i]]);
    update(L[out2[i]], R[out2[i]], -dist[out2[i]]);
    update(L[n + i], R[n + i], dist[n + i]);
    printf("%.10lf\n", query());
  }

  return 0;
}
