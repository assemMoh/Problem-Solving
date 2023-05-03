#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;
    int nums[n];
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int i = d; i < n; i++) cout << nums[i] << " ";
    for (int i = 0; i < d; i++) cout << nums[i] << " ";
    //if (d > n) d %= n;
    //cout << d;
    //int rotated[n];
    //for (int i = 0; i < d; i++) rotated[i] = nums[]
}

