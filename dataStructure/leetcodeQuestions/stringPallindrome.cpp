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
        //if char is capital B then B-A = 1 Which is Added to small 'a'.a+1 =b;
        char temp = ch -'A'+'a';
    
        return temp;
    }
}
bool pallindrome(vector<char>& s) 
{
    int start =0;
    int end = s.size()-1;
    while(start<=end)
    {
        
        if(toLowerCase(s[start])!=toLowerCase(s[end]))
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

int main()
{
    vector<char> s = {'N','o','o','n'};
    bool k =pallindrome(s);
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