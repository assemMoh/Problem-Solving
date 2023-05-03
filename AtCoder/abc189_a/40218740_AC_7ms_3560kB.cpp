#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a, b, c;
    cin >> a >> b >> c;
    if (a == b and b == c) cout << "Won";
    else cout << "Lost";

}
