#pragma once
#include <iostream> 
#include <algorithm>
#include "cstring"
using namespace std;

class Tstring {
protected:
	char* arr;
	int n;
public:
	Tstring();
	Tstring(const char* a);
	Tstring(const Tstring& s);
	~Tstring();

	Tstring sum(Tstring& b);
	char& getchar(int i);
	int getN();
	void print();
	void resize(int n_);
	int find(Tstring& s);
	int findchar(char c);
	void pushback(char c);
};