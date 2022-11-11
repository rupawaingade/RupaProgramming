#include<iostream>
#include<cstring>
#include<cassert>

bool strpallindrome(std::string str)
{
    int j = str.length() - 1;
    int i = 0;
    
    while(j > i)
    {
        if(str[i] != str[j])
        {
          return false;
         
        }
        i++;
        j--;
        
    }
    return true;
}
    
int main()
{
    
    assert(strpallindrome("assa"));
    assert(!strpallindrome("as"));
    assert(strpallindrome("a"));

    return 0;
}