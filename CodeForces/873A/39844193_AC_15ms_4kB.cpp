#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int chores, choresN, unitTime, time = 0, entry;
    cin >> chores >> choresN >> unitTime;
    for (int i = 0; i < chores; i++)
    {
        cin >> entry;
        if (i < chores - choresN)
            time += entry;
    }
    time += (choresN * unitTime);
    cout << time;

}
