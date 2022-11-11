#include<iostream>
#include<string>
#include<vector> 
#include<string.h>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;

string sumOfTwoStrings(string num1,string num2)
{
    int n1=num1.size();
    int n2=num2.size();
    int carry =0;
    string ans ={0};
   while(n1 >= 0 && n2>= 0)
   {
        if(n1 < 0)
        {
            ans.push_back(((num2[n2]-48+carry)%10)+48);
            carry =((num2[n2]-48)+carry)/10;
            n2--;
        }
        else if(n2 < 0)
        {
            ans.push_back(((num1[n1]-48+carry)%10)+48);
            carry =((num1[n1]-48)+carry)/10;
            n1--;
        }
        else
        {
            ans.push_back(((num1[n1]-48+num2[n2]-48+carry)%10)+48);
            carry =((num2[n2]-48)+(num1[n1]-48)+carry)/10;
            n1--;
            n2--;
        }
   }
        if(carry)
        {
            ans.push_back (carry+48);
        }
   

 return ans;
    
}
int main()
{
    string str1 = "123";
    string str2 ="79";
   
  string r= sumOfTwoStrings(str1,str2);

 // for(size_t i = 0;i<r.size();i++)
    cout<<r;
    return 0;
}