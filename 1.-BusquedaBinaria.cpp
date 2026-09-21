#include "iostream"
#include "set"

using namespace std;


int main() {
    int n;
    while (cin >> n && n != 0) {
        multiset<int> loteria;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            int j;
            cin >> j;
            for (int y = 0; y < j; y++) {
                int nums;
                cin >> nums;
                loteria.insert(nums);
            }

           
            auto mayor = --loteria.end();
            auto menor = loteria.begin();

            
            int resta = *mayor - *menor;
            total = total + resta;
            loteria.erase(mayor);
            loteria.erase(menor);


        }
        cout << total << "\n";
    }


}
