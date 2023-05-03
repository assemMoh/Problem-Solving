#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int first, last, rev, beautiful = 0;
    long long div;
    cin >> first >> last >> div;
    for (int i = first; i <= last; i++)
    {
        string temp = to_string(i);
        reverse(temp.begin(), temp.end());
        rev = stoi(temp);
        if ((i - rev) % div == 0) beautiful++;
    }
    cout << beautiful;
}
