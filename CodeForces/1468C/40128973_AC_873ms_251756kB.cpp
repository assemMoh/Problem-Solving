#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q, carryCus, query, price, carryK, cusCount = 1;
    map <int, queue<int>> pricelist;
    map <int, queue<int>>::iterator iprice;

    map <int, int> custlist;
    map <int, int>::iterator icus;

    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> query;
        if (query == 1)
        {
            cin >> price;
            pricelist[price].push(cusCount);
            custlist[cusCount] = price;
            cusCount++;
        }
        else if (query == 2)
        {
            icus = custlist.begin();
            cout << icus->first << " ";
            int currentPrice = icus->second;
            pricelist[currentPrice].pop();
            if(pricelist[currentPrice].size() == 0) pricelist.erase(currentPrice);
            custlist.erase(icus);
        }
        else if (query == 3)
        {
            iprice = pricelist.end();
            iprice--;
            int currentCust = (iprice->second).front();
            cout << currentCust << " ";
            custlist.erase(currentCust);
            (iprice->second).pop();
            if((iprice->second).size() == 0) pricelist.erase(iprice);
        }
    }
}
