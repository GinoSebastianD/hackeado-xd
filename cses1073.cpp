#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0 ; i<n ; ++i)
    {
        cin >> nums[i];
    }
    vector<int> torres;
    
    
    for (int r  = 0 ; r < n; ++r)
    {
        int num = nums[r];
        auto it = upper_bound(torres.begin() , torres.end(), num);

        if (it == torres.end())
        {
            torres.push_back(num);
        }
        else
        {
            *it = num;

        }


    }
    cout << torres.size();
    return 0;
}
