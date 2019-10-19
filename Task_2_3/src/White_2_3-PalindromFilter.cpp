#include <vector>
#include <string>
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

vector<string> PalindromFilter(vector<string> words,int minLength) {
	vector<string> result;
	for (auto word : words) {
		if ((IsPalindrom(word) == 1) && (minLength <= word.size())) {
			result.push_back(word);
		}
	}
	return result;
}


