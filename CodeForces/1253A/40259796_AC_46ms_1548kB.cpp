#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test, n, entry;
    cin >> test;
    while (test--)
    {
        cin >> n;
        vector <int> a, b;
        for (int i = 0; i < n; i++) {cin >> entry; a.push_back(entry);}
        for (int i = 0; i < n; i++) {cin >> entry; b.push_back(entry);}

        int check = 0, boolean = 1, diff = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] and check == 1) check = 2;
            else if (a[i] > b[i] or (a[i] < b[i] and check == 2)) {boolean = 0; break;}
            else if (a[i] < b[i])
            {
                if (check == 0) check = 1, diff = b[i] - a[i];
                else if (b[i] - a[i] != diff) {boolean = 0; break;}
            }
        }
        if (boolean) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

}
