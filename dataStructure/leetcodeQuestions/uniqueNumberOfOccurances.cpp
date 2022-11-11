#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) 
{
    vector<int> ans;//to store number of occurances of each element.
    int length = arr.size();
    sort(arr.begin(),arr.end());//first we sort array.to count no of occurances.
    int i =0;
    for(i=0;i<length;)
    {
        int count =1;
        for(int j = i+1;j<length;j++)
         {
            if(arr[i]==arr[j])
            {
                count++;
            }
            else
            {
              break;
            }

        }
        ans.push_back(count);
        i = i+count;

    }
    int length1=ans.size();
    sort(ans.begin(),ans.end());
    for(int i =0;i<length1-1;length1++)
    {
        if(ans[i] == ans[i+1])
        {
            return false;
        }
    }
  return true;
        
}


int main()
{
  vector<int>arr ={1,2,2,1,1,3,3,3,3};
  
  if(uniqueOccurrences(arr))
  {
    cout<<"true";

  }
  else
  {
  cout<<"false";
  }
 
 
    return 0;

}