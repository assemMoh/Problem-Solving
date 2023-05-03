#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int dices;
    cin >> dices;
    int top, sideA, sideB;
    bool posibile = true;
    cin >> top;
    for (int i = 0; i < dices; i++)
    {
        cin >> sideA >> sideB;
        if (((top == 1 || top == 6) && (sideA == 1 || sideA == 6 || sideB == 1 || sideB == 6)) ||
            ((top == 2 || top == 5) && (sideA == 2 || sideA == 5 || sideB == 2 || sideB == 5)) ||
            ((top == 3 || top == 4) && (sideA == 3 || sideA == 4 || sideB == 3 || sideB == 4))) posibile = false;
    }
    if (posibile) cout << "YES";
    else cout << "NO";


    /**float test;
    double entry, sum = 0;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> entry;
        sum += entry;
    }
    double target;
    cin >> target;
    if (ceil(((target/sum) * test)) > ((target/sum) * test))
        cout << ceil(((target/sum) * test));
    else cout << ceil(((target/sum) * test)) + 1;**/
}
