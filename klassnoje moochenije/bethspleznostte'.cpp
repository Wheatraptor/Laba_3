#include "klassick.h"

void main() {
	Tstring s1("PRIVET");
	Tstring s2("PASHA");
	Tstring s3("RIV");
	char c1 = 'V';
	char c2 = 'W';
	s1.print();
	s2.print();
	std::cout << s1.getchar(2) << std::endl;
	std::cout << s1.getN() << std::endl;
	std::cout << s1.find(s3) << std::endl;
	std::cout << s1.find(s2) << std::endl;
	std::cout << s1.findchar(c1) << std::endl;
	std::cout << s1.findchar(c2) << std::endl;
	s3.pushback(c1);
	s3.print();
}