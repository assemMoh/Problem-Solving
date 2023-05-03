#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (isalpha(s[i]) == 2) s[i] -= 32;

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1]) {s.erase(i, 1); i--;}

    if (s.size() == 26) cout << "YES";
    else cout << "NO";

}
