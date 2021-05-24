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

typedef long long int lli;
using namespace std;

const int mod = 1e9+7;

signed main(){
	defSetting

	int test;
	cin >> test;
	
	while(test--){
		int len, col[3];
		cin >> len;
		
		char c;
		mem(col, 0);
		for (int i = 0; i < len; i++){
			cin >> c;
			if (c == 'R')
				++col[0];
			if (c == 'G')
				++col[1];
			if (c == 'B')
				++col[2];
		}
		
		if (col[0] == len or col[1] == len or col[2] == len)
			cout << len << endl;
		else if ((col[0] % 2 == 0 and col[1] % 2 == 0 and col[2] % 2 == 0) 
				or (col[0] % 2 == 1 and col[1] % 2 == 1 and col[2] % 2 == 1))
			cout << 2 << endl;
		else
			cout << 1 << endl;
	}

	return 0;
}

