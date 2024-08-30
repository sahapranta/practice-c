#include <bits/stdc++.h>

using namespace std;

// Both Max and Min Heap

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

        int cur_idx = v.size() - 1;

        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;

            // if (v[cur_idx] > v[parent_idx]) // MAX HEAP
            if (v[cur_idx] < v[parent_idx]) // MIN HEAP
            {
                swap(v[parent_idx], v[cur_idx]);
            }
            else
            {
                break;
            }

            cur_idx = parent_idx;
        }
    }

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}