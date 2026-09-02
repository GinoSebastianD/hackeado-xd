#include "iostream"
#include "vector"
#include "string"

using namespace std;


bool escero(vector<vector<int>> matri) {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (matri[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;

}

void solve() {
	
	vector<vector<int>> matriz(3,vector<int>(3));

	for (int i = 0; i < 3; i++)
	{
		string linea;
		cin >> linea;

		for (int j = 0; j < 3; j++)
		{
			matriz[i][j] = linea[j] - '0';
		}
		
	}

	int cont = 0;
	vector<vector<int>> matriz_temp(3, vector<int>(3));

	bool es_cero = escero(matriz);

	while (!es_cero)
	{

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int suma = 0;
				//izquierda
				if (j - 1 >= 0)
				{
					suma = suma + matriz[i][j - 1];
				}
				//derecha
				if (j + 1 < 3)
				{
					suma = suma + matriz[i][j + 1];
				}
				//arriba
				if (i - 1 >= 0)
				{
					suma = suma + matriz[i - 1][j];
				}
				//abajo
				if (i + 1 < 3)
				{
					suma = suma + matriz[i + 1][j];
				}
				matriz_temp[i][j] = suma % 2;
				


			}
		}
		es_cero = escero(matriz_temp);
		matriz = matriz_temp;
		cont++;
	}

	cout << cont - 1 << endl;








}


int main() {
	int n;
	cin >> n;
	

	while (n--)
	{
		solve();
	}

}



