#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, rotations, entry;
    cin >> n >> rotations;
    deque<int> dq;
    for (int i = 0; i < n; i++)
        cin >> entry, dq.push_back(entry);
        
    for (int i = 0; i < rotations; i++)
        dq.push_back(dq.front()), dq.pop_front();
        
    for (int i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";

}
