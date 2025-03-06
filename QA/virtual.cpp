#include <iostream>
using namespace std;

class X {
public:
    X() { cout << "X "; }
    ~X() { cout << "~X "; }
};

void fun() {
    static X obj;
}

int main() {
    fun();
    cout << "Hello ";
    fun();
    return 0;
}
