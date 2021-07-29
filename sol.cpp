#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b, n;
		cin >> a >> b >> n;
		// if do the operations (from the problem statement) manually in a for-loop
		// a pattern will be created every three numbers:
		// first number is the value of 'a'
		// second number is the value of 'b'
		// third number is the value of ('a' ^ 'b')
		if (n % 3 == 0) {
			cout << a;
		} else if (n % 3 == 1) {
			cout << b;
		} else {
			cout << (a ^ b);
		}
		cout << '\n';
	}
	return 0;
}
