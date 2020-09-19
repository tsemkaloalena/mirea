#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//setlocale(0, "");

	ofstream fout("file.txt", ios::app);
	fout << "I started doing my homework at 2am" << endl;
	fout << "So I want to sleep so muuuuuch!" << endl;
	fout << "This is tre 3rd excersize" << endl;
	fout << "I can also count from 1 to 10. It is very difficult: 1 2 3 4 6 5 8 7 9... Oooh, I don't remember what's next(((" << endl;
	fout.close();

	char newstr;
	fstream data;
	data.open("file.txt", ios::in);
	while (!data.eof()) {
		data >> newstr;
		if (isdigit(newstr)) {
			cout << newstr;
		}
		
	}
	data.close();
	return 0;
}
