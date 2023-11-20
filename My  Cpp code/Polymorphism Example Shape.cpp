#include<iostream>
using namespace std;

class shape {
public:
   double dim1, dim2;
   shape(double d1, double d2)
   : dim1(d1), dim2(d2)
    {
    }

   virtual double area() {
      return 0;
   }
};

class triangle : public shape {
public:
   triangle(double d1, double d2)
    : shape(d1, d2)
     {

     }

   double area() override {
      return 0.5 * dim1 * dim2;
   }
};

class rectangular : public shape {
public:
   rectangular(double d1, double d2)
   : shape(d1, d2)
    {


    }

   double area() override {
      return dim1 * dim2;
   }
};

int main() {
   shape *p;
   triangle t(10, 20);
   rectangular r(10, 20);

   p = &t;
   cout << "Triangle area: " << p->area() << endl;

   p = &r;
   cout << "Rectangular area: " << p->area() << endl;

   return 0;
}
