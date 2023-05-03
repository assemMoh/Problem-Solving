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

    int q, t, v;
    map <int, int> apperance_freq;
    map <int, int> number_freq;
    cin >> q;
    while (q--)
    {
        cin >> t >> v;
        if (t == 1)
        {
            if (number_freq.find(v) != number_freq.end())
            {
                apperance_freq[ number_freq[v] ]--;
                if (apperance_freq[ number_freq[v] ] == 0) apperance_freq.erase(number_freq[v]);
                number_freq[v]++;
            }
            else
            {
                number_freq[v] = 1;
            }
            apperance_freq[ number_freq[v] ]++;

        }
        else if (t == 2)
        {
            if (number_freq.find(v) != number_freq.end())
            {
                apperance_freq[ number_freq[v] ]--;
                if (apperance_freq[ number_freq[v] ] == 0) apperance_freq.erase(number_freq[v]);
                number_freq[v]--;
                if (number_freq[v] == 0) number_freq.erase(v);
                else apperance_freq[ number_freq[v] ]++;
            }

        }
        else
        {
            if ((apperance_freq.find(v) != apperance_freq.end()) and apperance_freq[v] >= 1) cout << 1;
            else cout << 0;
            cout << endl;
        }
    }
}


