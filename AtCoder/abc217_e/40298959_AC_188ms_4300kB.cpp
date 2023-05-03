#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q, query, x;
    priority_queue <int , vector<int>, greater<int>> sorted;
    queue <int> original;
    cin >> Q;
    while (Q--)
    {
        cin >> query;

        if (query == 1) {

            cin >> x;
            original.push(x);

        } else if (query == 2) {

            if (!sorted.empty()) cout << sorted.top(), sorted.pop();
            else cout << original.front(), original.pop();
            cout << endl;

        } else {

            while (!original.empty())
                sorted.push(original.front()), original.pop();
        }
    }
}
