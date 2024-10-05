/*
https://leetcode.com/problems/target-sum/description/
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int dp[25][1005];

    int checkSum(int n, vector<int> &arr, int sum)
    {
        if (n == 0)
        {
            return sum == 0;
        }

        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (arr[n - 1] <= sum)
        {
            return dp[n][sum] = checkSum(n - 1, arr, sum - arr[n - 1]) +
                                checkSum(n - 1, arr, sum);
        }
        else
        {
            return dp[n][sum] = checkSum(n - 1, arr, sum);
        }
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = 0;

        for (int child : nums)
            sum += child;

        if (target > sum || (target + sum) % 2 != 0)
            return 0;

        int s1 = (target + sum) / 2;
        if (s1 < 0)
            return 0;

        memset(dp, -1, sizeof(dp));

        int n = nums.size();

        return checkSum(n, nums, s1);
    }
};

int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> target;

    Solution sol;

    cout << sol.findTargetSumWays(nums, target) << endl;

    return 0;
}