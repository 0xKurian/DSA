#include <bits/stdc++.h>

//// Ta thuat
//#pragma GCC optimize("O2")
//#pragma GCC target("avx,avx2,fma")

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int, int>;

const int MOD = 1000000007;
const int N = 1e6 + 5;

template<typename T> inline constexpr T inf = T{};
template<> inline constexpr int inf<int> = 1'010'000'000;
template<> inline constexpr ll inf<ll> = 2'020'000'000'000'000'000LL;

#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define eb emplace_back
#define el cout << '\n'
#define rep(i, n) for(int i = 0; i < (n); i++)
#define For(i, a, b) for(int i = (a); i <= (b); i++)
#define Fod(i, a, b) for(int i = (a); i >= (b); i--)
#define bit(x, i) (((x) >> (i)) & 1)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r) { return l + rng() % (r - l + 1); }

inline int last_bit(ull x) { return x == 0 ? -1 : 63 - __builtin_clzll(x); }
inline int first_bit(ull x) { return x == 0 ? -1 : __builtin_ctzll(x); }
inline int popc(ull x) { return __builtin_popcountll(x); }

template <class A, class B> inline bool chkmin(A &a, const B &b) { if (a > b) { a = b; return true; } return false; }
template <class A, class B> inline bool chkmax(A &a, const B &b) { if (a < b) { a = b; return true; } return false; }

#ifdef ONLINE_JUDGE
    #define cerr for(;false;) cerr
#endif

template<typename T> istream& operator >>(istream &o, vector<T> &I) {
    assert(!I.empty());
    for(int i = 0; i < I.size(); i++) o >> I[i];
    return o;
}
template<typename T> ostream& operator <<(ostream &o, const vector<T> &I) {
    o << "[";
    for(int i = 0; i < I.size(); i++) {
        #ifndef ONLINE_JUDGE
        if(i == 50) { o << "...(total " << I.size() << " elements)"; break; }
        #endif
        o << I[i];
        if(i + 1 < I.size()) o << ",";
    }
    o << "]";
    return o;
}
template<typename T, size_t S> istream& operator >>(istream &o, array<T,S> &I) {
    assert(S > 0);
    for(int i = 0; i < S; i++) o >> I[i];
    return o;
}
template<typename T, size_t S> ostream& operator <<(ostream &o, const array<T,S> &I) {
    o << "[";
    for(int i = 0; i < S; i++) {
        #ifndef ONLINE_JUDGE
        if(i == 50) { o << "...(total " << S << " elements)"; break; }
        #endif
        o << I[i];
        if(i + 1 < S) o << ",";
    }
    o << "]";
    return o;
}

#define DEBUG_1(x) #x "=" << (x)
#define DEBUG_2(x,y) DEBUG_1(x) << ", " << DEBUG_1(y)
#define DEBUG_3(x,y,z) DEBUG_2(x,y) << ", " << DEBUG_1(z)
#define DEBUG_4(x,y,z,w) DEBUG_3(x,y,z) << ", " << DEBUG_1(w)
#define DEBUG_5(x,y,z,w,v) DEBUG_4(x,y,z,w) << ", " << DEBUG_1(v)
#define DEBUG_6(x,y,z,w,v,u) DEBUG_5(x,y,z,w,v) << ", " << DEBUG_1(u)
#define GET_MACRO(_1,_2,_3,_4,_5,_6,NAME,...) NAME
#define debug(...) do { \
    cerr << "(line " << __LINE__ << "): "; \
    cerr << GET_MACRO(__VA_ARGS__, DEBUG_6, DEBUG_5, DEBUG_4, DEBUG_3, DEBUG_2, DEBUG_1)(__VA_ARGS__); \
    cerr << '\n'; \
} while(0)

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a(n * 2);
    for(int i = 0; i < 2 * n; i++){
        if(i < n){
            cin >> a[i].first;
            a[i].second = 1;
        }
        else{
            cin >> a[i].first;
            a[i].second = 2;
        }
    }
    sort(a.begin(), a.end(), [](pair<int, int> &x, pair<int, int> &y){
        return x.first < y.first;
    });
    // for(auto [x, y] : a){
    //     cout << x << ' ' << y << '\n';
    // }
    int ans = 0;
    int size = 0;
    for(int i = n * 2 - 1; i >= 0; i--){
        if(size == n) break;
        if(a[i].second == 2 && k != 0){
            ans += a[i].first;
            k--;
            size++;
            continue;
        }
        if(a[i].second == 1){
            size++;
            ans += a[i].first;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
        if(fopen("input.inp", "r")){
            freopen("input.inp", "r", stdin);
            freopen("output.out", "w", stdout);
        }
    #endif

    int T = 1;
    cin >> T;
    while (T--) solve();
    
    return 0;
}
