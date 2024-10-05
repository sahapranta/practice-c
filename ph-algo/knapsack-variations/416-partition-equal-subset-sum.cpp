/*
  https://leetcode.com/problems/partition-equal-subset-sum/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int dp[205][20005];

    bool checkSum(int n, vector<int> &arr, int sum)
    {
        if (n == 0)
        {
            return sum == 0;
        }

        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (arr[n - 1] <= sum)
        {
            return dp[n][sum] = checkSum(n - 1, arr, sum - arr[n - 1]) ||
                                checkSum(n - 1, arr, sum);
        }
        else
        {
            return dp[n][sum] = checkSum(n - 1, arr, sum);
        }
    }

    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        int sum = 0;

        for (int child : nums)
            sum += child;

        if (sum % 2 != 0)
        {
            return false;
        }

        sum = sum / 2;

        return checkSum(n, nums, sum);
    }
};

int main()
{

    return 0;
}