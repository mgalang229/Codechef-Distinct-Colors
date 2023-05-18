#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mx = max(mx, a);
	}
	cout << mx << "\n";
}

int main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}
