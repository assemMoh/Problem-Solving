#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    long long seq[test], sum = 0;
    for (int i = 0; i < test; i++)
    {
        cin >> seq[i];
        sum += seq[i];
    }
    long long targetSum, freq, targetInd = 0;
    cin >> targetSum;
    freq = (targetSum / sum);
    targetInd = freq * test;
    freq *= sum;
    for (int i = 0; i < test; i++)
    {
        freq += seq[i];
        targetInd++;
        if (freq > targetSum) break;
    }
    cout << targetInd;
}
