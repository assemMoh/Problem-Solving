#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{

  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, carry, ans;
    cin >> s;

    bool firstZ = 1;
    for (auto k : s)
    {
        if (k == '0' and firstZ) firstZ = 0;
        else ans += k;
    }
    if (firstZ) ans.erase(0, 1);
    cout << ans;

}
