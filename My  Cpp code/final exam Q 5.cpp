#include <iostream>
using namespace std;

class OpOverload {
private:
    int var1;
    int var2;
public:
    OpOverload(int v1, int v2) : var1(v1), var2(v2) {}

    void display() const {
        cout << "var1: " << var1 << ", var2: " << var2 << endl;
    }

    OpOverload& operator++() {
        int lastThreeDigits = 052; // Replace this with the last three digits of your ID
        var1 += lastThreeDigits;
        var2 += lastThreeDigits;
        return *this;
    }

    OpOverload operator++(int) {
        OpOverload temp = *this;
        ++(*this);
        return temp;
    }

    OpOverload& operator--() {
        int lastThreeDigits = 052; // Replace this with the last three digits of your ID
        var1 -= lastThreeDigits;
        var2 -= lastThreeDigits;
        return *this;
    }

    OpOverload operator--(int) {
        OpOverload temp = *this;
        --(*this);
        return temp;
    }
};

int main() {
    OpOverload obj(5, 10);

    cout << "Original values: ";
    obj.display();

    obj++; // Increment using postfix ++
    cout << "After obj++: ";
    obj.display();

    ++obj; // Increment using prefix ++
    cout << "After ++obj: ";
    obj.display();

    obj--; // Decrement using postfix --
    cout << "After obj--: ";
    obj.display();

    --obj; // Decrement using prefix --
    cout << "After --obj: ";
    obj.display();

    return 0;
}

