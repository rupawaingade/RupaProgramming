#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;

  vector<int>  sumOfTwoDRow(vector<vector<int>>v)
{
    
   vector<int> ans; 
   int sum;  
   for(int row =0;row<v.size();row++)
   {
       sum = 0;
       for(int col =0;col<v[row].size();col++)
       {
         sum= sum+v[row][col];  
       }
       ans.push_back(sum);
   }
  return ans;
}
 vector<int>  sumOfTwoDCol(vector<vector<int>>v)
{
    
   vector<int> ans; 
   int sum;  
   for(int col =0;col<v.size();col++)
   {
       sum = 0;
       for(int row =0;row<v[col].size();row++)
       {
         sum= sum+v[row][col];  
       }
       ans.push_back(sum);
   }
  return ans;
}
int sumOfTwoDRowMax(vector<vector<int>>v)
{
    
   vector<int> ans; 
   int sum; 
   int maxSum =INT_MIN; 
   for(int row =0;row<v.size();row++)
   {
       sum = 0;
       for(int col =0;col<v[row].size();col++)
       {
         sum= sum+v[row][col];  
       }
       ans.push_back(sum);
       for(int i =0;i<ans.size();i++)
       {
           if(ans[i]>INT_MIN)
           maxSum =ans[i];

       }
   }
  return maxSum;
}

int main()
{
    vector<vector<int>>v {{2,3,4},{1,2,9},{4,5,6}};
    vector<int>ans=sumOfTwoDRow(v);
    for(int i =0;i<ans.size();i++)
    cout<<ans[i]<<' ';
    cout<<endl;
    int max =sumOfTwoDRowMax(v);
    cout<<max;
    return 0;
}