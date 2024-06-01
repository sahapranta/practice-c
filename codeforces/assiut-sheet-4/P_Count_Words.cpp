#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int wordCount = 0;
    bool inWord = false;

    for (char c : s)
    {
        if (isalnum(c))
        {
            inWord = true;
        }
        else if (inWord)
        {
            wordCount++;
            inWord = false;
        }
    }

    if (inWord)
    {
        wordCount++;
    }

    cout << wordCount << endl;

    return 0;
}