
#include "iostream"
#include "vector"
#include "algorithm"
#include "cmath"
#include "limits"

using namespace std;

int main() {
	int N;
	while (cin >> N)
	{
		vector<int>libros(N);
		for (int i = 0; i < N; i++)
		{
			cin >> libros[i];
		}
		int M;
		cin >> M;

		sort(libros.begin(), libros.end());

		int mejorI = libros[0];
		int mejorJ = libros[N-1];
		int menordiferencia = numeric_limits<int>::max();

		for (int i = 0 ; i< N; i++)
		{
			int complemento = M - libros[i];

			auto it = lower_bound(libros.begin() + i + 1, libros.end(), complemento);

			if (it != libros.end() && *it == complemento)
			{
				int diff = abs(*it - libros[i]);
				if (diff < menordiferencia)
				{
					menordiferencia = diff;
					mejorI = libros[i];
					mejorJ = *it;
				}

			}
		}
		cout << "Peter should buy books whose prices are " << mejorI << " and " << mejorJ << ".\n\n";
	}


}
