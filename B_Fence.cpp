#include <iostream>
using namespace std;
const int N = 1.5e5 + 5;
int n, k, a[N], s[N];
signed main() {
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	for (int i = 1; i <= n; ++i) {
		s[i] = s[i - 1] + a[i];
	}
	int ans = 19260817, pos = 0;
	for (int i = 1; i <= n - k + 1; ++i) {
		if (s[i + k - 1] - s[i - 1] < ans) {
			ans = s[i + k - 1] - s[i - 1];
			pos = i;
		}
	}
	cout << pos;
	return 0;
}