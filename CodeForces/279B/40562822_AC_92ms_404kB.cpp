#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t, tempT;
    cin >> n >> t;
    vector <int> b(n);

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int i = 0, j = 0, sum = 0, ans = 0;

    while (i < n)
    {
        while (j < n)
        {
            if (sum + b[j] <= t) sum += b[j];
            else {break;}
            j++;
        }
        ans = max(ans, j - i);
        sum -= b[i];
        i++;
    }

    cout << ans;

}


