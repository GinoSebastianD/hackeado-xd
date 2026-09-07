#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        vector<string> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
     

        string x = vec[(n / 2) - 1];
        string y = vec[n / 2];

        string rpt = "A";
        int i = 0;
        while (i < x.size())
        {
            while (rpt[i] <= 'Z' && rpt < x)
                rpt[i]++;
            if (rpt[i] <= 'Z' && rpt >= x && rpt < y)
            {
                cout << rpt.c_str()<<"\n";
                break;
            }
            if (rpt[i] != x[i])
                rpt[i]--;
            i++;
            rpt += "A";
        }
    }
}


