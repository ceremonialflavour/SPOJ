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
#define fileopen freopen("0. Input.txt", "r", stdin)
#define filewrite freopen("0. Output.txt", "w", stdout)
#define asloop(i, x, y, z) for(auto i = x; i <= y; i += z)
#define deloop(i, x, y, z) for(auto i = x; i >= y; i -= z)

typedef unsigned long long ull;
using namespace std;

const int mod = 1e9+7;

void divBySix(ull &ask, ull &ask1, ull &ask2){
	int rem = 6;
	if (ask % 2 == 0 and rem % 2 == 0){
		ask /= 2;
		rem /= 2;
	}
	if (ask % 3 == 0 and rem % 3 == 0){
		ask /= 3;
		rem /= 3;
	}
	if (rem == 1)
		return;
	if (ask1 % 2 == 0 and rem % 2 == 0){
		ask1 /= 2;
		rem /= 2;
	}
	if (rem == 1)
		return;
	if (ask1 % 3 == 0 and rem % 3 == 0){
		ask1 /= 3;
		rem /= 3;
	}
	if (rem == 1)
		return;
	if (ask2 % 2 == 0 and rem % 2 == 0){
		ask2 /= 2;
		rem /= 2;
	}
	if (rem == 1)
		return;
	if (ask2 % 3 == 0 and rem % 3 == 0){
		ask2 /= 3;
		rem /= 3;
	}
	if (rem == 1)
		return;
}

signed main(){
	defSetting

	int test;
	cin >> test;
	
	while(test--){
		ull ask, ask1, ask2, ans, rem = 6;
		cin >> ask;
		
		ask1 = ask + 1;
		ask2 = ask + 2;
		
		divBySix(ask, ask1, ask2);
		cout << (((ask * ask1) % mod) * ask2) % mod << endl;
	}

	return 0;
}

