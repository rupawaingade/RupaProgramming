
#include<iostream>
#include <string>
//find string length .//
int stringLength(std::string name)
{
    int i = 0;
    while(name[i] != '\0')
    i++;
    //i=i-1;
    return i = i-1;

}
//string copy
void stringCopy(std::string name,char str[13])
{
    int i = 0;
    while(name[i] != '\0')
    {
      str[i] = name[i];
      i++;
      str[i] ='\0';
    }
    
}
//string Concat//
{
    
}

int main()
{
    std::string name = " Rupa ";
    std::string name2 = "Meera";
    char str[13];
    int length = stringLength(name);
    
    std::cout <<length;
    stringCopy(name,str);
    std::cout << str;
    
    return 0;
}