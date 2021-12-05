#include<iostream>

int MaxNumber(int array[],int size)
{
    int max = array[0];
    for(int i = 0;i < size;i++)
    {
        if(array[i] > max)
        max = array[i];

    }
    return max;
}
int MinNumber(int array[],int size)
{
    int min = array[0];
    for(int i = 0;i < size;i++)
    {
        if(array[i] < min)
        min = array[i];

    }
    return min;
}

int main()
{
    int array[5] = {5,72,65,2,67};
    
    int j = MinNumber(array,5);
    std::cout << j <<std::endl;
    int i = MaxNumber(array,5);
    std::cout << i;
    return 0;

}