#include "stack.h"

void stack::create(int a)
{
	n = a;
	q = new int[n];
}

void stack::create()
{
	q = new int[n];
}

stack::stack()
{
	n = 0;
	q = new int[n];
}

stack::stack(int a)
{
	n = a;
	q = new int[n];
}

void stack::add_to_stack(int a)
{
	n += 1;
	for (int i = n-1; i > 1; i--) {
		q[i] = q[i - 1];
	}
	q[0] = a;
}

int* stack::get_stack()
{
	return q;
}

void stack::init(int* a, int n)
{
	q = a;
	this->n = n;
}

void stack::display()
{
	cout << "stack: { ";
	for (int i = 0; i < n; i++) {
		cout << q[i] << ", ";
	}
	cout << " }" << endl;
}

void stack::read()
{
	int k = 0;
	cout << "Enter \'n\': "; cin >> n;
	for (int i = n - 1; i >= 0; i--) {
		cout << "Enter element " << ++k << " "; cin >> q[i];
	}
}

string stack::ToString() const {
	stringstream sout;
	sout << "stack: { ";
	for (int i = 0; i < n; i++) {
		sout << q[i] << ", ";
	}
	sout << " }" << endl;
	return sout.str();
}

void count(int& num_1, int& num_2, stack a)
{
	for(int i = 0; i < a.n; i++) {
		if (a.q[i] == 1) {
			num_1++;
		}
		if (a.q[i] == 2) {
			num_2++;
		}
	}
}

void print(stack root, stack left, stack right)
{
	for (int i = 0; i < 7; i++) {
		cout << "--";
	}
	cout << "----";
	for (int i = 0; i < 7; i++) {
		cout << "--";
	}
	cout << endl;
	for (int i = 0; i < 7; i++) {
		cout << "--";
	}
	cout << "\\||/";
	for (int i = 0; i < 7; i++) {
		cout << "--";
	}



	cout << endl << "   ";
	for (int i = 0; i < root.n ; i++) {
		cout << left.q[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << " ";
	}

	for (int i = 0; i < 5; i++) {
		cout << " ";
	}
	for (int i = 0; i < root.n; i++) {
		cout << right.q[i];
	}
	cout << endl;
	for (int j = 0; j < root.n; j++) {
		for (int i = 1; i <= 15; i++) {
			cout << " ";
		}
		cout <<"||" << root.q[j] << endl;
	}
}

void full(stack root, stack& left, stack& right)
{
	for (int i = 0; i < root.n; i++) {
		if (root.q[i] == 1) {
			left.q[i] = 1;
			right.q[i] = 0;
		}
		if (root.q[i] == 2) {
			right.q[i] = 2;
			left.q[i] = 0;
		}
	}
}
