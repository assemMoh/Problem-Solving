#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c = 0;
    cin >> n;
    string stones;
    cin >> stones;
    for (int i = 0; i < stones.size() - 1; i++)
    {
        if (stones[i] == stones[i + 1]) c++;
    }
    cout << c;
}
