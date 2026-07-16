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

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> v(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin() + 1, v.begin() + 1 + n, [](const pair<int, int> &a, const pair<int, int> &b){
        return a.first < b.first;
    });
    int ma_before = -1;
    for(int i = 1; i <= n; i++){
        if(v[i].second <= ma_before){
            cout << "Happy Alex";
            return;
        }
        else{
            ma_before = max(v[i].second, ma_before);
        }
    }
    cout << "Poor Alex";
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
    //cin >> T;
    while (T--) solve();
    
    return 0;
}
