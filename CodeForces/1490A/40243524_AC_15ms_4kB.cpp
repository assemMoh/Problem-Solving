#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test, n, entry, c, num1, num2;
    cin >> test;
    while (test--)
    {
        float mn, mx, div, target = 2.0;
        c = 0;
        cin >> n >> num1;
        n--;
        mn = mx = num1;
        while (n--)
        {
            cin >> num2;
            mn = min(num1, num2);
            mx = max(num1, num2);
            div = mx / mn;
            while (div > target)
            {
                c++;
                mn *= 2;
                div = mx / mn;
            }
            num1 = num2;
        }
        cout << c << endl;
    }
}
