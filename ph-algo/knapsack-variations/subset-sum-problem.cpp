/*
    https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int dp[105][10005];

    bool checkSum(int n, vector<int> arr, int sum)
    {
        if (n == 0)
        {
            return sum == 0;
        }

        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (arr[n - 1] <= sum)
        {
            return dp[n][sum] = checkSum(n - 1, arr, sum - arr[n - 1]) || checkSum(n - 1, arr, sum);
        }
        else
        {
            return dp[n][sum] = checkSum(n - 1, arr, sum);
        }
    }

    bool isSubsetSum(vector<int> arr, int sum)
    {
        int n = arr.size();
        memset(dp, -1, sizeof(dp));

        return checkSum(n, arr, sum);
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> sum;
        Solution sol;
        cout << sol.isSubsetSum(arr, sum) << endl;
    }

    return 0;
}