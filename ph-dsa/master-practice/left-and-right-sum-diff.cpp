#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v;
    vector<int> result;

    v.push_back(10);
    v.push_back(4);
    v.push_back(8);
    v.push_back(3);

    int size = v.size();

    vector<int> left;
    vector<int> right;
    right.push_back(0);
    left.push_back(0);

    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            left.push_back(v[i - 1] + left[i - 1]);
        }

        if (i != size - 1)
        {
            right.push_back(v[size - i - 1] + right[i]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        result.push_back(abs(left[i] - right[size - (i + 1)]));
    }

    print(result); // [15,1,11,22]

    return 0;
}