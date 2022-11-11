#include<iostream>
#include<string>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

void reverse(vector<char>& s) 
{
    int start =0;
    int end = s.size()-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
   
}
void print(vector<char>& s)
{
    for(int i =0;i<s.size();i++)
    {
        cout<<s[i];
    }
}
int main()
{
    vector<char> s = {'m','o','o','n'};
    reverse(s);
    print(s);
    return 0;
}