#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;

int nonrepetatingSubstring(string &s)
{
    int max_count =0;
    int count =0;
    int x=0;
    int i=0;
    std::vector<bool> hash(26,false);
    while(i<s.size())
    {
        char ch =s[i];
        int index =ch-'a';
        if(hash[index]==true)
        {
            if(count>max_count)
            max_count =count;
            for(int i=0;i<26;i++)
            {
                hash[i]=false;
            }
            x++;
            i=x;
            count =0;
            
        }
        else{
            count++;
            hash[index]=true;
            i++;
        
        }
    }

    if(count >max_count)
    max_count =count;
    return max_count;
}
int main()
{
    string s ={"abbbcde"};
    int r =nonrepetatingSubstring(s);
    cout<<r;
}