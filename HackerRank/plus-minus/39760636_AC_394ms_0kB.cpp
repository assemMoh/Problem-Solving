#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float n, psum = 0, nsum = 0, zsum = 0, entry;
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        cin >> entry;
        if (entry > 0) psum++;
        else if (entry < 0) nsum++;
        else zsum++;
    }
    float pRes = psum / n, nRes = nsum / n, zRes = zsum / n;
    cout << fixed << setprecision(6) << pRes << endl << nRes << endl << zRes;

}
