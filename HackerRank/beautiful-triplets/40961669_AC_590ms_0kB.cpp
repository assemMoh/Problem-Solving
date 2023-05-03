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

    int a, n, m, c = 0;
    cin >> n >> m;
    multiset<int> num;
    for (int i = 0; i < n; i++)
        cin >> a, num.insert(a);

    for (auto i: num)
    {
        if (num.find(i + m) != num.end() and num.find(i + (m * 2)) != num.end()) c++;
    }
    cout << c;
}


