#include <bits/stdc++.h>

using namespace std;

int main()
{
    // list<int> myList(10, 5);
    list<int> list2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // list<int> myList(list2);
    int arr[5] = {1, 2, 3, 4, 5};
    // list<int> myList(arr, arr + 5);
    vector<int> v = {100, 200, 350, 400, 670};
    list<int> myList(v.begin(), v.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    for (int val : myList)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}