#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int Z, N = 0;
	cin >> N;
	while (N != 0) {
		cin >> Z;
		v.push_back(Z);
		--N;
	}
	sort(begin(v),end(v), [](int a, int b){
		return abs(a) < abs(b);
	});
	for (const auto& i: v) {
		cout << i << " ";
	}
	return 0;
}
