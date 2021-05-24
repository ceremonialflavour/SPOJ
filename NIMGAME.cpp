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

const int mod = 1e9+7;

signed main(){
	defSetting

	vector <lli> fib;
	fib.pb(1);
	fib.pb(1);
	for (int i = 2; i < 100; i++){
		fib.pb(fib[i - 1] + fib[i - 2]);
	}
	
	for (int i = 2; fib[i] <= 1597; i++){
		cout << fib[i] << endl;
	}

	return 0;
}

