#include <iostream>
#include <set>
#include <map>
#include <string>
#include "vector"
#include "algorithm"
using namespace std;

typedef long long ll;
#define int ll



void solve() {
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    long long actual_sum = nums[0];
    long long suma_maxima = nums[0];
    for (int i = 1; i < n; ++i)
    {
        actual_sum = max(nums[i], actual_sum + nums[i]);        
        suma_maxima = max(actual_sum, suma_maxima);

    }
    cout << suma_maxima;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
