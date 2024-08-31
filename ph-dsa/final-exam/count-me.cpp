#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);

        stringstream ss(s);

        map<string, int> mp;
        string highestWord;

        string word;
        int max_count = 0;

        while (ss >> word)
        {
            mp[word]++;
            int new_count = max(mp[word], max_count);

            if (new_count > max_count)
            {
                highestWord = word;
            }

            max_count = new_count;
        }

        cout << highestWord << " " << mp[highestWord] << endl;
    }

    return 0;
}

// 2
// ratul piyush fohad shuvo rafi piyush fohad ratul
// jony jony yes papa eating sugar no papa telling lies no papa open your mouth ha ha ha