#include <iostream>
using namespace std;

class EricTenHag {
public:
    virtual void showDegea() = 0; // Pure virtual function making EricTenHag an abstract class
};

class Varane : public EricTenHag {
public:
    void showDegea() override { // Implement the pure virtual function
        cout << "Saves goal" << endl;
    }
};

class Maguire : public EricTenHag {
public:
    void showDegea() override { // Implement the pure virtual function
        cout << "Saves nogoals" << endl;
    }
};

int main() {
    EricTenHag* coach; // Abstract class reference

    // Using the base class reference to call overridden methods
    Varane varane;
    Maguire maguire;

    coach = &varane;
    coach->showDegea(); // Using the base class pointer to call overridden function

    coach = &maguire;
    coach->showDegea(); // Using the base class pointer to call overridden function

    return 0;
}
