#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "stack.h"

using namespace std;

void LoadFromFile(fstream& f, int* a, int n);
int convert(char a);

int main() {
	int n = 8;
	int l;
	stack root;
	fstream f;
	int* p = new int[n];
	do {
		cout << "would you like to:\n\tload from file(1)\n\tread(2)\n\texit(3)\n"; cin >> l;
		if (l == 1) {
			f.open("train.txt");
			LoadFromFile(f, p, n);
			f.close();

			root.init(p, n);
		}
		if (l == 2) {
			root.create(n);
			root.read();
		}
		root.display();

		stack left(n);
		stack right(n);

		full(root, left, right);
		left.display();
		right.display();

		print(root, left, right);
	} while (l != 3);

	return 0;
}


void LoadFromFile(fstream& f, int* a, int n) {		//12111221
	char w;
	int i = 0;
	while (i != n) {
		f >> w;
		a[i] = convert(w);
		i++;
	 } 
}

int convert(char a) {
	if (a == '1') {
		return 1;
	}
	if (a == '2') {
		return 2;
	}
}