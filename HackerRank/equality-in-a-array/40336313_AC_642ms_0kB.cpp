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

    int n, s, entry;
    cin >> n;
    s = n;
    unordered_map <int, int> freq;
    unordered_map <int, int> ::iterator itFreq;
    while (n--)
        cin >> entry, freq[entry]++;

    int mx = INT_MIN;
    itFreq = freq.begin();

    while(itFreq != freq.end())
    {
        mx = max(mx, itFreq->second);
        itFreq++;
    }
    cout << s - mx;
}
