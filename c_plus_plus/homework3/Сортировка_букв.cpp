#include <iostream>

#include <algorithm>

using namespace std;



int main() {
	string str;
	cin >> str;
	int n = str.size();

	char *list = new char[n];

	int i;

	for (i = 0; i < n; i++) {
		list[i] = str[i];
	}

	sort(list, list + n);

	for (i = 0; i < n; i++) {
		cout << list[i];
	}

	return 0;

}
