#include "klassick.h"

void main() {
	Tstring s1("PRIVET");
	Tstring s2("PASHA");
	Tstring s3("RIV");
	Tstring s4(s1);
	char c1 = 'V';
	char c2 = 'W';

	cout << "s1: ";
	s1.print();
	cout << "s2: ";
	s2.print();
	cout << "s3: ";
	s3.print();
	cout << "s4: ";
	s4.print();
	cout << "s4 length: " << s4.getN() << endl;
	s4.resize(2);
	cout << "s4 after resize: ";
	s4.print();
	cout << "s4 length after resize: " << s4.getN() << endl;
	cout << "c1: " << c1 << endl << "c2: " << c2 << endl;
	cout << "s1's second character: " << s1.getchar(2) << endl;
	cout << "s3 appears in s1 from character number " << s1.find(s3) << endl;
	cout << "s3 appears in s2 from character number " << s1.find(s2) << " (it doesn't)" << endl;
	cout << "c1 appears first in s1 with number " << s1.findchar(c1) << endl;
	cout << "c2 appears first in s1 with number " << s1.findchar(c2) << " (it doesn't)" << endl;
	s3.pushback(c1);
	cout << "s3 with c1 at the end: ";
	s3.print();
	cout << "s1 with s2 added: ";
	s1.sum(s2).print();
}