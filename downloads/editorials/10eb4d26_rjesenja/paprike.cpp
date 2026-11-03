// Autor: Ivan Paljak

#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

typedef long long llint;

const int MAXN = 3e5 + 10;

int n, k;
int h[MAXN];

llint sub_sum[MAXN];

vector <int> v[MAXN];

int rek(int node, int dad) {
  int ret = 0;
  vector <llint> sz;

  for (int nxt : v[node]) {
    if (nxt == dad) continue;
    ret += rek(nxt, node);
    sub_sum[node] += sub_sum[nxt];
    sz.emplace_back(sub_sum[nxt]);
  }

  sub_sum[node] += (llint) h[node];
  if (sub_sum[node] <= k)
    return ret;

  sort(sz.rbegin(), sz.rend());

  for (int i = 0; i < sz.size() && sub_sum[node] > k; ++i) {
    sub_sum[node] -= sz[i];
    ++ret;
  }

  return ret;
}

int main(void) {
  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; ++i)
    scanf("%d", &h[i]);

  for (int i = 0; i < n - 1; ++i) {
    int x, y;
    scanf("%d%d", &x, &y); --x; --y;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  printf("%d\n", rek(0, -1));

  return 0;
}
