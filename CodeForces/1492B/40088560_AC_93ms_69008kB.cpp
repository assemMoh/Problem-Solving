#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    for (int j = 0; j < test; j++)
    {
        deque <int> values;
        stack <int> waiting, carrier;
        queue <stack<int>> ans;
        int n, mx = 1, entry;
        cin >> n;
        int largest[n];
        for (int i = 0; i < n; i++)
        {
            cin >> entry;
            if (i == 0) largest[i] = entry;
            else largest[i] = max(largest[i - 1], entry);
            values.push_back(entry);
        }
        while(values.size() != 0)
        {
            if (values.back() != largest[values.size() - 1]) waiting.push(values.back());
            else {
                waiting.push(values.back()), ans.push(waiting), waiting = carrier;
            }
            values.pop_back();
        }
        ans.push(waiting);
        while(ans.size() != 0)
        {
            carrier = ans.front();
            while(carrier.size() != 0) cout << carrier.top() << " ", carrier.pop();
            ans.pop();
        }
        cout << endl;
    }
}
