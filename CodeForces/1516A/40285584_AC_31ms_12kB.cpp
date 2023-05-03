#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    while(test--)
    {
        int n, k, entry, ind = 0;
        cin >> n >> k;
        vector <int> nums;
        while(n--)
        {
            cin >> entry;
            nums.push_back(entry);
        }
        while ((k != 0 ) and (ind != nums.size() - 1))
        {
            if (k > nums[ind])
            {
                nums[nums.size() - 1] += nums[ind];
                k -= nums[ind];
                nums[ind] = 0;
                ind++;
            }
            else if (k == nums[ind])
            {
                nums[ind] = 0;
                nums[nums.size() - 1] += k;
                k = 0;
            }
            else
            {
                nums[ind] -= k;
                nums[nums.size() - 1] += k;
                break;
            }
        }
        for (auto i: nums)
            cout << i << " ";
        cout << endl;
    }
}

