#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque <long long> fq, sq;

    int n, m, a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a, fq.push_back(a), sq.push_back(i + 1);

    while (fq.size() != 1)
    {
       if (fq.front() > m) fq.push_back(fq.front() - m), sq.push_back(sq.front());
       fq.pop_front(), sq.pop_front();

    }
    cout << sq.front();
}
