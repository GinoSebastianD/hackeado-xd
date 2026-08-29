#include "iostream"
#include "vector"
#include "algorithm"
#include "string"

using namespace std;

int main() {
	string linea;


	vector<int> resultados;
	
	while (cin>>linea)
	{
		int cont = 0;
		for (int i = 0 ; i < linea.size(); ++i)
		{
			if (linea[i] == 'X')
			{
				resultados.push_back(cont);
				cont = 0;
				continue;
			}
			cont++;
		}
		resultados.push_back(cont);
		
		int maximo = 0;
		maximo = max(maximo, resultados[0] - 1);
		maximo = max(maximo, resultados[resultados.size() - 1] - 1);

		for (int i = 1; i < resultados.size() -1; i++)
		{
			maximo = max(maximo, (resultados[i] - 1) / 2);
		}
		cout << maximo << "\n";
		resultados.clear();
	}

}
