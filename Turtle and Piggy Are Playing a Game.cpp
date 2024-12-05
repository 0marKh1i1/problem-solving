#include <iostream>
using namespace std;

class A {
public:
    int y;
    // Constructor that takes an int
    A(int x) {
        cout << "A" << endl; // Assuming you want to print "A" when this constructor is called
        y = x; // Assuming the purpose is to assign the input to y
    }
    // Copy constructor
    A( A const& x) {
        cout << "B" << endl; // Assuming you want to print "B" when the copy constructor is called
        y = x.y;
    }
    ~A(){ cout << "C" << endl; }
};

void fun1(A c) {

    c.y = 5;
}

int main() {
    A obj1(12); // This will print "A"
    fun1(obj1); // This will print "C", and if fun1 involved a copy, "B" would also be printed before "C"
    return 0;
}