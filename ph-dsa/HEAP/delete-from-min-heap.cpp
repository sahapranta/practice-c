#include <bits/stdc++.h>

using namespace std;

void insert(vector<int> &v, int x)
{
    v.push_back(x);

    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;

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

void delete_from_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int size = v.size() - 1;

    int cur_idx = 0;

    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = left_idx + 1;

        if (left_idx <= size && right_idx <= size)
        {
            if (v[left_idx] <= v[right_idx] && v[left_idx] < v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else if (v[right_idx] <= v[left_idx] && v[right_idx] < v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= size)
        {
            if (v[left_idx] < v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= size)
        {
            if (v[right_idx] < v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(v, x);
    }

    print_heap(v);

    delete_from_heap(v);
    print_heap(v);

    delete_from_heap(v);
    print_heap(v);

    delete_from_heap(v);
    print_heap(v);

    return 0;
}

// g++ hello.cpp -std=c++17 && ./a.out < in.txt
// 6 (N)
// 10 20 30 45 44 67 (Xs)