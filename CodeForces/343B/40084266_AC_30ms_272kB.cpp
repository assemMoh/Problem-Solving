#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    if (s.size() % 2 != 0) cout << "No";
    else
    {
        stack <char> prev;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1] and prev.size() == 0) {i++; continue;}
            else if(s[i] == s[i + 1] and prev.size() != 0) s[i + 1] = prev.top(), prev.pop();
            else if (s[i] != s[i + 1]) prev.push(s[i]);
        }
        if (prev.size() == 0) cout << "Yes";
        else cout << "No";
    }
}
