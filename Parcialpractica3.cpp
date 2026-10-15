#include "iostream"
#include "vector"
using namespace std;


int main() {
	int N;

	vector<int> factoriales;

	for (int i = 1; i<=8; i++)
	{
		int fac = 1;
		for (int j = 1 ; j <= i; j++)
		{
			fac = fac * j;
		}

		factoriales.push_back(fac);
	}


	while (cin>>N)
	{
		int n = 0;

		for (int i = factoriales.size()-1; i >= 0 ; i--)
		{
			while (N >= factoriales[i])
			{
				N = N - factoriales[i];
				n++;
			}
		}
		cout << n << "\n";
	}

}
