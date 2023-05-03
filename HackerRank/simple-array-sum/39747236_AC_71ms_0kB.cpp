#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> num;
        sum += num;
    }

    cout << sum;

}
