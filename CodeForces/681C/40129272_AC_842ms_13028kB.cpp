#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int records;
    priority_queue <long long,vector<long long>, greater<long long>> values;
    queue <pair<string, long long>> ans;
    string query;
    long long entry;
    cin >> records;
    while(records--)
    {
        cin >> query;
        if (query == "insert")
        {
            cin >> entry;
            values.push(entry);
            ans.push(make_pair(query, entry));
        }
        else if (query == "removeMin")
            {if(values.size() == 0)
                ans.push(make_pair("insert", 1)), values.push(1);
            values.pop(); ans.push(make_pair(query, 0));}
        else if(query == "getMin")
        {
            cin >> entry;
            if(values.size() == 0)
            {
                ans.push(make_pair("insert", entry)), values.push(entry);
            }
            else if (entry > values.top())
            {
                while(values.size())
                {
                    values.pop(), ans.push(make_pair("removeMin", 0));
                    if(entry <= values.top()) break;
                }
            }
            if (entry < values.top() or !values.size())
               ans.push(make_pair("insert", entry)), values.push(entry);

            ans.push(make_pair(query, entry));
        }
    }
    cout << ans.size() << endl;
    while(ans.size())
    {
        cout << ans.front().first;
        if(ans.front().first != "removeMin") cout << " " << ans.front().second;
        cout << endl;
        ans.pop();
    }
}
