#include <iostream>
using namespace std;

int n = 10;
int* list = new int[n];

int perestanovka(int m, int n) {
	if (m < n-1) {
		int j, f = 1;
		for (j = 1; j < n - m; j++) {
			f *= j;
		}
		
		return f + perestanovka(m + 1, n);
	}
	else {
		return 0;
	}
}


int main() {
	int i;
	for (i = 1; i <= n; i++) {
		list[i - 1] = i;
	}
	i = 1;
	int s = 0;
	s += perestanovka(0, n);
	cout << s << endl;

}
