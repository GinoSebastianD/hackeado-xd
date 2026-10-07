
#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;

void solve(int n, int j,int i){
    
    vector<int> marbles(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << i++ << ":\n";

        for (int i = 0; i < j; ++i) {
            int query;
            cin >> query;

           
            auto it = lower_bound(marbles.begin(), marbles.end(), query);

            if (it != marbles.end() && *it == query) {
                int pos = (it - marbles.begin()) + 1;
                cout << query << " found at " << pos << "\n";
            } else {
                cout << query << " not found\n";
            }
        }
    
}





int main()
{
    int n , j;
    int i = 1;
    while(cin>> n >>j  && n !=0 && j != 0){
        
        solve(n,j ,i);
        i++;
    }
    
}
