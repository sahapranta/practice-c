#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, long long int> &a, pair<string, long long int> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }

    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<string, long long int>> v;

    while (n--)
    {
        string name;
        long long int score;
        cin >> name >> score;
        v.push_back({name, score});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto it : v)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

// 5
// sakib 1
// rakib 2
// tasfia 3
// asfia 4
// afia 5