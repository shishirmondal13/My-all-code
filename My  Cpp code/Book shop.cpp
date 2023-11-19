#include <iostream>
#include<conio.h>
using namespace std;
class publication {
public:
 string title;
 float price;
 virtual void getData() = 0;
 virtual void putData() = 0;
};
class book : public publication {
public:
 int page;
 void getData() {
 cout << "Enter Name of the book ";
 cin >> title;
 cout << "Enter Price of the book ";
 cin >> price;
 cout << "Enter Page count of the book ";
 cin >> page;
 }
 void putData() {
 cout << "Title = " << title << endl;
 cout << "Price = " << price << endl;
 cout << "Total Page = " << page << endl;
 }
};
class tape : public publication {
public:
 float time;
 void getData() {
 cout << "Enter Name of the tape ";
 cin >> title;
 cout << "Enter Price of the tape ";
 cin >> price;
 cout << "Enter Playing time of the tape ";
 cin >> time;
 }
 void putData() {
 cout << "Title = " << title << endl;
 cout << "Price = " << price << endl;
 cout << "Total Playing Time = " << time << endl;
 }
};
int main() {
 book ob1;
 ob1.getData();
 ob1.putData();
 tape ob2;
 ob2.getData();
 ob2.putData();
 getch();
 return 0;
}

