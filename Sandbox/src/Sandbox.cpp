#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main () {
	vector<int> v(3);
	for (int i = 0; i < 3; ++i) {    //��������� ������ ��������� ������
		v[i] = i;
		cout << v[i] << endl;
	}
	return 0;
}
