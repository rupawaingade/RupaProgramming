#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string longestCommonPrefix(vector<string> str)
{
    string value;
    bool flag = false;

    for(int i=0;i<str[0].size();i++)
    {
         flag = false;
       
        for(int j=1;j< str.size();j++)
        {
            if(str [0][i] != str[j][i])
            {
                    
                value = value + str[j][i];
                flag= true;
            }           
            
        }
         if(flag)
         value = str[0][i]+value;
           
    }
    return value;
 
}
 


int main() {
    
    {
    vector<string> str = {"ABD", "ABC", "ABE"};
    string s=longestCommonPrefix(str);
    std::cout<<s;
    }

    {
    vector<string> str = {"flo", "flo", "fl", "flk"};
    string s=longestCommonPrefix(str);
    std::cout<<s;
    }

    return 0;
}



// [
//     [flower],
//     [flow],
//     [flight]
// ]