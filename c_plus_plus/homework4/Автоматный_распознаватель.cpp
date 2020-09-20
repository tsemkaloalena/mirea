#include <iostream>
#include <map>
using namespace std;

int main() {
	setlocale(0, "");
	string roman_str, x, x2;
	int s, i, same, same_value;
	map <string, int> digits = { {"I", 1},
								{"V", 5},
								{"X", 10},
								{"L", 50},
								{"C", 100},
								{"D", 500},
								{"M", 1000}
	};
	cout << "Введите римское число" << endl;
	cin >> roman_str;
	s = 0;
	same = 0;
	same_value = 0;
	for (i = 0; i < roman_str.size(); i++) {
		x = roman_str[i];
		x2 = roman_str[i + 1];
		if (i != roman_str.size() - 1 and (digits[x] == same or digits[x] == digits[x2])) {
			if (same == 0) {
				same = digits[x];
				same_value = digits[x];
			}
			else {
				same_value += digits[x];
			}
		}
		else {
			if (same != 0) {
				if (same < digits[x]) {
					s -= same_value;
				}
				else {
					s += same_value;
				}
				same = 0;
				same_value = 0;
			}
			if (i != roman_str.size() - 1 and digits[x] < digits[x2]) {
				s -= digits[x];
			}
			else {
				s += digits[x];
			}			
		}
	}
	cout << s << endl;
	return 0;
}
