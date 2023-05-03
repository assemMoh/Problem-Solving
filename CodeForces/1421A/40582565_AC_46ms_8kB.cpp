#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << (a ^ b) << endl;
    }
}


