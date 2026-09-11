#include "iostream"
#include "string"
#include "stack"
#include "vector"
#include "algorithm"
using namespace std;




int main(){

    int t;
    while(cin>>t && t != 0){
        vector<int> vec(t);
        for(int i = 0; i < t; i++){
            int num;
            cin>>num;
            vec[i] = num;
        }
        sort(vec.begin(),vec.end());
        for (int i = 0; i < t; i++) {
            if (i > 0) cout << " ";
            cout << vec[i];
        }
        cout << "\n";
    }


    return 0;
}
