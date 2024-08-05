#include <bits/stdc++.h>
using namespace std;

//#define debuging 1

#ifdef debuging
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

using ll = long long ;
using pll = pair<ll,ll>;
using vll = vector<ll>;

#define fastread ios_base::sync_with_stdio(false), cout.tie(0)
#define ull unsigned long long
#define all(x) begin(x),end(x)
#define pb push_back
mt19937 mrand(random_device{}());
int rnd(int x) { return mrand() % x;} /// random numbers

const ll mod = 1e9+7; /// module
const ll inf = 1e9 + 5; /// big const for int
const ll INF = 1e18 + 5; /// big const for long long

template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}

void solve() /// solving func
{
    
}

int main() /// main func
{   
    fastread;   
    ll tt = 1;
    cin >> tt;
    while(tt --> 0)
    {
        solve();
    }
    return 0;
}
