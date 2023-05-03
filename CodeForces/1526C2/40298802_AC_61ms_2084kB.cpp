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
    cin >> n;
    long long sum = 0;
    priority_queue <int, vector<int>, greater<int>> collect;
    while(n--)
    {
        cin >> x;
        if (-1 < x + sum)
            sum += x, collect.push(x);
        else
        {
            if (!collect.empty() and x > collect.top())
                sum -= (collect.top()), sum += x, collect.pop(), collect.push(x);
        }
    }
    cout << collect.size();
}
