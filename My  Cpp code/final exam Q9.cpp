#include <iostream>
using namespace std;

class ShakibAlHasan {
private:
    int value;

public:
    ShakibAlHasan(int val) : value(val) {}

    ShakibAlHasan operator+(const ShakibAlHasan& other) {
        return ShakibAlHasan(value + other.value);
    }

    ShakibAlHasan operator*(const ShakibAlHasan& other) {
        return ShakibAlHasan(value * other.value);
    }

    void operator=(const ShakibAlHasan& other) {
        value = other.value;
    }

    void display() {
        cout << "Value: " << value << std::endl;
    }
};

int main() {
    ShakibAlHasan LitonKumarDas2(2);
    ShakibAlHasan TaskinAhmed3(3);

    ShakibAlHasan TanzidTamim1 = (LitonKumarDas2 + 2) * TaskinAhmed3;

    TanzidTamim1.display();

    return 0;
}
