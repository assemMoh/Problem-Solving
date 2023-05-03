#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    deque<int> pos, neg, zero;
    for (int i = 0; i < n; i++)
    {
        int entry;
        cin >> entry;
        if (entry > 0) pos.push_back(entry);
        else if (entry < 0) neg.push_back(entry);
        else zero.push_back(entry);
    }
    if (pos.size() == 0)
    {
        pos.push_back(neg.front()), neg.pop_front();
        pos.push_back(neg.front()), neg.pop_front();
    }
    while (neg.size() != 1) zero.push_back(neg.front()), neg.pop_front();

    cout << neg.size() << " ";
    while (neg.size() != 0) cout << neg.front() << " ", neg.pop_front();

    cout << endl << pos.size() << " ";
    while (pos.size() != 0) cout << pos.front() << " ", pos.pop_front();

    cout << endl << zero.size() << " ";
    while (zero.size() != 0) cout << zero.front() << " ", zero.pop_front();


}
