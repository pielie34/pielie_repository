#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
	vector<int> w;
	int size = v.size();
	if (size > 0) {
 	for (int i = size-1; i >= 0; --i) {
		w.push_back(v[i]);
	}
 	}
	return w;
}

int main(){

}
