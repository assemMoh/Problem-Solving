#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <climits>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

bool pass (long long middle, vector <long long> ing, vector <long long> amount, long long k)
{
    for (int i = 0; i < ing.size(); i++)
    {
        if (middle * ing[i] > amount[i]) k -= ((middle * ing[i]) - amount[i]);
        if (k < 0) return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long long n, k;
    cin >> n >> k;
    vector <long long> ing(n), amount(n);

    for (int i = 0; i < n; i++) cin >> ing[i];
    for (int i = 0; i < n; i++) cin >> amount[i];


    long long start, last, middle, ans;
    start = 1;
    last = 2000000000;
    ans = 0;
    while (start <= last)
    {
        middle = (start + last) / 2;
        bool d = pass(middle, ing, amount, k);
        if (d)
        {
            ans = max(middle, ans);
            start = middle + 1;
        }
        else last = middle - 1;
    }
    cout << ans;
}


