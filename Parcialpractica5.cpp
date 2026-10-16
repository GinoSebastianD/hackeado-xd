

//C - The Bus Driver Problem 
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
	int n, d, r;

	while (cin>> n >> d >> r && (n!= 0 || d!= 0 || r != 0))
	{
		vector<int> manana(n);
		vector<int> tarde(n);

		for (int i = 0; i < n; i++)
		{
			cin >> manana[i];
		}
		for (int j = 0; j < n; j++)
		{
			cin >> tarde[j];
		}

		sort(manana.begin(), manana.end());
		sort(tarde.begin(), tarde.end(), greater<int>());

		long long total_exceso = 0;

		for (int i = 0 ; i < n; i++)
		{
			int total = manana[i] + tarde[i];
			if (total > d)
			{
				total_exceso = total_exceso + (total - d);
			}
		}

		cout << total_exceso * r << "\n";

	}

}
