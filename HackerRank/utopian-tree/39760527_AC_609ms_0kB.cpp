#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int test[n];
    for (int i = 0; i < n; i++) cin >> test[i];
    for (int i = 0; i < n; i ++)
    {
        int res = 0;
        for (int j = 0; j <= test[i]; j++)
        {
            if (j % 2 == 0) res++;
            else res *= 2;
        }
        cout << res << endl;
    }
}
