#include <iostream>
#include <fstream>
#include <map>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	fstream data;
	int i = 1;
	string t;
	map <string, int[5]> countries = {};
	data.open("text.txt", ios::in);
	while (!data.eof()) {
		data >> t;
		data >> countries[t][0];
		data >> countries[t][1];
		data >> countries[t][2];
		countries[t][3] = countries[t][0] + countries[t][1] + countries[t][2];
		countries[t][4] = countries[t][0] * 7 + countries[t][1] * 6 + countries[t][2] * 5;
	}
	data.close();
	map <string, int[5]>::iterator it = countries.begin();
	ofstream fout("text.txt", ios::out);
	cout << "\tCountry\tGold\tSilver\tBronze\tTotal\tPoints" << endl;
	while (it != countries.end()) {
		fout << it->first << " " << it->second[0] << " " << it->second[1] << " " << it->second[2] << " " << it->second[3] << " " << it->second[4] << endl;
		cout << i << "\t" << it->first << "\t" << it->second[0] << "\t" << it->second[1] << "\t" << it->second[2] << "\t" << it->second[3] << "\t" << it->second[4] << endl;
		i++;
		it++;
	}
	fout.close();

	return 0;
}
