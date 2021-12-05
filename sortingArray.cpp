#include<iostream>
void insertionSort(int numbers[],int n)
{
   // int small = numbers[0];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(numbers[j]<numbers[i])
            {
                int  small = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = small;
            }

        }
         
    }
    for(int i = 0;i<n;i++)
    {
        std::cout<<numbers[i];
    }
}
void BubbleSort(int numbers[],int n)
{
   for(int i=0;i<n-2;i++)
   {
       if(numbers[i] > numbers[i+1])
       {
           int temp = numbers[i];
           numbers[i] = numbers[i+1]
           numbers[i+1]=temp;
       }
   }
   for()

}
   
  int main()
  {
      int n;
      std::cin>>n;
      int numbers[n];
      for(int i = 0;i<n;i++)
      {
          std::cin >> numbers[i];
      }
      insertionSort(numbers,n);
      BubbleSort( numbers[],n);
      return 0;
  }