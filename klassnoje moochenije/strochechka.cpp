#include "klassick.h"
#include "cstring"

Tstring::Tstring() {
	n = 1;
	arr = new char[n];
	arr[0];
}

Tstring::Tstring(const char* a) {
	int i;
	n = strlen(a) + 1;
	arr = new char[n];
	for (i = 0; i < n - 1; i++)
		arr[i] = a[i];
	arr[i - 1] = 0;
}

Tstring::Tstring(const Tstring& a) {
	int i;
	n = a.n;
	arr = new char[n];
	for (i = 0; i < n; i++)
		arr[i] = a.arr[i];
}

Tstring::~Tstring() {
	if (arr != 0) {
		delete[] arr;
		arr = 0;
		n = 0;
	}
}

Tstring Tstring::sum(Tstring& b) {
	Tstring a;
	return a;
}