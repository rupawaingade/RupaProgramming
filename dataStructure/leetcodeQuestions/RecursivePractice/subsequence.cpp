#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include <functional>

using namespace std;
void solve(string nums,int index,string output,vector<string>&ans)
{

    if(index>=nums.size())
    {
        if(output.size()>0)
        ans.push_back(output);
        return;
    }
    //exclude call
    solve(nums,index+1,output,ans);
     //include call
     char c = nums[index];
     output.push_back(c);
     solve(nums,index+1,output,ans);



}
vector<string> subsequence(string nums) 
{
    vector<string> ans;
    string output ="";
    int index ;
    solve(nums,index,output,ans);
    return ans;
        
}
int main()
{
    
    string arr={"abc"};
    vector<string>r = subsequence(arr);
    for(int i=0;i<r.size();i++)
    {
            cout<<r[i]<<" " ;
        
    }


  
}
