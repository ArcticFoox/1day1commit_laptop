#include<iostream>

using namespace std;

int arr[1000000];

int main() {
	int T;
	cin >> T;

	for(int j = 1; j <= T; j++) {
		int n;
		long sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int max = n - 1;
		for (int i = n - 2; i >= 0; --i) {
			if (arr[i] <= arr[max]) {
				sum += arr[max] - arr[i];
			}
			else {
				max = i;
			}
		}

		cout << "#" << j << " " << sum << "\n";
	}
	return 0;
}