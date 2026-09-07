
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
		vector<double> porcentajes(n_candidatos);
		for (int j = 0 ; j < n_candidatos ; j++)
		{
			cin >> porcentajes[j];
		}
		long long estadovotantes;
		cin >> estadovotantes;
		total_votantes = total_votantes + estadovotantes;
		for (int i = 0 ; i < n_candidatos ; i++)
		{
			long long val = (porcentajes[i] / 100 * estadovotantes) + 0.5;
			total[i] = total[i] + val;
		}

	}

	vector<pair<long long, int>> candidatos;
	for (int i = 1; i <= n_candidatos; i++ )
	{
		candidatos.push_back({ total[i-1],i });
	}

	sort(candidatos.begin(), candidatos.end(), [&](const pair<long long, int>& a, const  pair<long long, int>& b) {
		if (a.first != b.first)
		{
			return a.first > b.first;
		}
		return a.second < b.second;
	});
	
	if (candidatos[0].first * 1000 >= total_votantes * 501) {
		cout << candidatos[0].second << " " << candidatos[0].first << "\n";
	}
	else {
		cout << candidatos[0].second << " " << candidatos[0].first << "\n";
		cout << candidatos[1].second << " " << candidatos[1].first << "\n";
	}


}


int main() {
	int n;
	if (cin >> n) {
		for (int t = 0; t < n; t++) {
			if (t > 0) {
				cout << "\n";
			}
			solve();
		}
	}

	return 0;
}


