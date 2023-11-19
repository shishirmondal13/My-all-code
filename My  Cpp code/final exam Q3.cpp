#include <iostream>
#include<conio.h>
using namespace std;
class ParentClass {
protected:
 string name;
public:
 virtual void display() = 0;
};
class Germany : public ParentClass {
public:
 Germany() { name = "Germany"; }
 void display() { cout << name << endl; }
};
class Argentina : public ParentClass {
public:
 Argentina() { name = "Argentina"; }
 void display() { cout << name << endl; }
};
class Brazil : public ParentClass {
public:
 Brazil() { name = "Brazil"; }
 void display() { cout << name << endl; }
};
int main() {
 ParentClass* countries[3];
 Germany g;
 Argentina a;
 Brazil b;
 countries[0] = &g;
 countries[1] = &a;
 countries[2] = &b;
 for (int i = 0; i < 3; i++) {
 countries[i]->display();
 }
 getch();
 return 0;
}
