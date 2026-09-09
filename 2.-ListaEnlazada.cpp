#include "vector"
#include "iostream"
#include "deque"
#include "algorithm"
#include "map"
#include "queue"
#include "unordered_map"
using namespace std;

int main() {
	int n;
	int scenario = 1;
	while (cin >> n && n !=0)
	{
		map<int, int> mapa;
		for (int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			for (int k = 0; k < j; k++)
			{
				int l;
				cin >> l;
				mapa[l] = i + 1;
			}
		}
		cout << "Scenario #" << scenario++ << "\n";

		vector<queue<int>> equipos(n + 1);
		queue<int> cola;
		string proceso;
		while (cin >> proceso && proceso != "STOP")
		{
			if (proceso == "ENQUEUE")
			{
				int x;
				cin >> x;
				int indice = mapa[x];

				if (equipos[indice].empty())
				{
					cola.push(indice);
				}
				equipos[indice].push(x);
			}
			else
			{
				int indice = cola.front();
				int toRemove = equipos[indice].front();
				equipos[indice].pop();
				cout << toRemove << "\n";
				if (equipos[indice].empty())
				{
					cola.pop();
				}
			}
		}
		cout << "\n";
	}
}
