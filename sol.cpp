#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n, m;
	cin >> n >> m;
	bool p[m+1];
	memset(p, 0, sizeof(p));
	for(int i=0; i<n; ++i) {
		int tmp;
		cin >> tmp;
		for(int j=0; j<tmp; ++j) {
			int a;
			cin >> a;
			p[a]=1;
		}
	}
	bool ok=1;
	for(int i=1; i<=m; ++i)
		if(!p[i])
			ok=0;
	cout << (ok ? "YES" : "NO") << "\n";
}
