#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int an = -1;
	for (int i = (n / 7); i >= 0; i--) {
		int t = 7 * i;
		if ((n - t) % 4 == 0 && (an == -1 || ((n - 7 * i) / 4) + i <= ((n - 7 * an) / 4) + an) ) {
			an = i;
		}
	}

	if (an == -1) {
		cout << -1;
		return 0;
	}

	// cout << an;
	for (int i = 0; i < ((n - 7 * an) / 4); i++) cout << '4';
	for (int i = 0; i < an; i++) cout << '7';
}
