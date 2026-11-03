#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define REP(i, n) FOR(i, 0, n)
#define _ << " " <<
#define pb push_back
#define fi first
#define se second
#define sz(c) (int)(c).size()
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define TRACE(x) cerr << #x << "  " << x << endl
template<typename T1, typename T2>inline void minaj(T1 &x, T2 y) { x = (x > y ? y: x);}
template<typename T1, typename T2>inline void maxaj(T1 &x, T2 y) { x = (x < y ? y: x);}

typedef double lf;
typedef long long ll;
typedef pair<int, int> pii;

const int mod = 1e9 + 7;
int add(int x, int y) {x += y; if(x >= mod) return x - mod; return x;}
int sub(int x, int y) {x -= y; if(x < 0) return x + mod; return x;}
int mul(int x, int y) {return (ll) x * y % mod;}

const int MAXN = 5005;

int a[MAXN];
int dp[MAXN][MAXN];

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);

  int n; cin >> n;

  REP(i, n) {
    cin >> a[i];
  }

  REP(l, n) {
    vector<int> prijelazi;
    REP(x, l) {
      prijelazi.push_back(dp[x][l - 1]);
    }
    reverse(prijelazi.begin(), prijelazi.end());
    prijelazi.push_back(-MAXN);
    for (int i = prijelazi.size() - 2; i >= 0; --i) {
      maxaj(prijelazi[i], prijelazi[i + 1]);
    }

    int delta = 0;
    int best = 0;
    int up = 0, down = 0;

    int i = l - 1, j = l;

    do {
      int du = -1;
      int dd = -1;

      if (i >= 0) {
        du = up + a[i];
      }
      if (j < n) {
        dd = down + a[j];
      }

      if (du == -1) {
        dp[l][j] = best;
        down += a[j];
        j ++;
        continue;
      }
      if (dd == -1) {
        break;
      }
      if (dd < du) {
        dp[l][j] = max(best, delta + prijelazi[l-i-1]);
        down += a[j];
        j ++;
      }
      else if (du < dd) {
        if (i) maxaj(best, dp[i-1][l-1] + delta);
        up += a[i];
        i --;
      }
      else {
        dp[l][j] = max(best, delta + prijelazi[l-i-1]);
        delta ++;
        down += a[j];
        j ++;
      }
    } while (j < n);
  }

  int sol = 0;
  REP(i, n) {
    maxaj(sol, dp[i][n-1]);
  }

  cout << sol << endl;
}
