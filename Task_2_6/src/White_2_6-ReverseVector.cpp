#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v) {
	int w;
	if (v.size() > 0) {
 	for (int i = 0; i <= (v.size()-1)/2; ++i) {
		w = v[v.size()-1-i];
		v[v.size()-1-i] = v[i];
		v[i] = w;
	}
	}
}

//int main() {
//	vector<int> v = {1, 2, 7, 8, 9, 10};
//	Reverse(v);
//	for (auto a: v) {
//		cout << a << " ";
//	}
//	return 0;
//}
