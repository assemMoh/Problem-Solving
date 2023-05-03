#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    vector <int> a;

    cin >> n;
    while(n--) {cin >> x; a.push_back(x);}

    sort(a.begin(), a.end());

    int temp = a[0];
    a[0] = a[a.size() - 1];
    a[a.size() - 1] = temp;

    for (auto i: a) cout << i << " ";
}
