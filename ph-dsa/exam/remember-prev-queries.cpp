#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> myList;

    int n;
    cin >> n;

    while (n--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2 && v < myList.size())
        {
            auto it = myList.begin();
            for (int i = 0; i < v; i++)
            {
                it = next(it);
            }

            myList.erase(it);
        }

        cout << "L -> ";
        for (int v : myList)
        {
            cout << v << " ";
        }
        cout << endl;
        cout << "R -> ";

        for (auto it = myList.end(); it != myList.begin();)
        {
            --it;
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}