#include "iostream"
#include "vector"
#include "stack"
#include "string"

using namespace std;

int main() {
    int n;
    cin >> n >> ws;
  

    while (n--) {
        string result = "";
        stack<char> pila;
        string letra;

        while (getline(cin, letra) && !letra.empty()) {
            

            if (letra[0] >= '0' && letra[0] <= '9') {
                result = result + letra[0];
            }
            else if (letra[0] == '(') {
                pila.push(letra[0]);
            }
            else if (letra[0] == '*' || letra[0] == '/') {
                while (!pila.empty() && (pila.top() == '*' || pila.top() == '/')) {
                    result = result + pila.top();
                    pila.pop();
                }
                pila.push(letra[0]);
            }
            else if (letra[0] == '+' || letra[0] == '-') {
                while (!pila.empty() && pila.top() != '(') {
                    result = result + pila.top();
                    pila.pop();
                }
                pila.push(letra[0]);
            }
            else if (letra[0] == ')') {
                while (!pila.empty() && pila.top() != '(') {
                    result = result + pila.top();
                    pila.pop();
                }
                if (!pila.empty()) pila.pop();
            }
        }

        while (!pila.empty()) {
            result += pila.top();
            pila.pop();
        }

        cout << result << "\n";
        if (n != 0) cout << "\n"; 
    }

    return 0;
}
