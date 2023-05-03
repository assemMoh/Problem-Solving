#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    map<string, int> sys;
    string name;
    while(test--)
    {
        cin >> name;
        if(!sys.count(name)) sys[name] = 1, cout << "OK";
        else cout << name << sys[name], sys[name]++;
        cout << endl;
    }
}
