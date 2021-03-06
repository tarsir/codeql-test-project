#include <iostream>

class Base {
private:
    // pure virtual member function used for initialization of derived classes.
    virtual void construct() = 0;
public:
    Base() {
        // wrong: the virtual table of `Derived` has not been initialized yet. So this
        // call will resolve to `Base::construct`, which cannot be called as it is a pure
        // virtual function.
        construct();
    }
};

int main(int argc, char** argv) {
	int *p = new int();
	delete p;
	delete p;

	return 0;
}
