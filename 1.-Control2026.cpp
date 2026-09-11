#include "iostream"
#include "string"
#include "stack"
using namespace std;

int main(){
    int x;
    cin>>x;
    stack<string> pila;
    string orden;
    string nombre_persona;
    while(x--){
        cin>>orden ;
        if (orden == "Sleep"){
           cin >> nombre_persona;
           pila.push(nombre_persona);
        }
        else if(orden == "Kick"){
            if(pila.empty()){
                continue;
            }
            pila.pop();
        }
        else if(orden == "Test"){
            if(pila.empty()){
                cout<<"Not in a dream\n";
                continue;
            }
            cout<<pila.top()<<"\n";
        }

    }

    return 0;
}
