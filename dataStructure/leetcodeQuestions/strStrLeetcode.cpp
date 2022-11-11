#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) 
{
     

        if(needle.length() == 0 )
        {
            return 0;
        }
        
        
    for(int i =0;i<haystack.length();i++)
    {
        int j;
        for( j = 0; j < needle.length(); j++)
        {

            if(haystack[i+j] != needle[j])
            {
                break;
            }
            
        }
        if(j == needle.length())
        {
            return i;
        }
    }
    return -1;
}
     
        
        
        


        
      
  




int main()
{
 string haystack = "hello";
 string needle = "lo";
 string haystack1 ="";
 string needle1 = "";
 string haystack2 ="rupa";
 string needle2 = "prashant";
 int c = strStr(haystack,needle);
 cout<<c;



    return 0;
}