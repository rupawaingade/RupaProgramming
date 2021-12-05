#include <iostream>
int main()
{
    int Year,Month;
    std::cout << " Year " << " Month " << std::endl;
    std::cin >> Year >> Month;
    switch (Month)
    {
    case 2:(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0) ? std::cout << "this year is leap year with 29 days." : std ::cout << "this is not leap year with 28 days ";
        break;
    case 4:
    case 6:
    case 9:
    case 11: std::cout <<"30 days month";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: std::cout <<"31 days month";
    break;
    default:std::cout <<"invalid input";
        break;
    }
    return 0;
}
