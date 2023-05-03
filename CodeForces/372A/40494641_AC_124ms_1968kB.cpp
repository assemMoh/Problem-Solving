#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <climits>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <int> k(n);

    for (int i = 0; i < n; i++)
        cin >> k[i];

    sort(k.begin(), k.end());

    int middle = (n/2) - 1, last = n - 1, c = 0;

    for (int i = middle; i >= 0; i--)
    {
        if (k[i] * 2 <= k[last]) c++, last--;
    }
    cout << n - c;





}


