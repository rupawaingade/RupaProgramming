#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
vector<int>searchElement(vector<int>arr)
{
    int hash[20]={0};
    vector<int>ans;
    for(int i = 0;i<arr.size();i++)
    {
        hash[arr[i]+0]+=1;
    }
    for(int i=1;i<=20;i++)
    {
        if(hash[i] <1 )
        {
           ans.push_back(i);
        }
        else
        {
            continue;
        }
    }
    return ans;
}
 


int main()
{
    vector<int>array={5,4,2,3,9,4,11,3};
  vector<int>r =searchElement(array);
  for(int i =0;i<r.size();i++)
  cout<<r[i]<<' ';
     
     
    return 0;
}