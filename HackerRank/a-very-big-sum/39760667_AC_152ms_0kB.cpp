#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, entry, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> entry;
        sum += entry;
    }
    cout << sum;
}
