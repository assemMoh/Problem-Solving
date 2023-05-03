#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string carrier = s;
    sort(carrier.begin(), carrier.end());
    char large = carrier[carrier.size() - 1];
    int c = 1;
    for (int i = carrier.size() - 1; i >= 0; i--)
    {
        if (carrier[i] != carrier[i - 1]) break;
        c++;
    }

    string ans (c, large);
    cout << ans;
}
