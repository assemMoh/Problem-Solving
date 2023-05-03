#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d1 = 0, d2 = 0;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (i == j) d1 += mat[i][j];
        }
    }
    for (int i = n - 1; i >= 0; i--) d2 += mat[n - 1 - i][i];
    cout << abs(d1 - d2);
}
