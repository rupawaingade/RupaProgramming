#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;

 vector<int> printWave(vector<vector<int>>arr ,int nrows,int mcols)
{
    vector<int>ans={0};
    
   for(int col=0;col<mcols;col++)
   {
        if(col%2!=0)
        {
            for(int row =nrows-1;row>=0;row--)
            {
               // cout<<arr[row][col]<<" "; 
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            for(int row =0;row<nrows;row++)
            {
                //cout<<arr[row][col];
                ans.push_back(arr[row][col]);
            }
        }
       
   }
 return ans;
}


int main()
{
    vector<vector<int>>arr {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}} ;
    int n=4,m=4;
     vector<int>r=printWave(arr,4,4);
     for(int i=1;i<r.size();i++)
     {
        cout<< r[i] <<" ";
        
     }
     
     
    return 0;
}