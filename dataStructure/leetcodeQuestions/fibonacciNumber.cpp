#include<iostream>
using namespace std;
void fibonacciNumber(int n)
{
    int first =0;
    int second = 1;
    int next;
    cout<<first<<" "<<second<<" ";
    for(int i =2;i<=n;i++)
   {
       next =first +second;
       first = second;
       second =next;
       cout<<next<<" ";
   }
}
int fib(int n)
{
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;
    
    int ans = fib(n-1)+fib(n-2);
    
    return ans;
}
int main()
{
  int n =3;
  //fibonacciNumber(n); 
  int r =fib(n) ;
  cout<<r;
  return 0;
}
