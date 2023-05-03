#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <climits>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, entry, sum = 0;
    vector <int> freq;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> entry, sum += entry, freq.push_back(sum);


    int mn = freq[k - 1], ind = 1;
    for (int i = k; i < n; i++)
    {
        if(freq[i] - freq[i - k] < mn)
        {
            mn = freq[i] - freq[i - k];
            ind = i - k + 2;
        }
    }
    cout << ind;

}


