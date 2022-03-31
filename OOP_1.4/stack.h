#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class stack
{
private:
	int n;
	int* q;
public:
	void create(int a);
	void create();

	stack();
	stack(int a);
	
	void add_to_stack(int a);
	
	void set_n(int n) { this->n = n; }
	int *get_stack();
	int get_n() { return n; }
	int get_current(int i) { return q[i]; }

	void init(int* a, int n);
	void display();
	void read();

	string ToString() const;
	friend void count(int& num_1, int& num_2, stack a);
	friend void print(stack root, stack left, stack right);
	friend void full(stack root, stack& left, stack& right);
};

