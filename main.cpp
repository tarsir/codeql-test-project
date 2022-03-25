#include <iostream>

int main(int argc, char** argv) {
	int *p = new int();
	delete p;
	delete p;

	return 0;
}
