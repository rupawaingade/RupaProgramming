#include<iostream>
int main()
{
    int Number;
    std::cout << " Number :";
    std::cin >> Number;
     if (Number == 0)
     {
         std::cout <<"you Enterd 0.";
     }

     else
     {
         if(Number < 0)
         Number = -1 * Number;
         int counter = 0;
         while (Number > 0)
         {
             Number = Number /10;
             counter ++;

         }
    std::cout << "number Contains " << counter << "digits.";
         
     }
    return 0;
}
