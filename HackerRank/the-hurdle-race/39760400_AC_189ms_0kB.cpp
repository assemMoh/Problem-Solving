#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, height, hurdleHeight, doses = 0;
    cin >> n >> height;
    for (int i = 0; i < n; i++)
    {
        cin >> hurdleHeight;
        if ((hurdleHeight - height) > doses)
            doses = hurdleHeight - height;
    }
    cout << doses;
}

