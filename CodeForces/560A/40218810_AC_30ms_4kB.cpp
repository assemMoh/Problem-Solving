#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, entry, check = 0;
    cin >> n;
    while(n--)
    {
        cin >> entry;
        if(entry == 1) check = 1;
    }
    if (check) cout << -1;
    else cout << 1;

}
