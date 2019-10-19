#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string,string> m;
	int N;
	string command1, command2, command3;
	cin >> N;
		while (N != 0) {
			cin >> command1;
			if (command1 == "DUMP") {
				if (m.size() == 0) {
					cout << "There are no countries in the world" << endl;
				}
				else {
					for (auto piece : m) {
						cout << piece.first << "/" << piece.second << " ";
					}
					cout << endl;
				}
			}
			else {
				cin >> command2;
				if (command1 == "ABOUT") { //country
					if (m[command2] == "") {
						cout << "Country " << command2 << " doesn't exist " << endl;
						m.erase(command2);
					}
					else {
						cout << "Country " << command2 << " has capital " <<  m[command2] << endl;
					}
				}
				else {
					cin >> command3;
					if (command1 == "CHANGE_CAPITAL") { // country, capital
						if (m[command2] == "") {
							cout << "Introduce new country " << command2 << " with capital " << command3 << endl;
							m[command2] = command3;
						}
						else if (m[command2] == command3) {
							cout << "Country " << command2 << " hasn't changed its capital" << endl;
						}
						else {
							cout << "Country " << command2 << " has changed its capital from " << m[command2] << " to " << command3 << endl;
							m[command2] = command3;
						}

					}
					else {				//RENAME: old_country, new_country
						if (command2!=command3 && m[command2]!="" && m[command3]=="") {
							cout << "Country " << command2 << " with capital " << m[command2] << " has been renamed to " << command3 << endl;
							m[command3] = m[command2];
							m.erase(command2);
						}
						else {
							if (m[command2] == "") {
								m.erase(command2);
							}
							if (m[command3] == "") {
								m.erase(command3);
							}
							cout << "Incorrect rename, skip" << endl;
						}
					}
				}

			}
			--N;
		}
	return 0;
}

