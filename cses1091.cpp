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
    ll m;
    cin >> n >> m;
 
    multiset<int> precio;
    vector<ll> precio_maximo(m);
 
    for (int i = 0; i < n; ++i)
    {
        int a = 0;
        cin >> a;
        precio.insert(a);
    }
 
    for (int i = 0; i < m; ++i)
    {
        cin >> precio_maximo[i];
    }
 
    for (int i = 0; i < m; ++i)
    {
        auto it = precio.upper_bound(precio_maximo[i]);
        if (it != precio.begin())
        {
            --it;
            cout << *it << "\n";
            precio.erase(it);
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
