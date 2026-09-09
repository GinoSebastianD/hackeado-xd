#include "vector"
#include "iostream"
#include "queue"
#include "list"
#include "algorithm"
#include "map"
#include "unordered_map"

using namespace std;



int main() {
	
	int n; 
	int scenario = 1;
	while (cin>>n)
	{
		map<int, vector<int>> mapa;
		for (int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			for (int k = 0; k < j; k++)
			{
				int l;
				cin >> l;
				mapa[i+1].push_back(l);
			}
		}
		cout<<"Scenario #" << scenario++ << "\n";
		queue<int> cola_auxiliar;   
		unordered_map<int, queue<int>> colas;
		string palabra;
		while (palabra != "STOP")
		{
			string proceso;
			cin >> proceso;
			int equipo_actual = -1;
			if (proceso =="ENQUEUE")
			{
				int num;
				cin >> num;
				for (auto it : mapa)
				{
					int indice = it.first;
					vector<int> integrantes = it.second;
					if (find(integrantes.begin(), integrantes.end(), num) != integrantes.end()) {
						equipo_actual = indice;
						break;
					}
				}
				if (colas[equipo_actual].empty())
				{
					cola_auxiliar.push(equipo_actual);
				}
				colas[equipo_actual].push(num);
			}
			else if (proceso == "DEQUEUE")
			{
				
				int equipo_atendido = cola_auxiliar.front();

				int elemento = colas[equipo_atendido].front();
				colas[equipo_atendido].pop();
				cout << elemento << "\n";

				if (colas[equipo_atendido].empty()) {
					cola_auxiliar.pop();
				}
			}
		}
		cout << "\n";

	}


}
