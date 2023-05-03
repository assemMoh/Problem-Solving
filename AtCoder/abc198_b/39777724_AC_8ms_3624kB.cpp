#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, lastZeroInd;
    cin >> n;
    string m = to_string(n);
    for (int i = m.size() - 1; i >=0 ; i--)
    {
        if (m[i] == '0') continue;
        else {lastZeroInd = i; break;}
    }
    bool palindrome = true;
    for (int i = 0; i <= lastZeroInd / 2; i++)
    {
        if (m[i] == m[lastZeroInd - i]) continue;
        else {palindrome = false; break;}
    }
    if (palindrome) cout << "Yes";
    else cout << "No";
}
