#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max Size: " << v.max_size() << endl;

    v.resize(20, 0);

    cout << "-------After resize-----" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.clear();

    cout << "-------After clear-----" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Is empty: " << (v.empty() ? "YES" : "NO") << endl;

    v.resize(10, 100);

    cout << "-------After resize-----" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Elements: ";

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}