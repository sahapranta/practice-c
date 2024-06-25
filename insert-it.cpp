#include <bits/stdc++.h>

using namespace std;

void takeInput(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    
    takeInput(v1, n);
    
    cin >> m;

    takeInput(v2, m);

    int p;
    cin >> p;

    v1.insert(v1.begin() + p, v2.begin(), v2.end());

    for (int k : v1)
    {
        cout << k << " ";
    }

    return 0;
}