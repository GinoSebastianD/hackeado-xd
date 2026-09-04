#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<char>> rotate90(const vector<vector<char>>& mat, int n) {
    vector<vector<char>> res(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[j][n - 1 - i] = mat[i][j];
        }
    }
    return res;
}

vector<vector<char>> reflectVertical(const vector<vector<char>>& mat, int n) {
    vector<vector<char>> res(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        res[i] = mat[n - 1 - i];
    }
    return res;
}

void solve(int n, int& indice) {
    vector<vector<char>> matriz(n, vector<char>(n));
    vector<vector<char>> matriz_resultado(n, vector<char>(n));

    for (int i = 0; i < n; i++) {
        string linea, linea2;
        cin >> linea >> linea2;
        for (int j = 0; j < n; j++) {
            matriz[i][j] = linea[j];
            matriz_resultado[i][j] = linea2[j];
        }
    }

    if (matriz == matriz_resultado) {
        cout << "Pattern " << indice++ << " was preserved.\n";
        return;
    }

    vector<vector<char>> r90 = rotate90(matriz, n);
    if (r90 == matriz_resultado) {
        cout << "Pattern " << indice++ << " was rotated 90 degrees.\n";
        return;
    }

    vector<vector<char>> r180 = rotate90(r90, n);
    if (r180 == matriz_resultado) {
        cout << "Pattern " << indice++ << " was rotated 180 degrees.\n";
        return;
    }

    vector<vector<char>> r270 = rotate90(r180, n);
    if (r270 == matriz_resultado) {
        cout << "Pattern " << indice++ << " was rotated 270 degrees.\n";
        return;
    }

    vector<vector<char>> ref = reflectVertical(matriz, n);
    if (ref == matriz_resultado) {
        cout << "Pattern " << indice++ << " was reflected vertically.\n";
        return;
    }

    vector<vector<char>> ref90 = rotate90(ref, n);
    if (ref90 == matriz_resultado) {
        cout << "Pattern " << indice++ << " was reflected vertically and rotated 90 degrees.\n";
        return;
    }

    vector<vector<char>> ref180 = rotate90(ref90, n);
    if (ref180 == matriz_resultado) {
        cout << "Pattern " << indice++ << " was reflected vertically and rotated 180 degrees.\n";
        return;
    }

    vector<vector<char>> ref270 = rotate90(ref180, n);
    if (ref270 == matriz_resultado) {
        cout << "Pattern " << indice++ << " was reflected vertically and rotated 270 degrees.\n";
        return;
    }

    cout << "Pattern " << indice++ << " was improperly transformed.\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int indice = 1;
    int n;
    while (cin >> n) {
        solve(n, indice);
    }

    return 0;
}
