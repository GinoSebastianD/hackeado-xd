

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
    ll q;
    cin >> n;
    int idx = 0;
    vector<int> precios(n);
    for (int i =0; i < n;++i)
    {
        cin >> precios[i];
    }
    cin >> q;
    vector<int> cantidad(q);
    for (int i =0 ; i< q ; ++i)
    {
        cin >> cantidad[i];
    }
    sort(precios.begin(), precios.end());
    for (int i = 0 ; i<q; ++i)
    {
        auto it = upper_bound(precios.begin(), precios.end(),cantidad[i]);
        idx = it - precios.begin();
        cout << idx << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
