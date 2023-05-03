#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5;
    long long nums[n];
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int i = 0; i < n - 1; i++)
    {
        long long temp;
        for (int j = i; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    long long minSum = 0, maxSum = 0;
    for (int i = 0; i < n - 1; i++) minSum += nums[i];
    for (int i = 1; i < n; i++) maxSum += nums[i];

    cout << minSum << " " << maxSum;
}
