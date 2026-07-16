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

void solve(){
    int n, k; cin >> n >> k;
    if(n < k){
        cout << 1 << '\n';
        cout << n << '\n';
        return;
    }
    if(n % k){
        cout << 1 << '\n';
        cout << n << '\n';
        return;
    }
    cout << 2 << '\n';
    cout << 1 << ' ' << n - 1 << '\n';
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
