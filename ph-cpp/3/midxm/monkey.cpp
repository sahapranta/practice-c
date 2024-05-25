#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    char ch[100001];

    while (cin.getline(ch, 100001))
    {
        int len = strlen(ch);

        sort(ch, ch + len);

        for (int i = 0; i < len; i++)
        {
            if (ch[i] == ' ')
                continue;

            cout << ch[i];
        }

        cout << endl;
    }

    return 0;
}