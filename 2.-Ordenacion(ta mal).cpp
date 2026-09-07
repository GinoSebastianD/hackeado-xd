#include "iostream"
#include "vector"
#include "algorithm"
#include "queue"

using namespace std;


void solve() {
	long long n_candidatos;
	long long n_estados;
	cin >> n_candidatos >> n_estados;

	vector<long long> total(n_candidatos,0);

	long long total_votantes = 0;
	for (int i = 0 ; i<n_estados; i++)
	{
		vector<float> porcentajes(n_candidatos);
		for (int j = 0 ; j < n_candidatos ; j++)
		{
			cin >> porcentajes[j];
		}
		long long estadovotantes;
		cin >> estadovotantes;

		total_votantes = total_votantes + estadovotantes;
		for (int i = 0 ; i < n_candidatos ; i++)
		{

			long long val = (porcentajes[i] / 100 * estadovotantes);
			
			total[i] = total[i] + val;
		}

	}
	auto it = max_element(total.begin(), total.end());
	int indice = it - total.begin() +1;
	priority_queue<int> totales(total.begin(), total.end());
	int condicion = total_votantes / 2;
	int primero = totales.top();
	totales.pop();
	

	if (primero > condicion)
	{
		cout << indice  <<" "<< primero<<"\n";
	}
	else if (primero == totales.top())
	{
			vector<int> empatados;
		for (int i = 0; i < n_candidatos; i++)
			if (total[i] == primero) empatados.push_back(i);

		sort(empatados.begin(), empatados.end());

		cout << (empatados[0] + 1) << " " << primero << "\n";
		cout << (empatados[1] + 1) << " " << primero << "\n";
	}
	else
	{
		int segundo = totales.top();
		cout << indice << " " << primero << "\n";
		cout << indice - 1 << " " << segundo << "\n";
	}


}


int main() {
	int n;
	cin >> n;
	
	while (n--)
	{
		solve();
		
	}

	return 0;
}




