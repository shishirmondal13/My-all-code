#include <iostream>
#include<conio.h>
using namespace std;
class Manchester_United {
private:
 int coach, player;
public:
 void getData(int c, int p) {
 coach = c;
 player = p;
 }
 Manchester_United operator ++ (int) {
 coach = coach + 1;
 player = player + 1;
 return *this;
 }
 bool operator == (Manchester_United ob) {
 if ((coach == ob.coach) and (player == ob.player))
 return true;
 return false;
 }
};
int main() {
 Manchester_United ronaldo, fernandes;
 ronaldo.getData(4, 5);
 fernandes.getData(5, 6);
 if (ronaldo == fernandes) {
 cout << "Ronaldo and Fernandes is equal" << endl;
 }
 else {
 cout << "Ronaldo and Fernandes is not equal" << endl;
 }
 ronaldo++;
 if (ronaldo == fernandes) {
 cout << "Ronaldo and Fernandes is equal" << endl;
 }
 else {
 cout << "Ronaldo and Fernandes is not equal" << endl;
 }
 getch();
 return 0;
}

