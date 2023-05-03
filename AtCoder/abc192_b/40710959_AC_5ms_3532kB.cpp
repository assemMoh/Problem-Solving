#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

string s;

bool even(int i)
{
    if (!(i & 1)){
        if (i == 0) return (!(isupper(s[i])));
        return (!(isupper(s[i]))) and even(i - 2);
    }
    else return even(i - 1);
}

bool odd(int i)
{
    if (i & 1){
        if (i == 1) return (!(islower(s[i])));
        return (!(islower(s[i]))) and odd(i - 2);
    }
    else return odd(i - 1);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    bool readE = 1, readO = 1;
    readE = even(s.size() - 1);
    if (s.size() != 1) readO = odd(s.size() - 1);
    if (readE and readO) cout << "Yes";
    else cout << "No";

}


