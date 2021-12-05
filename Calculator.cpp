#include <iostream>

int main()
{
    float number1,number2;
    char operation;
    std::cout << " Calculator " <<std::endl;
    std::cin >> number1 >> operation >> number2;

    switch (operation)
    {
    case '+' : std::cout << number1 << operation << number2 << " = " << number1 + number2;break;
    case '-' : std::cout << number1 << operation << number2 << " = " << number1 - number2;break;
    case '*' : std::cout << number1 << operation << number2 << " = " << number1 * number2;break;
    case '/' : std::cout << number1 << operation << number2 << " = " << number1 / number2;break;
        
    case '%' :
            bool isNumber1Int,isNumber2Int;
            isNumber1Int = ((int)number1 ==number1);
            isNumber2Int = ((int)number2 ==number2);
            if(isNumber1Int && isNumber2Int)
                std::cout << number1 << operation << number2 << " = " << (int)number1 % (int)number2;
            else
                std::cout << " invalid input!" ;
            break;
    default: std::cout << "Not valid operation!" <<std::endl;      
            
    }
    return 0;

}