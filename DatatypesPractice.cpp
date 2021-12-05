#include <iostream>
using namespace std;
   int main()
   {
       char c1,c2,c3,c4,c5;
       int b1,b2,b3,b4,b5;
       cout << "enter five letters: ";
       cin >> c1 >> c2 >> c3 >> c4 >> c5;
       
        cout << "enter five numbers: ";
       cin >> b1 >> b2 >> b3 >> b4 >> b5;
       cout <<"Ascii message :" <<int(c1) <<" " << int(c2)<< " " << int(c3) <<" " << int(c4) << " " << int(c5) << endl;
       cout <<"Ascii numbers :" <<char(b1) <<" " << char(b2)<< " " << char(b3) <<" " << char(b4) << " " << char(b5) << endl;
       return 0;
   }