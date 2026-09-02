#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

void solve(int test) {

	string n, igual;
	int N_dimension;

	cin >> n >> igual >> N_dimension;

	vector<vector<long long>> matriz(N_dimension, vector<long long>(N_dimension));
	bool es_valida = true;
	for (int i = 0; i < N_dimension ; i++)
	{
		for (int j = 0; j < N_dimension; j++)
		{
			long long x;
			cin >> x;

			if (x < 0)
			{
				es_valida = false;
			}
			matriz[i][j] = x;
		}
	}
	if (!es_valida) {
		cout << "Test #" << test << ": Non-symmetric.\n";
		return;
	}
	for (int i = 0 ; i < N_dimension ; i++)
	{
		for (int j = 0; j < N_dimension ; j++)
		{
			if (matriz[i][j] != matriz[N_dimension-1-i][N_dimension - 1 - j])
			{
				cout << "Test #" << test << ": Non-symmetric.\n";
				return;
			}
		}
	}
	cout << "Test #" << test << ": Symmetric.\n";

	


}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	long long  n;
	cin >> n;
	int test = 1;
	while (n--)
	{
		solve(test);
		test++;
	}




}




