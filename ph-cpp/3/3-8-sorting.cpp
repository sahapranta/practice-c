#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {6, 3, 9, 2, 5};

    sort(arr, arr + 5); // ascending order
    sort(arr, arr + 5, greater<int>()); // descending order

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}