#include <iostream>
#include <sstream>
#include <string>

std::string rev(std::string &s)
{
    std::string str;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        str.push_back(s[i]);
    }
    return str;
}

int main()
{
    std::string s;
    std::getline(std::cin, s);

    std::stringstream ss(s);
    std::string word;
    int count = 0;

    while (ss >> word)
    {
        if (count)
        {
            std::cout << " ";
        }
        count++;
        std::cout << rev(word);
    }

    return 0;
}