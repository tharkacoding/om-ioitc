// Autor: Ante Derek

#include <iostream>
#include <map>
#include <vector>
#include <cassert>
#include <set>

#define REQUIRE(x) if (!(x)) return NO

using namespace std;

const string NO = "nemoguce";

const map<char, pair<int, int>> M = {
  {'a', {-1, 0}},
  {'A', {1, 0}},
  {'b', {0, -1}},
  {'B', {0, 1}},
  {'c', {-1, -1}},
  {'C', {1, 1}},
  {'d', {-1, 1}},
  {'D', {1, -1}}
};

struct P {
  int x, y;
};

string cd_only(int c, int d) {
  assert(c > 0 && c%2 == 0);
  assert(d > 0 && d%2 == 0);
  return string(c/2, 'C') + 'd' +
    string(c/2-1, 'c') +
    string(d/2-1, 'd') + 'c' +
    string(d/2, 'D');
}

string ab_only(int a, int b) {
  assert(a > 0 && a%2 == 0);
  assert(b > 0 && b%2 == 0);
  return string(a/2, 'A') + 'B' +
    string(a/2-1, 'a') +
    string(b/2-1, 'B') + 'a' +
    string(b/2, 'b');
}

string start(int &a, int &b, int &c, int &d) {
  vector<int> r = {a%2, b%2, c%2, d%2};
  if (r == vector<int>{1, 1, 0, 1}) {
    a--, b--, d--;
    return "Adb";
  } else if (r == vector<int>{1, 1, 1, 0}) {
    a--, b--, c--;
    return "Cab";
  } else if (r == vector<int>{0, 0, 1, 1}) {
    c--, d--;
    if (a > 0) {
      a -= 2;
      return "AAcd";
    } else if (b > 0) {
      b -= 2;
      return "BBcD";
    } else {
      assert(false);
    }
  } else if (r == vector<int>{0, 0, 0, 0}) {
    if (a > 0 && c > 0) {
      a -= 2;
      c -= 2;
      return "ACac";
    } else if (a > 0 && d > 0) {
      a -= 2;
      d -= 2;
      return "ADad";
    } else if (b > 0 && c > 0) {
      b -= 2;
      c -= 2;
      return "BCbc";
    } else if (b > 0 && d > 0) {
      b -= 2;
      d -= 2;
      return "BDbd";
    } else {
      assert(false);
    }
  } else {
    assert(false);
  }
}

vector<P> gen(string s) {
  int x = 0;
  int y = 0;
  vector<P> out;
  for (int i=0; i<(int)s.size(); i++) {
    out.push_back({x, y});
    x += M.at(s[i]).first;
    y += M.at(s[i]).second;
  }
  return out;
}

int ok(string s) {
  int x = 0;
  int y = 0;
  set<pair<int, int>> g;
  for (int i=0; i<(int)s.size(); i++) {
    x += M.at(s[i]).first;
    y += M.at(s[i]).second;
    if (g.count({x, y}))
      return 0;
    g.insert({x, y});
    x += M.at(s[i]).first;
    y += M.at(s[i]).second;
    if (g.count({x, y}))
      return 0;
    g.insert({x, y});
  }
  assert(x == 0 && y == 0);
  return 1;
}

string add(const string &s, char c, int t) {
  if (t == 0)
    return s;
  assert(t%2 == 0);
  string X(t/2, c);
  string Y(t/2, toupper(c));
  for (int i=0; i<(int)s.size(); i++) {
    if (c == 'c' && s[i] == 'D')
      continue ;
    if (c == 'c' && s[i] == 'd')
      continue ;
    if (c == 'd' && s[i] == 'C')
      continue ;
    if (c == 'd' && s[i] == 'c')
      continue ;
    string s1 = s.substr(0, i) + X + s[i] + Y + s.substr(i+1);
    if (ok(s1))
      return s1;
    string s2 = s.substr(0, i) + Y + s[i] + X + s.substr(i+1);
    if (ok(s2))
      return s2;
  }
  assert(false);
}

void output(const vector<P> p) {
  for (auto a : p)
    cout << a.x << " " << a.y << endl;
}

string solve(int a, int b, int c, int d) {
  REQUIRE(a+b+c+d >= 3);
  REQUIRE((a+c+d)%2 == 0);
  REQUIRE((b+c+d)%2 == 0);
  if (a == 0 && b == 0) {
    REQUIRE(c > 0 && c%2 == 0);
    REQUIRE(d > 0 && d%2 == 0);
    return cd_only(c, d);
  }
  if (c == 0 && d == 0) {
    REQUIRE(a > 0 && a%2 == 0);
    REQUIRE(b > 0 && b%2 == 0);
    return ab_only(a, b);
  }
  string s = start(a, b, c, d);
  assert(ok(s));
  s = add(s, 'a', a);
  s = add(s, 'b', b);
  s = add(s, 'c', c);
  s = add(s, 'd', d);
  return s;
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  string sol = solve(a, b, c,d);
  if (sol == NO) {
    assert(false);
    cout << sol << endl;
  } else {
    output(gen(sol));
  }
  return 0;
}
