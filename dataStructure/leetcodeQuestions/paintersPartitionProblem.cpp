#include <limits.h>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int isPossible(vector<int>boards,int k,int mid)
{
    int timeSlot =0;
    int paintersCount =1;
    for(int i =0;i<boards.size();i++)
    {
        if(timeSlot+boards[i]<=mid)
    {
        timeSlot =timeSlot+boards[i];
    }

    else
    {
        paintersCount++;
        if(paintersCount >k ||boards[i]>mid)
        {
            return false;
        }
        timeSlot =0;
        timeSlot =timeSlot+boards[i];
    }
    }
    return true;

}


 int findLargestMinDistance(vector<int> boards, int k)
    {
       int s =0;
       int sum =0;
       for(int i =0;i<boards.size();i++)
       {
        sum =sum+boards[i];
       }
       int e =sum;
       int ans =-1;
       int mid = s+(e-s)/2;
       while(s<=e)
       {
            if(isPossible(boards,k,mid))
            {
                ans =mid;
                e =mid-1;
            }
            else
            {
                s =mid+1;
            }
            mid =s+(e-s)/2;
       }
       return ans;
    }

int main()
{
    vector<int>boards ={10,20,30,40};
    int result =findLargestMinDistance(boards,2);
    cout<<result;
    return 0;
}