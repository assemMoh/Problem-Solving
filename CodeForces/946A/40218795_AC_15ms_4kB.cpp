#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, entry, countPos = 0, countNeg = 0;
    cin >> n;
    while(n--)
    {
        cin >> entry;
        if(entry >= 0) countPos += entry;
        else countNeg += entry;
    }
    cout << countPos - countNeg;

}
