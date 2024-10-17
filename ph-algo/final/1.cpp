#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int N, K;
    string str1, str2;

    while (t--)
    {
        cin >> N >> K;
        cin >> str1 >> str2;

        int opt = 0;
        for (int i = 0; i < N; i++)
        {
            if (str1[i] != str2[i])
            {
                opt++;
            }
        }

        cout << (opt <= K ? "YES" : "NO") << '\n';
    }

    return 0;
}

// Input
// 5
// 7 2
// 0110110
// 1011001
// 6 3
// 101100
// 011000
// 6 3
// 011110
// 000011
// 8 3
// 00111011
// 01110110
// 9 3
// 000101111
// 100101101


// Output
// NO
// YES
// NO
// NO
// YES