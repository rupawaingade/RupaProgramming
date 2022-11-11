#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
#include<map>
#include<stack>
#define MAX 4
using namespace std;

vector<int> nextSmallerElement(int *arr,int n)
{
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--)
    {
        int current =arr[i];
        while(s.top() != -1 && arr[s.top()]>=current)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int> previousSmallerElement(int *arr,int n)
{
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        int current =arr[i];
        while(s.top()!=-1 &&arr[s.top()]>=current)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(int *heights,int n)
{
   // int n=heights.size();
    vector<int>next(n);
    next=nextSmallerElement(heights,n);
    vector<int>previous(n);
    previous=previousSmallerElement(heights,n);
    int area=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int l=heights[i];
        if(next[i] == -1)
         {
             next[i]=n;
         }
        int b=next[i]-previous[i]-1;
        int newArea =l*b;
        area=max(area,newArea);
    }
    return area;
}
int maxRectangleArea(int M[MAX][MAX],int n,int m)
{
 int area=largestRectangleArea(M[0],m);
  for(int i=1;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(M[i][j] != 0)
          {
              M[i][j]=M[i][j]+M[i-1][j];
          }
          else
          M[i][j]=0;
      }
      area=max(area,largestRectangleArea(M[i],m));
  }
  return area;
}
int main()
{
   int arr[MAX][MAX]={{0,1,1,0},
                      {1,1,1,1},
                      {1,1,1,1},
                      {1,1,0,0}};
    int n=MAX;
    int m=MAX;
   int r =maxRectangleArea(arr,n,m);
    cout<<r;
    
    
}