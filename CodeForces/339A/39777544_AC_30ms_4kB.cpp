#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string op;
    cin >> op;

    int ones = 0, twos = 0, threes = 0;
    for (int i = 0; i < op.size(); i++)
    {
        if (op[i] == '1') ones++;
        else if (op[i] == '2') twos++;
        else if (op[i] == '3') threes++;
    }
    for (int i = 0; i < ones; i++)
    {
        if (i == 0) cout << "1";
        else cout << "+1";
    }for (int i = 0; i < twos; i++)
    {
        if (i == 0 && ones == 0) cout << "2";
        else cout << "+2";
    }for (int i = 0; i < threes; i++)
    {
        if (i == 0 && ones == 0 && twos == 0) cout << "3";
        else cout << "+3";
    }
}
