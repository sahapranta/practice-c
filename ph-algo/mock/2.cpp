#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int maxEven = 0;

    for (int num : nums)
    {
        if (num % 2 == 0 && num > maxEven)
        {
            maxEven = num;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = nums[i] + nums[j];
            if (sum % 2 == 0 && sum > maxEven)
            {
                maxEven = sum;
            }
        }
    }

    cout << maxEven << endl;

    return 0;
}