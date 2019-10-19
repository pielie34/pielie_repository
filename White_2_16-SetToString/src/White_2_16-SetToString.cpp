#include <iostream>
#include <set>
#include <string>
#include <map>

using namespace std;

set<string> BuildMapValuesSet(const map<int,string>& m) {
	set<string> s;
	for (const auto& piece: m) {
		s.insert(piece.second);
	}
	return s;
}

//int main() {
//	set<string> values = BuildMapValuesSet({{1, "odd"}, {2, "even"}, {3, "odd"}, {4, "even"}, {5, "odd"}});
//	for (const string& value : values) {
//	  cout << value << endl;
//	}
//	return 0;
//}


