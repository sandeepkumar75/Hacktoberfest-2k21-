class Solution
{
public: int climbStairs(int n)
    {
        int dp[n + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i] = -1;
        }
        return fib(n, dp);
    }
    int fib(int n, int dp[])
    {
        int ans1, ans2;
        if (n == 0 || n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else if (n == 3)
            return 3;

        if (dp[n - 1] == -1)
        {
            ans1 = fib(n - 1, dp);
            dp[n - 1] = ans1;
        }
        else
        {
            ans1 = dp[n - 1];
        }

        if (dp[n - 2] == -1)
        {
            ans2 = fib(n - 2, dp);
            dp[n - 2] = ans2;
        }
        else
        {
            ans2 = dp[n - 2];
        }

        return ans1 + ans2;
    }
};
