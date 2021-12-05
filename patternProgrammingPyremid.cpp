#include<iostream>
int main()
{
    int n=5;
   /* for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";

        }
        for(int k=1;k<=i;k++)
        {
            std::cout<<"*";
        }
        std::cout << std::endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";

        }
        for(int k=1;k<=i;k++)
        {
            std::cout<<"* ";
        }
        std::cout << std::endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";
        }
        for(int k =1;k<=i;k++)
        {
            std::cout <<i;
        }
        std::cout <<std::endl;

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";
        }
        for(int k =1;k<=i;k++)
        {
            std::cout <<k;
        }
        std::cout <<std::endl;

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";
        }
        for(int k =1;k<=i;k++)
        {
            std::cout <<i <<" ";
        }
        std::cout <<std::endl;

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";
        }
        for(int k =1;k<=i;k++)
        {
            std::cout <<k <<" ";
        }
        std::cout <<std::endl;

    }
    for(int i=0;i<n;i++)
    {
        for(int j=(n-1);j>i;j--)
        {
            std::cout <<" ";
        }
        for(int k =0;k<=i;k++)
        {
            std::cout <<char(i+65) <<" ";
        }
        std::cout <<std::endl;

    }
    for(int i=0;i<n;i++)
    {
        for(int j=(n-1);j>i;j--)
        {
            std::cout <<" ";
        }
        for(int k =0;k<=i;k++)
        {
            std::cout <<char(k+65) <<" ";
        }
        std::cout <<std::endl;

    }*/


    //diamond shape
    for(int i=1;i<=n;i++)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";

        }
        for(int k=1;k<=i;k++)
        {
            std::cout<<"* ";
        }
        std::cout << std::endl;
    }
     for(int i = n-1 ; i >= 1 ; i--)
    {
        for(int j=(n-1);j>=i;j--)
        {
            std::cout <<" ";

        }
        for(int k=1;k<=i;k++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;

    }


    return 0;
}