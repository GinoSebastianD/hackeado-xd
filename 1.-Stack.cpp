#include "iostream"
#include "vector"
#include "stack"
#include "string"

using namespace std;
int main() {
    string palabra;
    int caso = 1;
    while (cin >> palabra && palabra != "end") {
        vector<char> tops;
        for (int i = 0; i < palabra.size(); i++) {
            if (i == 0) {
                tops.push_back(palabra[i]);
                continue;
            }
            bool agrego = true;
            for (int j = 0; j < tops.size(); j++) {
                if (tops[j] >= palabra[i])
                {
                    tops[j] = palabra[i];
                    agrego = false;
                    break;
                }
            }
            if (agrego)
            {
                tops.push_back(palabra[i]);
            }


        }
        cout << "Case " << caso++ << ": " << tops.size() << "\n";     
    }
    return 0;
}
