#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int test;
    cin >> test;
    while(test--)
    {
        string a, b;
        cin >> a >> b;
        set <char> unq;
        bool flag = 0;
        for (auto i: a)
            unq.insert(i);
        for (auto i: b)
            if (unq.count(i) >= 1) {flag = 1; break;}

        if (flag) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

}
