#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include <functional>

using namespace std;
void solve(string digits,int index,string output,string mapping[],vector<string>&ans)
{

    if(index>=digits.length())
    {
        ans.push_back(output);
        return;
    }
    int number =digits[index] -'0';
    string value =mapping[number];
    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digits,index+1,output,mapping,ans);
        output.pop_back();
    }


}
vector<string> letterCombinations(string digits) 
{
    vector<string> ans;
    if(digits.length()==0)
    return ans;

    string output =" ";
    int index =0 ;
    string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,index,output,mapping,ans);
    return ans;
        
}
int main()
{
    
    string arr="23";
    vector<string>r = letterCombinations(arr);
    for(int i=0;i<r.size();i++)
    {
            cout<<r[i]<<" " ;
        
    }
    cout<<" ";


  
}
