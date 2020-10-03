#include <iostream>
#include <map>
#include <fstream>
using namespace std;


int main() {
	map <char, int> alf = {
		{*"b", 0},
		{*"c", 0},
		{*"d", 0},
		{*"f", 0},
		{*"g", 0},
		{*"h", 0},
		{*"j", 0},
		{*"k", 0},
		{*"l", 0},
		{*"m", 0},
		{*"n", 0},
		{*"p", 0},
		{*"q", 0},
		{*"r", 0},
		{*"s", 0},
		{*"t", 0},
		{*"v", 0},
		{*"w", 0},
		{*"x", 0},
		{*"z", 0}
	};
	map<char, int>::iterator kv = alf.begin();

	fstream data;
	char letter;
	data.open("file.txt", ios::in);
	data >> letter;
	alf[letter] += 1;
	char symbol = letter;
	int min_symbol = sizeof(data);

	while (!data.eof()) {
		data >> letter;
		alf[letter] += 1;
	}
	alf[letter] -= 1;

	while (kv != alf.end()) {
		if (kv->second < min_symbol and kv->second != 0) {
			min_symbol = kv->second;
			symbol = kv->first;
		}
		kv++;
	}
	
	cout << symbol << endl;
	data.close();
	return 0;
}
