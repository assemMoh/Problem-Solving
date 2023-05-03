#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    set <char> unq;
    for (int i = 0; i < s.size(); i++)
        unq.insert(s[i]);
    if (unq.size() & 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}
