#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int main()
{
int a,b;
char op;
cout<<"enter value of a:";
cin>>a;
cout<<"enter value of b:";
cin>>b;
cout<<"enter operation:";
cin>>op;
 switch(op)
{

    case'+':cout<<"Addition "<<(a+b)<<endl;
            break;
    case'-':cout<<"Substraction "<<(a-b)<<endl;
            break;
    case'/':cout<<"division "<<(a/b)<<endl;
            break;
    case '*':cout << "multiflication " << (a * b) << endl;
            break;
    case '%':cout << "modulus " << (a % b) << endl;
            break;  
    default :"please enter valid operation";
 }
return 0;
}