#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <='z')
    {
        return ch;
    }
    else
    {
        char temp = ch -'A'+'a';
    
        return temp;
    }
}
bool isValid(char ch)
{
    if((ch>='a' && ch<='z')|| (ch>='A'&&ch<='z')||(ch>='0'&&ch<='9'))
    {
        return 1;
    }
    return 0;
}
bool checkPallindrome(string s) 
{
    int start =0;
    int end = s.size()-1;
    while(start<=end)
    {
        
        if(s[start]!= s[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
  return 1; 
}
bool isPallindrome(string s)
{
    //avoid spaces coma and char
    string temp ="";
    for(int i =0;i<s.length();i++)
    {
        if(isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    //lower case
    for(int i=0;i<s.length();i++)
    {
        temp[i] = toLowerCase(temp[i]); 
    }
    return checkPallindrome(temp);

}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    bool k =isPallindrome(s);
    if(k)
    { 
       cout<<"true";
    }
    else
    {
      cout<<"false";
    }
    return 0;
}