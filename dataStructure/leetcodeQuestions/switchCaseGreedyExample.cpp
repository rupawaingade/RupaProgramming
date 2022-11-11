#include<limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int main()
{
int n;
int hundread,fiftey ,twenty ,ten;
cout<<"enter Amount:"<<endl;
cin>>n;
 switch(1)
 {

    case 1:hundread = n/100;
    cout<<"hundread "<<hundread<<endl;
    n =n%100;
    case 2:fiftey = n/50;
    cout<<"fiftey "<<fiftey<<endl;
    n =n%50;
    case 3:twenty = n/20;
    cout<<"twenty "<<twenty<<endl;
    n =n%20;
    case 4:ten = n/10;
    cout<<"ten "<<ten<<endl;
    n =n%10;
 }
return 0;
}