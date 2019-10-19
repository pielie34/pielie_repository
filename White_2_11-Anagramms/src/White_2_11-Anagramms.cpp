#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char,int> BuildCharCounters(const string& word) {
	map<char,int> m;
	for (auto c : word) {
		++m[c];
	}
	return m;
}

int main() {
	map<char,int> m1, m2;
	string word;
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> word;
		m1 = BuildCharCounters(word);
		cin >> word;
		m2 = BuildCharCounters(word);
		if (m1 == m2) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
