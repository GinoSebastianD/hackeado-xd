#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
     

        string x = v[(n / 2) - 1];
        string y = v[n / 2];

        string ans = "A";
        int i = 0;
        while (i < x.size())
        {
            while (ans[i] <= 'Z' && ans < x)
                ans[i]++;
            if (ans[i] <= 'Z' && ans >= x && ans < y)
            {
                printf("%s\n", ans.c_str());
                break;
            }
            if (ans[i] != x[i])
                ans[i]--;
            i++;
            ans += "A";
        }
    }
}
