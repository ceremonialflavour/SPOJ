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
#define fileread freopen("0. Input.txt", "r", stdin)
#define filewrite freopen("0. Output.txt", "w", stdout)
#define asloop(i, x, y, z) for(auto i = x; i <= y; i += z)
#define deloop(i, x, y, z) for(auto i = x; i >= y; i -= z)

typedef long long int lli;
using namespace std;

const int mod = 1e9+7;

bool board[8][8];

void alter(int xx, int yy){
	if (xx < 0 or xx > 7 or yy < 0 or yy > 7)
		return;
		
	board[xx][yy] = !board[xx][yy];
	return;
}

void print(){
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "---------------\n" << flush;
	return;
}

signed main(){
	defSetting

	fileread;
	/*
	input: 
	0 1 0 0 1 0 1 1
	0 0 0 1 1 0 1 0
	0 1 1 0 0 0 1 1
	1 1 1 0 0 0 1 1
	0 0 0 1 0 1 0 0
	0 0 1 1 1 0 0 1
	0 0 0 0 0 0 0 0
	0 0 1 0 0 1 0 0
	1 0 0 0 0 1 1 0
	1 0 0 0 0 0 1 0
	0 1 0 1 1 0 1 1
	0 0 1 0 0 0 0 1
	1 1 0 0 1 0 1 1
	0 0 0 0 1 1 0 1
	1 1 1 0 0 0 1 1
	0 1 0 1 1 0 0 1
	*/
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			cin >> board[i][j];
		}
	}
	
	print();
	
	char c;
	vector < pair <int, int> > cmd;
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			cin >> c;
			if (c == '1')
				cmd.pb(mp(i, j));
		}
	}
	
	int posx, posy, scr = 0;
	for (auto x: cmd){
		posx = x.fi;
		posy = x.se;
		
		alter(posx, posy);
		alter(posx + 1, posy);
		alter(posx - 1, posy);
		alter(posx, posy + 1);
		alter(posx, posy - 1);
		
		// print();
		scr += (posx + 1) * (posy + 1);
	}
	
	cout << scr << endl;

	return 0;
}

