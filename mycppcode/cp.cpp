#include <bits/stdc++.h>
using namespace std;
 
const int M = 1e9+7;
#define sc ;
#define tc ll t sc cin >> t sc while (t--)
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define intmax INT_MAX
#define intmin INT_MIN
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define vpl vector<pair<ll,ll>>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define per(i,a,b) for(ll i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define deci(x, y) fixed<<setprecision(y)<<x
 
typedef long long ll; 
typedef unsigned long long ull;
typedef long double lld;
 
//debug 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

const ll inf = 9e18;
const ll mod = 1e9 + 7;
const ll maxN = 2e5 + 5;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
//--------------------------------------------------------------------------------------------------------------------------//

int mainSolve() {

    return 0;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    clock_t begin = clock();

    freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
    
    mainSolve();

    #ifndef ONLINE_JUDGE
    clock_t end = clock();
    // fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - begin) / CLOCKS_PER_SEC);
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
    #endif

    return 0;
}