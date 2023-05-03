#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int a, b, c, diff, ind = 0;
        cin >> a >> b >> c;
        diff = b - c;

        int remain = a - 1;

        vector <int> ans;
        for (int i = 0; i < remain; i++)
        {
            ans.push_back(1);
        }

        while(remain != c)
        {
            ans[ind]++;
            remain++;
            if(ans[ind] == diff) ind ++;
        }
        ans.push_back(diff);
        for (auto i: ans) cout << i << " ";
        if (k != t) cout << endl;
    }
}


