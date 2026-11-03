#include <algorithm>
#include <cstdio>
#include <set>
#include <vector>

using namespace std;

#define MAXE 10000
#define MAXV 500
#define UNKNOWN -1

typedef pair<int, int> par;

int const oo = 1000000000;

struct Edge {
  int u;
  int v;
  int cost;
};
inline bool EdgeCmp(Edge const& A, Edge const& B) { return A.u < B.u; }

void ReadEdge(Edge* edge) {
  static char buff[10];
  scanf("%d%d%s", &edge->u, &edge->v, buff); --edge->u; --edge->v;
  if (buff[0] == 'x') {
    edge->cost = UNKNOWN;
  } else {
    sscanf(buff, "%d", &edge->cost);
  }
}

int N, M;
Edge E[MAXE];
Edge* V[MAXV + 1];

class PriorityQueue {
 public:
  PriorityQueue(int size)
      : values_(size, oo),
        cmp_(&values_),
        order_(cmp_) {}

  void Update(int key, int value) {
    if (value >= values_[key]) return;
    order_.erase(key);
    values_[key] = value;
    order_.insert(key);
  }

  bool IsEmpty() {
    return order_.empty();
  }

  par ExtractMin() {
    int key = *order_.begin();
    order_.erase(order_.begin());
    return par(key, values_[key]);
  }

 private:
  struct Cmp {
    Cmp(vector<int> const* values) : values_(values) {}
    vector<int> const* values_;
    inline bool operator() (int a, int b) {
      if (values_->at(a) != values_->at(b)) {
        return values_->at(a) < values_->at(b);
      }
      return a < b;
    }
  };

  vector<int> values_;
  Cmp cmp_;
  set<int, Cmp> order_;
};

vector<par> ParetoDijkstra(int source, int destination) {
  vector<vector<par> > ret(N);

  PriorityQueue* curr = new PriorityQueue(N);
  curr->Update(source, 0);
  for (int x = 0; !curr->IsEmpty(); ++x) {
    PriorityQueue* next = new PriorityQueue(N);

    while (!curr->IsEmpty()) {
      par label = curr->ExtractMin();
      int u = label.first;
      int y = label.second;
      if (!ret[u].empty() && ret[u].back().second <= y) continue;

      ret[u].push_back(par(x, y));

      for (Edge* edge = V[u]; edge != V[u + 1]; ++edge) {
        if (edge->cost == UNKNOWN) {
          next->Update(edge->v, y);
        } else {
          curr->Update(edge->v, y + edge->cost);
        }
      }
    }
    swap(curr, next);
    delete next;
  }

  return ret[destination];
}

int main() {
  scanf("%d%d", &N, &M);
  for (int i = 0; i < M; ++i) ReadEdge(&E[i]);
  sort(E, E + M, EdgeCmp);
  V[0] = E;
  for (int i = 1; i <= N; ++i) {
    for (V[i] = V[i - 1]; V[i] != E + M && V[i]->u < i; ++V[i]);
  }

  int Q;
  scanf("%d", &Q);
  for (int i = 0; i < Q; ++i) {
    int a, b;
    scanf("%d%d", &a, &b); --a; --b;
    vector<par> ret = ParetoDijkstra(a, b);
    if (ret.empty()) {
      printf("0 0\n");
    } else if (ret[0].first != 0) {
      printf("inf\n");
    } else {
      int prev = 0;
      int cnt = 1;
      long long sum = ret[0].second;
      for (int i = ret.size() - 1; i > 0;) {
        int best_j = -1;
        int curr = 1000000000;

        for (int j = 0; j < i; ++j) {
          int tmp = (ret[j].second - ret[i].second - 1) /
                    (ret[i].first - ret[j].first);
          if (tmp < curr) {
            curr = tmp;
            best_j = j;
          }
        }
        cnt += curr - prev;
        sum += (long long) ret[i].first * (curr - prev) * (curr + prev + 1) / 2;
        sum += (long long) ret[i].second * (curr - prev);
        prev = curr;
        i = best_j;
      }
      printf("%d %lld\n", cnt, sum);
    }

  }

  return 0;
}
