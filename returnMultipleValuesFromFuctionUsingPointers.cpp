#include<iostream>

int getMin(int numbers[],int size)
{
    int min = numbers[0];
    for(int i=1;i<size;i++)
    {
        if(numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}
int getMax(int numbers[],int size)
{
    int max = numbers[0];
    for(int i=1;i<size;i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}
void getMinAndMax(int numbers[],int size,int* Min,int* Max)
{
    for(int i=1;i<size;i++)
    {
        if(numbers[i] > *Max)
        {
            *Max = numbers[i];
        }
         if(numbers[i] < *Min)
       
        {
            *Min = numbers[i];
        }
    }
}
int main()
{
    int numbers[5];
   
    for(int i =0;i<5;i++)
    {
    std::cout <<"number:";
    std::cin >>numbers[i];
    }
    int Min = numbers[0];
    int Max = numbers[0];

   //std::cout <<"Max is:"<<getMax(numbers,5) << std::endl;
    //std::cout <<"Min is:"<<getMin(numbers,5) << std::endl;
    getMinAndMax( numbers, 5,&Min,&Max);
    std::cout <<"Max is " <<Max <<std::endl;
    std::cout <<"Min is "<<Min <<std::endl;
    return 0;
} 