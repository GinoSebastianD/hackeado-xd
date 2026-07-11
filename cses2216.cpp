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
    vector<int> vec(n + 1);
	for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
		vec[x]=i;
    }
    int rondas = 1;
	for (int i = 1; i < n; i++)
    {
        if (vec[i+1] < vec[i])
        {
            rondas++;
        }
    }
    cout << rondas;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
