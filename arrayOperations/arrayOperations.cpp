#include<iostream>

void Display(int Array[],int length)
{
    std::cout<<"Elements Are"<<std::endl;
    for(int i = 0;i < length;i++)
    std::cout<<Array[i]<<std::endl;
}
//void Append(  )
int main()
{
    int Array[20] = {2,3,4,5,6};
    int size;
    int length=5;
    Display(Array ,length);
    return 0;
}