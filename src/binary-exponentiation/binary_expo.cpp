#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define M_PI 3.14159265358979323846
#define MOD 1000000007
#define INF 1000000005
#define NEG_INF -1000000005
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> ipair;
typedef pair<ll, ll> llpair;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

/*
  Author: Koushik Sahu
  Created: 2022-03-13 10:02 IST
*/

ll binpow(ll n, ll m){
  if(m == 0) return 1;
  if(m%2 == 0){
    ll tmp = binpow(n, m/2);
    return (tmp*tmp)%MOD;
  }
  return (n * binpow(n, m-1))%MOD;
}

ll binpow(ll n, ll m, ll mod){
  ll ans = 1;
  while(m){
    if(m%2){
      ans *= n;
      ans %= mod;
    }
    n *= n;
    n %= mod;
    m /= 2;
  }
  return ans;
}

void solve(){
  int n, m;
  cin>>n>>m;
  auto start = chrono::high_resolution_clock::now();
  cout<<binpow(n, m)<<'\n';
  auto stop = chrono::high_resolution_clock::now();
  auto duration1 = chrono::duration_cast<chrono::microseconds> (stop - start);
  cout<<duration1.count()<<'\n';
  start = chrono::high_resolution_clock::now();
  cout<<binpow(n, m, MOD)<<'\n';
  stop = chrono::high_resolution_clock::now();
  auto duration2 = chrono::duration_cast<chrono::microseconds> (stop - start);
  cout<<duration2.count()<<'\n';
  cout<<"Iterative approach is "<<duration1/duration2<<" times faster\n";
}

int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  int T=1;
  //cin>>T;
  while(T--){
    solve();
  }
  return 0;
}

