#include <iostream>
using namespace std;

bool IsPalindrom(string word) {
	string reverse;
	for (int i = word.size()-1; i >= 0; --i) {
		reverse.push_back(word[i]);
	}
	if (word == reverse) {
		return 1;
	}
	return 0;
}
