#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int i = 0;
	int count = 0;
	cin >> a;
	for(auto sym: a) {
		if (sym == 'f') {
			++count;
		}
		if (count == 2) {
			cout << i << endl;
			return 0;
		}
		++i;
	}
	if (count == 1) {
		cout << "-1" << endl;
	}
	else {
		cout << "-2" << endl;
	}
	return 0;
}
