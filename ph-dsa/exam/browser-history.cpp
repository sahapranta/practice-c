#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<string> history;
    auto tmp = history.begin();

    while (true)
    {
        string site;
        cin >> site;

        if (site == "end")
        {
            break;
        }

        history.push_back(site);
    }

    int n;
    cin >> n;

    while (n--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "visit")
        {
            string ss;
            cin >> ss;

            auto it = find(history.begin(), history.end(), ss);

            if (it != history.end())
            {
                tmp = it;
                cout << ss << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (tmp != history.begin())
            {
                tmp = prev(tmp);
                cout << *tmp << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (next(tmp) != history.end())
            {
                tmp = next(tmp);
                cout << *tmp << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}