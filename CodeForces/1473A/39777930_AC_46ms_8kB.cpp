#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    while (test--)
    {
        int elements, target, small1 = 1000, small1Ind = -1, small2 = 1000, largest = 0;
        cin >> elements >> target;
        int entry[elements];
        for (int i = 0; i < elements; i++)
        {
            cin >> entry[i];
            if (entry[i] < small1) {small1 = entry[i]; small1Ind = i;}
            if (entry[i] > largest) largest = entry[i];
        }
        for (int i = 0; i < elements; i++)
        {
            if (entry[i] < small2 && i != small1Ind) small2 = entry[i];
        }
        if (largest <= target || (small1 + small2) <= target) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
