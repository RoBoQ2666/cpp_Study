#include <iostream>
using std::cout;

int return100() {
	return 100;
}

void func(int&& rv) {
	cout << rv << '\n';
	rv = 5000;
	cout << rv << '\n';
}

void test01() {
	int&& r1 = 15;
	int&& r2 = 'a';
	int&& r3 = return100();
	int&& r4 = 9 + 1;
	int&& r5 = (r1 > 20);
	int&& r6 = (r1 <= 18);

	cout << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5 << " " << r6 << " " << '\n';

}


void Rvalue_basic_demo() {

	test01();

	func(1 + 2);
}