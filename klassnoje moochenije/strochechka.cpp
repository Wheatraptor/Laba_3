#include "klassick.h"

Tstring::Tstring() {
	n = 1;
	arr = new char[n];
	arr[0] = 0;
}

Tstring::Tstring(const char* a) {
	n = strlen(a) + 1;
	arr = new char[n];
	for (int i = 0; i < n - 1; i++)
		arr[i] = a[i];
	arr[n - 1] = 0;
}

Tstring::Tstring(const Tstring& a) {
	n = a.n;
	arr = new char[n];
	for (int i = 0; i < n; i++)
		arr[i] = a.arr[i];
}

Tstring::~Tstring() {
	if (arr != 0) {
		delete[] arr;
		arr = 0;
		n = 0;
	}
}

void Tstring::resize(int n_) {
	char* res;
	res = new char[n_];
	for (int i = 0; i < std::min(n, n_); i++)
		res[i] = arr[i];
	res[n_ - 1] = 0;
	delete[]arr;
	arr = res;
	n = n_;
}

Tstring Tstring::sum(Tstring& b) {
	Tstring a;
	a.resize(n + b.n - 1);
	for (int i = 0; i < n - 1; i++)
		a.arr[i] = arr[i];
	a.arr[n - 1] = 0;
	for (int i = 0; i < b.n - 1; i++)
		a.arr[i + n - 1] = b.arr[i];
	return a;
}

char& Tstring::getchar(int i) {
	if (i > 0 && i < n)
		return arr[i - 1];
}

void Tstring::print() {
	std::cout << arr << std::endl;
}

int Tstring::getN() {
	return n - 1;
}

int Tstring::find(Tstring& s) {
	bool m;
	int i;
	for (i = 0; i < n; i++) {
		m = false;
		int k;
		for (k = 0; k < s.n - 1; k++) {
			if (s.arr[k] != arr[i + k]) {
				m = true;
				break;
			}
		}
		if (m == false)
			return i + 1;
	}
	return -1;
}

int Tstring::findchar(char c) {
	for (int i = 0; i < n; i++)
		if (arr[i] == c)
			return i;
	return -1;
}

void Tstring::pushback(char c) {
	char* newstr = new char[n + 1];
	for (int i = 0; i < n - 1; i++)
		newstr[i] = arr[i];
	newstr[n - 1] = c;
	newstr[n] = 0;
	delete[]arr;
	arr = newstr;
}