#include<iostream>
#define SIZE 5
int AverageOfNumbers(int Numbers[SIZE])
{
    int sum = 0 ,i;
    for(i =0;i<SIZE;i++)
    {
        sum = sum + Numbers[i];
    }
    std::cout <<"sum:"<< sum<<std::endl;
    int Average = sum / i;
    return Average;

}
int main()
{
    int Numbers[SIZE],i;
    std::cout <<"Enter Numbers:";
    for( i =0;i<SIZE;i++)
    {
        std::cin>>Numbers[i];
       
    }
  int avg = AverageOfNumbers(Numbers);
  std::cout <<"Avg:"<< avg;  
      

    return 0;
}