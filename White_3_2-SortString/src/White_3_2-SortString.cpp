#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> v;
	string s;
	int N = 0;
	cin >> N;
	while (N != 0) {
		cin >> s;
		v.push_back(s);
		--N;
	}
	sort(begin(v),end(v), [](string a,string b){
		for (auto& c: a) {
			c = tolower(c);
		}
		for (auto& c: b) {
			c = tolower(c);
		}
		return a < b;
	});

	for (const auto& s: v) {
		cout << s << " ";
	}
	return 0;
}
