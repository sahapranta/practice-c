#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word1, word2;

    while (cin >> word1 >> word2)
    {
        ll i = 0, j = 0;
        ll w1 = word1.length();
        ll w2 = word2.length();

        while (i < w1 && j < w2)
        {
            if (word1[i] == word2[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }

        cout << (j == w2 ? "Possible" : "Impossible") << endl;
    }

    return 0;
}