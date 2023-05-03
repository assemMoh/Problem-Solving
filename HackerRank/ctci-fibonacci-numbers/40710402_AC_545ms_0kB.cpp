#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int fib(int n)
{
    if (n <= 1) return n;

    return fib(n - 1) + fib(n - 2);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << fib(n);

}


