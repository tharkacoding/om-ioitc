#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double lf;
typedef long double Lf;
typedef pair <int,int> pii;
typedef pair <ll, ll> pll;

#define TRACE(x) cerr << #x << "  " << x << endl
#define FOR(i, a, b) for (int i = (a); i < int(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define _ << " " <<

#define fi first
#define sec second
#define mp make_pair
#define pb push_back

const int MAXN = 100100;

int n, m, sol[MAXN], pamti[MAXN];
int bio[MAXN], x;

map <int, vector <int> > v;
vector <vector <int> > intervali;

void solve() {
  vector <vector <int> > novi;
  novi.pb({-100, -1, 0});
  for (auto Int : intervali) {
    int l = Int[0];
    int r = Int[1];
    int t = Int[2];
    if (r - l + 1 == 1) {
      novi.pb(Int);
    } else if (r - l + 1 == 2) {
      novi.pb({l, l, t});
      novi.pb({r, r, t});
    } else {
      novi.pb({l, l, t});
      novi.pb({l+1, r-1, t});
      novi.pb({r, r, t});
    }
  }
  intervali = novi;
  intervali.pb({intervali.back()[1]+1, INT_MAX, 0});
  ll sol = 0;
  REP(iter, 2) {
    ll tmp = (ll)intervali[0][2] * (intervali[0][1] - intervali[0][0] + 1);
    int r = 0;
    REP(l, (int)intervali.size()) {
      r = max(r, l);
      while (intervali[r][1] - intervali[l][0] + 1 < x && r + 1 < (int)intervali.size()) {
        r++;
        tmp += (ll)intervali[r][2] * (intervali[r][1] - intervali[r][0] + 1);
      }
      ll odu = (intervali[r][1] - intervali[l][0] + 1 - x) * (ll)intervali[r][2];
      sol = max(sol, tmp - odu);
      tmp -= (ll)intervali[l][2] * (intervali[l][1] - intervali[l][0] + 1);
    }
    for (auto &I : intervali) {
      swap(I[0], I[1]);
      I[0] *= -1;
      I[1] *= -1;
    }
    reverse(all(intervali));
  }
  cout << sol << endl;
}

int main() {
  cin >> n >> m >> x;
  FOR(i, 1, n + 1) {
    int l, r;
    cin >> l >> sol[i] >> r;
    v[l].pb(i);
    if (l + sol[i] <= r) v[l + sol[i]].pb(i);
    v[r+1].pb(-i);
  }

  int cnt = 0;
  int tot = 0;
  int last = 0;
  int placa = 0;
  for (auto &t : v) {
    if (cnt >= m) {
      tot += t.fi - last;
      intervali.pb({last, t.fi-1, placa});
    } else {
      intervali.pb({last, t.fi-1, 0});
    }

    for (auto &x : t.sec) {
      if (x < 0) {
        cnt--;
        if (bio[-x] == 2) {
          sol[-x] += tot - pamti[-x];
          placa--;
        }
      }
    }

    for (auto &x : t.sec) {
      if (x < 0) continue;
      if (!bio[x]) cnt++;
      if (bio[x]) {
        pamti[x] = tot;
        placa++;
      }
      bio[x]++;
    }

    last = t.fi;
  }

  solve();
  return 0;
}

