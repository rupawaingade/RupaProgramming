#include<iostream>

void print(void* ptr,char type)
{
    switch (type)
    {
        case 'i':std::cout << *((int*)ptr) <<std::endl;break;
        case 'c':std::cout << *((char*)ptr) <<std::endl;break;

    }
}
int main()
{
    int number = 5;
    char c ='a';
    print(&number,'i');
    print(&c,'c');
    return 0;
}