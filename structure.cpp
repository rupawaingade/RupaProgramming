#include<iostream>
#include<cstring>


struct student{
    int rollNumber;
    char name[6];
    
};

int main()
{
    //student r ={1,"parag"};
    //std::cout <<r.rollNumber<<" "<<r.name<<std::endl;
    
    student *p ;
    p = new student;
    p->rollNumber = 2;
    strcpy(p->name , "priya");

    std::cout<<p->rollNumber<<std::endl;
    std::cout<<p->name<<std::endl;
    return 0;
}