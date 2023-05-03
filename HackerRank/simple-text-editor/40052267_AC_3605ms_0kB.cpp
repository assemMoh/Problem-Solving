#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    stack <string> word; word.push("");
    int test; cin >> test;

    for (int i = 0; i < test; i++)
    {
        s = word.top();
        int q;
        cin >> q;

        if (q == 1){
            string n; cin >> n;
            s += n;
            word.push(s);
        }else if (q == 2){
            int ind; cin >> ind;
            s.erase(s.size() - ind, ind);
            word.push(s);

        }else if (q == 3){
            int ind; cin >> ind;
            cout << s[ind - 1] << endl;
        }
        else word.pop();
    }
}
