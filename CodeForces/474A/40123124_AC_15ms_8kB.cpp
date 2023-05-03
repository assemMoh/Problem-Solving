#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";
    map <char, char> key1, key2, key3;
    char direction; string word;
    cin >> direction >> word;
    if (direction == 'R')
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if(i == 0) key1[s1[i]] = s1[i], key2[s2[i]] = s2[i], key3[s3[i]] = s3[i];
            else key1[s1[i]] = s1[i-1], key2[s2[i]] = s2[i-1], key3[s3[i]] = s3[i-1];
        }
    }
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if(i == s1.size() - 1) key1[s1[i]] = s1[i], key2[s2[i]] = s2[i], key3[s3[i]] = s3[i];
            else key1[s1[i]] = s1[i+1], key2[s2[i]] = s2[i+1], key3[s3[i]] = s3[i+1];
        }
    }

    for (int i = 0; i < word.size(); i++)
        if (key1.count(word[i]) != 0) cout << key1[word[i]];
        else if (key2.count(word[i]) != 0) cout << key2[word[i]];
        else cout << key3[word[i]];
}
