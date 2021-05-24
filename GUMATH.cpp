#include <bits/stdc++.h>
#define defSetting cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define fi first
#define se second
#define p(x) push(x)
#define lb lower_bound
#define ub upper_bound
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define mem(x, y) memset(x, y, sizeof(x))
#define asloop(i, x, y, z) for(auto i = x; i <= y; i += z)
#define deloop(i, x, y, z) for(auto i = x; i >= y; i -= z)

typedef long long int lli;
using namespace std;

const int mod = 10000009;

vector <int> def;

signed main(){
	defSetting

	def.pb(0);
	lli a = 0, tmp, ask;
	for (int i = 1; i <= 1e6; i++){
		if (i % 2 == 0)
			tmp = 1;
		else
			tmp = -1;
		a = (((a % mod) - tmp) * i) % mod;
		def.pb(a);
	}
	
	// a(i) = (a(k - 1) - (-1)^k) * k; a(0) = 0;
	
	int test;
	cin >> test;
	
	for (int i = 0; i < test; i++){
		int ask;
		cin >> ask;
		
		cout << def[ask] << endl;
	}

	return 0;
}

