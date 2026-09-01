#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;


bool esigual(vector<vector<int>>matriz1, vector<vector<int>>matriz2) {
	for (int i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 2 ; j++)
		{
			if (matriz1[i][j] != matriz2[i][j])
			{
				return false;
			}
		}
	}
	return true;

}

vector<vector<int>> rotacion90(vector<vector<int>>& vec) {

	for (int i = 0 ; i < 2 ; i++)
	{
		for (int j = i + 1; j < 2 ; j++)
		{
			swap(vec[i][j], vec[j][i]);
		}
	}

	for (int i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 1 ; j++)
		{
			swap(vec[i][j] , vec[i][2-1-j]);
		}
	}
	return vec;
}

void solve(int caso) {

	vector<vector<int>> matriz(2,vector<int>(2));
	vector<vector<int>> fei(2, vector<int>(2));

	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			cin >> fei[i][j];
		}
	}


	vector<vector<int>> nueva_matriz = fei;
	int vueltas = 0;
	for (int i = 0 ; i < 4 ; i++)
	{
		
		bool esta_igual = esigual(matriz, nueva_matriz);
		if (esta_igual)
		{
			cout << "Case #" << caso << ": POSSIBLE\n";
			break;
		}
		if (vueltas == 3)
		{
			cout << "Case #" << caso << ": IMPOSSIBLE\n";
			break;
		}

		nueva_matriz = rotacion90(fei);
		vueltas++;
	}








	/*cout << endl;
	for (auto it : matriz)
	{
		for (auto x: it)
		{
			cout << x << " ";
		}
		cout << "\n";
	}
	cout << endl;
	for (auto it : fei)
	{
		for (auto x : it)
		{
			cout << x << " ";
		}
		cout << "\n";
	}*/

}



int main() {
	
	int n;
	cin >> n;
	int caso = 1;
	while ( n > 0)
	{
		
		solve(caso);
		caso++;
		n--;
	}
}
