#include <iostream>

int main()
{
    char a;
    a = getchar();

    if (a >= '0' && a <= '9')
    {
        std::cout << "IS DIGIT" << std::endl;
    }
    else if (a <= 'z' && a >= 'A')
    {
        std::cout << "ALPHA" << std::endl;

        if (a >= 'A' && a <= 'Z')
        {
            std::cout << "IS CAPITAL" << std::endl;
        }
        else
        {
            std::cout << "IS SMALL" << std::endl;
        }
    }

    return 0;
}