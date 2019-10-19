#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main() {			//слова являются синонимами только попарно!
	map<string,set<string>> m;
	string command;
	int Q;
	cin >> Q;
	while (Q != 0) {
		cin >> command;
		if (command == "COUNT") {
			string word;
			cin >> word;
			cout << m[word].size() << endl;

		}
		if (command == "ADD") {
			string word1, word2;
			cin >> word1 >> word2;
			m[word1].insert(word2);
			m[word2].insert(word1);
		}
		if (command == "CHECK") {
			string word1, word2;
			cin >> word1 >> word2;
			if (m[word1].count(word2) == 1) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}

		}
		--Q;
	}
	return 0;
}
