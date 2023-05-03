#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int p1[n], p2[n], c1 = -1, c2 = -1, sum = 1;
    for (int i = 0; i < n; i++) {cin >> p1[i]; sum *= (i+1);}
    for (int i = 0; i < n; i++) cin >> p2[i];
    
    do{
        c1++;
    }while (next_permutation(p1, p1 + n));
    do{
        c2++;
    }while (next_permutation(p2, p2 + n));

    cout << abs((sum - c1)-(sum - c2));
}
