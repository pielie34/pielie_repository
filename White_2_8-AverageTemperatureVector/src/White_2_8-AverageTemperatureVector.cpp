#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, mid=0, k=0;
	cin >> N;
	vector<int> temp(N);
	for (int& s: temp) {
		cin >> s;
		mid += s;
	}
	mid = mid/N;
	for (auto s: temp) {
		if (s > mid) {
			++k;
		}
	}
	cout << k << endl;
	for (int i = 0; i <= N-1; i++) {
		if (temp[i] > mid) {
			cout << i << " ";
		}
	}
	return 0;
}
