#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y, dan = 0;
    cin >> n;
    vector <vector<int>> axes;
    for (int i = 0; i <= n; i++)
    {
        cin >> x >> y;
        axes.push_back((vector<int>){x, y});
    }

    for (int i = 0; i < axes.size() - 2; i++)
    {
        if (   (axes[i][0] < axes[i+1][0] && axes[i+1][0] == axes[i+2][0] && axes[i][1] == axes[i + 1][1] && axes[i+1][1] < axes[i+2][1])
            or (axes[i][0] == axes[i+1][0] && axes[i+1][0] < axes[i+2][0] && axes[i][1] > axes[i + 1][1] && axes[i+1][1] == axes[i+2][1])
            or (axes[i][0] > axes[i+1][0] && axes[i+1][0] == axes[i+2][0] && axes[i][1] == axes[i + 1][1] && axes[i+1][1] > axes[i+2][1])
            or (axes[i][0] == axes[i+1][0] && axes[i+1][0] > axes[i+2][0] && axes[i][1] < axes[i + 1][1] && axes[i+1][1] == axes[i+2][1])
            ) dan++;
    }
    cout << dan;
}


