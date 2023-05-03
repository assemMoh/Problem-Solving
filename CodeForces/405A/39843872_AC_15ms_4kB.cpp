#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s;
    cin >> s;
    int cubes[s];
    for (int i = 0; i < s; i++)
        cin >> cubes[i];
    sort(cubes, cubes + s);
    for (int i = 0; i < s; i++)
        cout << cubes[i] << " ";
}
