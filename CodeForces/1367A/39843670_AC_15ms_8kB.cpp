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
        string st;
        cin >> st;
        for (int k = 2; k < st.size(); k+=2)
        {
            st.erase(k, 1);
            k--;
        }
        cout << st << endl;
    }
}
