#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll>vl;
typedef vector<pi> vpi;
typedef queue<int> qi;
typedef queue<pi> qpi;

#define endl '\n'
#define mp make_pair
#define pb push_back
#define fr first
#define sc second


#define resetArray(a, b) memset(a, b, sizeof(a))
#define resetVector(a, b) fill(a.begin(), a.end(), b)
#define clr(a) a.clear()
#define sz(a) a.size()

#define loop(a,b,c) for(int i = a; i <= b ; i+=c)
#define rloop(a,b,c) for(int i = a ; i >= b  ; i-=c)

#define getI(a) scanf("%d", &a)
#define getII(a,b) scanf("%d %d", &a, &b)
#define getIII(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define getL(a) scanf("%lld", &a)

#define present(c,x) if (c.find(x) != c.end)
#define sort(v) sort(v.begin(), v.end())

#define andbit(x, i)  x&(1<<i)
#define orbit(x, i)  x|(1<<i)

#define printA(a,l,r) loop(i,l,r) cout << a[i] << (i==r?endl:' ')
#define printV(a) if(a.size() >= 1) printA(a,0,a.size()-1); else cout<<"empty"



// for directions
const int fx[4][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}};
const int fxx[8][2] = {{0, 1}, {0, -1}, {1, 0}, { -1, 0}, {1, 1}, {1, -1}, { -1, 1}, { -1, -1}};


int main() {
	return 0;
}