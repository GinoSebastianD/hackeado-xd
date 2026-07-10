#include <iostream>
#include <set>
#include <map>
#include <string>
#include "vector"
#include "algorithm"
using namespace std;
 
typedef long long ll;
#define int ll
 
struct horario
{
    ll inicio;
    ll fin;
};
 
void solve() {
    ll n;
    cin >> n;
    vector<horario> horarios_cine(n);
 
    for (int i = 0 ; i < n ; ++i)
    {
        cin >> horarios_cine[i].inicio >> horarios_cine[i].fin;
    }
    sort(horarios_cine.begin(), horarios_cine.end(), [](const horario a, const horario b) {
        return a.fin < b.fin;
        });
 
    ll hora_actual = 0;
    ll max = 0;
    for (int i = 0; i<n; ++i)
    {
        if (horarios_cine[i].inicio >= hora_actual) 
        {
            hora_actual = horarios_cine[i].fin;
            max++;
        }
    }
    cout << max << "\n";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}
