#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    deque <int> dq;
    bool rev = 0;
    for (int j = 0; j < test; j++)
    {
        string query;
        cin >> query;
        if (query == "reverse") rev = !rev;
        if (rev)
        {
            if (query == "back") query = "front";
            else if (query == "front") query = "back";
            else if (query == "push_back") query = "toFront";
            else if (query == "toFront") query = "push_back";
        }
        if(query == "back") if (dq.size() == 0) cout << "No job for Ada?" << endl; else {cout << dq.back() << endl,dq.pop_back();}
        else if(query == "front") if (dq.size() == 0) cout <<"No job for Ada?"<<endl;else{cout <<dq.front()<<endl,dq.pop_front();}
        else if(query == "push_back") {int e; cin >> e; dq.push_back(e);}
        else if(query == "toFront") {int e; cin >> e; dq.push_front(e);}

    }
}
