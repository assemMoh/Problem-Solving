#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    if (s.size() == 2) cout << 0;
    else
    {
        set <char> unq;
        for (int i = 1; i < s.size(); i += 3)
            unq.insert(s[i]);
        cout << unq.size();
    }

}
