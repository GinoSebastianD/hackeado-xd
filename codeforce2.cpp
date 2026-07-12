//https://codeforces.com/contest/1388/problem/A

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
    vector<int> vec(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> vec[i];

        if (vec[i] <= 30)
        {
            cout << "NO\n";
        }
        else if (vec[i] >= 31)
        {
            cout << "YES\n";
            if (vec[i] - 30 == 6 || vec[i] - 30 == 10 || vec[i] - 30 == 14) {
                cout << "6 10 15 " << vec[i] - 31 << "\n";
            }
            else {

                cout << "6 10 14 " << vec[i] - 30 << "\n";
            }
        }
    }
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
