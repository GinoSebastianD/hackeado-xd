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
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
	
	sort(nums.begin(), nums.end());
    int medio = (nums.size()-1) / 2;
    ll minimo = 0;
    
    for (int i = 0 ; i< n; ++i)
    {
		ll dif = abs(nums[i] - nums[medio]);
		minimo += dif;
    }
    cout << minimo;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
