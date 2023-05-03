#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;
    queue <long long> fq;

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;

        if (type == 1){
            long long n; cin >> n;
            fq.push(n);

        }else if (type == 2 and fq.size() != 0){
            fq.pop();

        }else if (type == 3 and fq.size() != 0){
            cout << fq.front() << endl;
        }
    }
}
