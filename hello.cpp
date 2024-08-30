#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int> &nums)
{
    int size = nums.size();
    int left[size];
    left[0] = 0;
    int right[size];
    right[0] = 0;

    for (int i = 0; i < size; i++)
    {
        if (i != 0)
        {
            left[i] = left[i - 1] + nums[i - 1];
        }

        if (i != size - 1)
        {
            right[i + 1] = nums[size - i - 1] + right[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (left[i] == right[size - (i + 1)])
            return i;
    }

    return -1;
}

void print(int result, int answer)
{
    const string PASS = "✅ Passed";
    const string FAIL = "❎ Failed";

    cout << (result == answer ? PASS : FAIL) << ": " << result << endl;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    print(pivotIndex(nums), 3); // 3

    vector<int> nums2 = {1, 2, 3};
    print(pivotIndex(nums2), -1); // -1

    vector<int> nums3 = {2, 1, -1};
    print(pivotIndex(nums3), 0); // 0

    return 0;
}