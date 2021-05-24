#include <bits/stdc++.h>
#define defSetting cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);

typedef unsigned long long ull;
using namespace std;

const int mod = 1e9+7;

signed main(){
	defSetting

	ull test, ask, ans;
	cin >> test;
	
	while(test--){
		ans = 0ll;
		cin >> ask;
		
		while(ask > 1){
			ans <<= 1;
			ans |= ask&1;
			ask >>= 1;
		}
		
		cout << ans << endl;
	}

	return 0;
}

