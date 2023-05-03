#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string s;
        cin >> s;
        stack<char> ch;
        ch.push(s[0]);
        char stackTop = ch.top();
        for (int k = 1; k < s.size(); k++)
        {
            char brack = s[k];
            if (brack == '[' or brack == '{' or brack == '(')
                ch.push(brack), stackTop = brack;
            else if (brack == ']' and stackTop == '[' or brack == '}' and stackTop == '{' or brack == ')' and stackTop == '(')
            {   ch.pop();
                if (ch.size() != 0) stackTop = ch.top();
                else stackTop = '*';
            }
            else {ch.push('*'); break;}
        }
        if (ch.size() == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
