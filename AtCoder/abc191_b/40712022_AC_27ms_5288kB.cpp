#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

vector <int> l;
int target, n;

void del (int i)
{
    if (i == -1) return;

    if (l[i] == target) del(i - 1);
    else del(i - 1), cout << l[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int entry;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> entry;
        l.push_back(entry);
    }
    del(n - 1);
}


