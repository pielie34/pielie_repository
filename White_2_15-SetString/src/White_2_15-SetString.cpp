#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	string piece;
	set<string> s;
	int N;
	cin >> N;
	while (N != 0) {
		cin >> piece;
		s.insert(piece);
		--N;
	}
	cout << s.size() << endl;
	return 0;
}
