#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include <functional>

using namespace std;
void solve(vector<int>nums,int index,vector<int>output,vector<vector<int>>&ans)
{

    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    //exclude call
    solve(nums,index+1,output,ans);
     //include call
     int element =nums[index];
     output.push_back(element);
     solve(nums,index+1,output,ans);
}
vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<vector<int>> ans;
    vector<int>output;
    int index =0;
    solve(nums,index,output,ans);
    return ans;
        
}
int main()
{
    
    vector<int> arr= {1,2,3};
    vector<vector<int>>r = subsets(arr);
    for(int i =0;i<r.size();i++)
    {
        for (int j = 0; j < r[i].size(); j++)
        {
            cout << r[i][j];
        }
        cout<<" ";
    }
    return 0;
}