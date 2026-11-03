#include <cstdio>
#include <vector>
#include <algorithm>
#define X first
#define Y second


using namespace std;

typedef long long ll;

const int MAXN = 100005;
const ll INF = 200000000011;
typedef pair<ll,ll> ii;

int n,k;
ii p[MAXN];


struct AABB{
    bool inited;
    ii a, b;
    AABB(){
        inited = false;
    }
    AABB(ii x){
        a = x;
        b = x;
        inited = true;
    }
    void rotate90(){
        ii na = ii(min(-a.Y, -b.Y), min(a.X, b.X));
        ii nb = ii(max(-a.Y, -b.Y), max(a.X, b.X));
        a=na;b=nb;
    }
    void add_ii(ii x){
        if(!inited){
            a = x;
            b = x;
            inited = true;
        }
        a.X = min(a.X, x.X);
        a.Y = min(a.Y, x.Y);
        b.X = max(b.X, x.X);
        b.Y = max(b.Y, x.Y);
    }
    void expand_left(ll amt){
        a.X -= amt;
    }
    void expand_right(ll amt){
        b.X += amt;
    }
    void expand_down(ll amt){
        a.Y -= amt;
    }
    void expand_up(ll amt){
        b.Y += amt;
    }
    ll width(){
        return b.X-a.X;
    }
    ll height(){
        return b.Y-a.Y;
    }
    ll max_dim(){
        return max(width(), height());
    }
    bool contains(ii p){
        return (a.X<=p.X && p.X<=b.X
             && a.Y<=p.Y && p.Y<=b.Y);
    }
    bool overlaps(AABB d){
        return contains(d.a) || contains(d.b)
            || contains(ii(d.a.X, d.b.Y)) || contains(ii(d.b.X, d.a.Y))
            || d.contains(a) || d.contains(b)
            || d.contains(ii(a.X, b.Y)) || d.contains(ii(b.X, a.Y));
    }
};

void rotate90(ll n, ii* p){
    for(int i=0;i<n;i++){
        ii old = p[i];
        p[i] = ii(-old.Y, old.X);
    }
}

bool cmp(ii a, ii b){
    if(a.Y==b.Y) return a.X<b.X;
    return a.Y<b.Y;
}

ll solve1(int n, ii* p, vector<AABB>& sol){
    AABB aabb;
    for(int i=0;i<n;i++){
        aabb.add_ii(p[i]);
    }
    if(aabb.max_dim()==0) aabb.expand_left(1);
    aabb.expand_left(aabb.max_dim() - aabb.width());
    aabb.expand_down(aabb.max_dim() - aabb.height());
    sol.push_back(aabb);
    return aabb.max_dim();
}


ll dp[MAXN];
vector<AABB> dp2[MAXN];
void prepare_dp(){
    fill(dp, dp+MAXN, -1);
    for(int i=0;i<MAXN;i++) dp2[i].clear();
}
ll solve2(int n, ii* p, vector<AABB>& sol, ll x0=-INF){
    if(dp[n]==-1){
        ll& sol1 = dp[n];
        vector<AABB>& sol2 = dp2[n];
        if(n==0){
            AABB k1(ii(x0+5,x0+5));
            k1.expand_left(1);
            k1.expand_down(1);
            AABB k2(ii(x0+10, x0+10));
            k2.expand_right(1);
            k2.expand_down(1);
            sol1=1;
            sol2.push_back(k1);
            sol2.push_back(k2);
        }else if(n==1){
            AABB k1(p[0]);
            k1.expand_left(1);
            k1.expand_down(1);
            AABB k2(ii(p[0].X +10, p[0].X +10));
            k2.expand_right(1);
            k2.expand_down(1);
            sol1=1;
            sol2.push_back(k1);
            sol2.push_back(k2);
        }else{
            sol1 = INF;

            vector<AABB> aabb1, aabb2;
            // Uzduz x-osi su -> provjeri prignjecenost srednjeg
            sort(p, p+n);
            aabb1.push_back(AABB(p[0]));
            for(int i=1;i<n;i++){
                AABB nxt = aabb1.back();
                nxt.add_ii(p[i]);
                aabb1.push_back(nxt);
            }
            aabb1[0].expand_left(1);
            aabb2.push_back(AABB(p[n-1]));
            for(int i=n-2;i>=0;i--){
                AABB nxt = aabb2.back();
                nxt.add_ii(p[i]);
                aabb2.push_back(nxt);
            }
            aabb2[0].expand_right(1);
            for(int i=0;i<n-1;i++){
                AABB k1 = aabb1[i];
                AABB k2 = aabb2[n-i-2];
                k1.expand_left(min(k1.max_dim() - k1.width(), k1.a.X-x0-1));
                k1.expand_right(k1.max_dim() - k1.width());
                k1.expand_down(k1.max_dim() - k1.height());
                k2.expand_right(k2.max_dim() - k2.width());
                k2.expand_down(k2.max_dim() - k2.height());


                if(!k1.overlaps(k2)){
                    ll csol1 = max(k1.max_dim(), k2.max_dim());
                    if(csol1 < sol1){
                        sol1 = csol1;
                        sol2.clear();
                        sol2.push_back(k1);
                        sol2.push_back(k2);
                    }
                }
            }
            // Uzduz y-osi su -> mogu rasti kako zele
            sort(p, p+n, cmp);
            aabb1.clear();aabb2.clear();

            aabb1.push_back(AABB(p[0]));
            for(int i=1;i<n;i++){
                AABB nxt = aabb1.back();
                nxt.add_ii(p[i]);
                aabb1.push_back(nxt);
            }
            aabb1[0].expand_down(1);

            aabb2.push_back(AABB(p[n-1]));
            for(int i=n-2;i>=0;i--){
                AABB nxt = aabb2.back();
                nxt.add_ii(p[i]);
                aabb2.push_back(nxt);
            }
            aabb2[0].expand_up(1);

            for(int i=0;i<n-1;i++){
                AABB prvi = aabb1[i];
                AABB drugi = aabb2[n-i-2];
                if(!prvi.overlaps(drugi)){
                    ll csol1 = max(prvi.max_dim(), drugi.max_dim());
                    if(csol1 < sol1){
                        sol1 = csol1;
                        sol2.clear();
                        AABB k1 = prvi, k2 = drugi;
                        k1.expand_right(k1.max_dim() - k1.width());
                        k1.expand_down(k1.max_dim() - k1.height());
                        k2.expand_right(k2.max_dim() - k2.width());
                        k2.expand_up(k2.max_dim() - k2.height());
                        sol2.push_back(k1);
                        sol2.push_back(k2);
                    }
                }
            }
        }
    }
    sol.insert(sol.end(), dp2[n].begin(), dp2[n].end());
    return dp[n];
}

bool possible(int n, ii* p, ll d, vector<AABB>& sol){
    sort(p, p+n);
    AABB aabb;
    int i,j;
    for(i=0,j=0;i<n;i=j){
        AABB nxt = aabb;
        for(;j<n;j++){
            if(p[j].X == p[i].X){
                nxt.add_ii(p[j]);
            }else{
                break;
            }
        }
        if(nxt.max_dim() > d) break;
        else aabb = nxt;
    }
    if(!aabb.inited) return false;
    if(aabb.max_dim()==0) aabb.expand_left(1);
    aabb.expand_left(aabb.max_dim()-aabb.width());
    aabb.expand_down(aabb.max_dim()-aabb.height());
    sol.push_back(aabb);
    return solve2(n-i, p+i, sol, aabb.b.X)<=d;
}

int solve3(int n, ii* p, vector<AABB>& sol){
    if(n<=2){
        solve2(n, p, sol);
        AABB k3(ii(p[0].X +20, p[0].X +20));
        k3.expand_right(1);
        k3.expand_down(1);
        sol.push_back(k3);
        return 1;
    }
    ll sol1 = INF;
    for(int i=0;i<4;i++){
        vector<AABB> tmp;
        ll lo = 1, hi = INF;
        while(lo<hi){
            ll mid = lo + (hi-lo)/2;
            tmp.clear();
            if(possible(n, p, mid, tmp)){
                hi=mid;
            }else{
                lo=mid+1;
            }
        }
        if(lo<sol1){
            sol1 = lo;
            sol.clear();
            possible(n, p, lo, sol);
            for(int j=i;j<4;j++){
                for(AABB& k:sol) k.rotate90();
            }
        }
        rotate90(n, p);
        prepare_dp();
    }
    return sol1;
}

int main(){
    scanf("%d%d", &n, &k);
    for(int i=0;i<n;i++) scanf("%lld%lld", &p[i].X, &p[i].Y);
    prepare_dp();
    vector<AABB> sol;
    switch(k){
    case 1: solve1(n, p, sol); break;
    case 2: solve2(n, p, sol); break;
    case 3: solve3(n, p, sol); break;
    default: return -1; break;
    }
    for(int i=0;i<sol.size();i++){
        printf("%lld %lld %lld\n", sol[i].a.X, sol[i].a.Y, sol[i].max_dim());
    }
}
