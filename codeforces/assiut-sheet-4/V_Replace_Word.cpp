#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i, 5) == "EGYPT")
        {
            cout << " ";
            i += 4;
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}