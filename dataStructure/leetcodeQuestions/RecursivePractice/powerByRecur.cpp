#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<fstream>
#include <climits>
using namespace std;
int power(int a,int b)
{
    //eg 2^0 =1 && 2^1 =2 ->base case.
    if(b == 0)
    return 1;
    if(b == 1)
    return a;
    //recursive call
    int ans = power(a,b/2);
    //to check power is even or odd 
    //if power is even eg 2^4 = 2^2 * 2^2
    //if power is odd eg 2^5 = 2 * 2^2 * 2^2
    if(b%2 == 0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }


}


int main()
{
    int a =2;
    int b =4;
    int r=power(a,b);
    cout<<r;
  
}
