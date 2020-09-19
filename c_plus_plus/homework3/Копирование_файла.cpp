#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	//setlocale(0, "");

	ofstream fout("file.txt", ios::app);
	fout << "Helloooooooooo!" << endl;
	fout << "I am trying to do my homework." << endl;
	fout << "What'sz uuuuuuupp?" << endl;

	fout.close();

	string newstr;
	fstream data;
	data.open("file.txt", ios::in);

	while (!data.eof()) {
		getline(data, newstr);
		cout << newstr << endl;
	}
	
	data.close();
	return 0;
}
