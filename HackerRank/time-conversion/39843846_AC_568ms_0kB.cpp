#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string time;
    cin >> time;
    string hours = time.substr(0, 2);
    int hour;
    hour = stoi(hours);
    if (time[time.size() - 2] == 'P' && hour != 12)
        { hour += 12; hours = to_string(hour); }
    else if (time[time.size() - 2] == 'A' && hour == 12)
        hours = "00";
    else if (time[time.size() - 2] == 'A' && hour < 10)
        hours = "0" + to_string(hour);

    time.replace(0, 2, hours);


    time.erase(time.size() - 2, 2);
    cout << time;
}
