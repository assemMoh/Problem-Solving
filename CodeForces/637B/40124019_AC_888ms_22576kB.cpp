#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    stack<string> all;
    set<string> check;
    string name;
    while(test--)
    {
        cin >> name;
        all.push(name);
        check.insert(name);
    }
    while(all.size())
    {
        if(check.count(all.top()) != 0)
            cout << all.top() << endl, check.erase(all.top());
        all.pop();
    }

}
