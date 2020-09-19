#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string str = "ntkdhnlprebaghcprhkzakbdprjscm";
	char list[30];
	int i;
	for (i = 0; i < 30; i++) {
		list[i] = str[i];
	}
	sort(list, list + 30);
	for (i = 0; i < 30; i++) {
		cout << list[i];
	}
	return 0;
}
