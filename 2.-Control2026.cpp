#include "iostream"
#include "string"
#include "stack"
#include "vector"
#include "algorithm"
using namespace std;

void solve(int indice){
    int N;
    cin>>N;
    vector<vector<int>> vec(N, vector<int>(N));
    for(int i = 0 ; i < N ; i++){
        string linea;
        cin>>linea;
        for(int j = 0; j < N; j++){

            vec[i][j] = linea[j] - '0';
        }
    }
    int M;
    cin>>M;
    while(M--){
        string orden;
        cin >> orden;
        if(orden == "row"){
            int a, b;
            cin >> a >> b;
            swap(vec[a-1],vec[b-1]);

            continue;
        }
        else if(orden == "col"){
            int a , b;
            cin >> a >> b;
            for(int i = 0; i < N; i++){
                swap(vec[i][a-1], vec[i][b-1]);
            }
            continue;
        }
        else if(orden == "inc"){
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N ; j++){
                    if(vec[i][j] == 9){
                        int num = vec[i][j] + 1;
                        vec[i][j] = num % 10;
                        continue;
                    }
                    vec[i][j]++;
                }
            }

            continue;
        }
        else if(orden == "dec"){
            for(int i =0 ; i < N; i++){
                for(int j = 0 ; j < N; j++){
                    if (vec[i][j] == 0) {
                        vec[i][j] = 9;
                    } else {
                        vec[i][j]--;
                    }
                }
            }
            continue;
        }
        else if(orden == "transpose"){
            for(int i = 0; i < N ; i++){
                for(int j = i+1; j < N; j++){
                    swap(vec[i][j], vec[j][i]);
                }
            }
            continue;
        }

    }
    cout<<"Case #"<<indice<<"\n";
    for(vector<int> it: vec){
        for(auto xd: it){
            cout << xd;
        }
        cout<<"\n";
    }
    cout<<"\n";

}


int main(){
    int t;
    cin>>t;
    int i = 1;
    while(t--){

        solve(i);
        i++;
    }

    return 0;
}
