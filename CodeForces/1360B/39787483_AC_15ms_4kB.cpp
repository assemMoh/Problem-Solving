#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int values[n];
        for (int i = 0; i < n; i++)
            cin >> values[i];

        sort(values, values + n);
        int diff = 2000;
        for (int i = 0; i < n - 1; i++)
        {
            if (values[i + 1] - values[i] < diff) diff = values[i + 1] - values[i];
        }
        cout << diff << endl;
    }


    /**float test;
    double entry, sum = 0;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> entry;
        sum += entry;
    }
    double target;
    cin >> target;
    if (ceil(((target/sum) * test)) > ((target/sum) * test))
        cout << ceil(((target/sum) * test));
    else cout << ceil(((target/sum) * test)) + 1;**/
}
