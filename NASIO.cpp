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

	int n;
	cin >> n;
	
	for (int tc = 0; tc < n; tc++){
		lli x, z;
		char y;
		
		cin >> x >> y >> z;
		
		switch (y){
			case '+':
				cout << 11 * x + 13 * z + 17 << endl;
				break;
			case '-':
				cout << 11 * x - 13 * z + 17 << endl;
				break;
			case '*':
				cout << 11 * x * 13 * z + 17 << endl;
				break;
			case '/':
				double ans = (11 * double(x)) / (13 * double(z)) + 17;
				cout << setprecision(6) << fixed;
				cout << ans << endl;
				break;
		}
	}

	return 0;
}

