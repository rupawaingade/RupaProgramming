#include<vector>
#include<iostream>
using namespace std;
vector<int> partition (int number,int k)
{
    int part=0;
    int reminder=number%k;
    vector<int>ans;
    for(int i=0;i<k;i++)
    {
        part =number/k;
        if(reminder>0)
        {
            part += 1;
            reminder--;
        }
        ans.push_back(part);
    }
    return ans;
}
int main()
{
    std::vector<int> r = partition(10,3);
    //[4,3,3]
   for(int i=0;i<r.size();i++)
   cout<<r[i];
   cout<<endl;
}