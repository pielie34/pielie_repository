#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> v = {"a","b","c"};
	cin >> v[0] >> v[1] >> v[2];
		if (v[0]<v[1]) {
			if (v[0]<v[2]){
				cout << v[0];
			}
			else {
				cout << v[2];
				}
			}
		else {
			if (v[1]<v[2]) {
				cout << v[1];
			}
			else {
				cout << v[2];
				}
			}
	return 0;
}
