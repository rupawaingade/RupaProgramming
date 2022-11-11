#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include <functional>

using namespace std;
int MaxSubstring(vector<string>&str)
{
    int i=0,j=i+1;
    int count =1;
    int result;
    vector<int>ans;
    while(j<=str.size())
    {
        
        if(str[j] != str[i])
        {
            count ++;
            j++;
            
        }
        else 
        {
            ans.push_back(count);
            count =1;
            i++;
           
        }
        
    }
    int max =0;
    for(int i =0;i<ans.size();i++)
    {
        
        if(ans[i]>max)
        {
            max =ans[i];
        }
    }
    return max;
}
int main()
{
    
   vector<string> arr={"abbcdb"};
   int m=MaxSubstring(arr);
   cout<<m;
   
return 0;

  
}
