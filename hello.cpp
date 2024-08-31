#include <bits/stdc++.h>

using namespace std;

long long int findMin(vector<long long int> v)
{
    return *min_element(v.begin(), v.end());
}

void del(vector<long long int> &v, long long int x)
{
    v.erase(remove(v.begin(), v.end(), x), v.end());
}

int main()
{
    vector<long long int> v;

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        long long int num;
        cin >> num;
        v.push_back(num);
    }

    int n;
    cin >> n;

    while (n--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            long long int x;
            cin >> x;
            v.push_back(x);

            cout << findMin(v) << endl;
        }
        else if (cmd == 1)
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << findMin(v) << endl;
            }
        }
        else if (cmd == 2)
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                del(v, findMin(v));

                if (v.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << findMin(v) << endl;
                }
            }
        }
    }

    return 0;
}