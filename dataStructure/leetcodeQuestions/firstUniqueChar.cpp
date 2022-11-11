#include <iostream>
#include <string>
#include <vector>
#include <string.h>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
 for(size_t i =0;i<s.size();i++)
  { 
    cout<<s[i];
      bool flag = true;
      for(size_t j =0;j<s.size();j++ )
      {
        cout<< " : " << s[j] << endl;
        if(i==j)
        {
            continue;
        }
        if(s[i] == s[j] )
       {
          flag = false;
          break;
       }
      }
      

      if(flag == true)
      return i;
  }
  return -1;
}
int firstUniqCharNew(string &s)
{
   
  vector<size_t> hash(26);
  for(size_t i =0;i<s.size();i++)
  { 
      hash[s[i] - 'a']+=1;

  }
  for(size_t i=0;i<s.size();i++)
  {
      if(hash[s[i] -'a']==1)
      return i;
  }
  return -1;
}
int main()
{
    string str = "babbar";

    int index = firstUniqCharNew(str);
    cout << index;

    return 0;
}