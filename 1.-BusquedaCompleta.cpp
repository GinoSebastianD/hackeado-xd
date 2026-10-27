#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;











void solve(int casos) {
	vector<int> vec(10, 0);
	int total = 0;
	for (int i = 0 ; i < 10 ; i++)
	{
		cin >> vec[i];
		total = total + vec[i];
	}
	int a3 = total / 4 - vec[0] - vec[9];
	int a1 = vec[1] - a3;
	int a2 = vec[0] - a1;
	int a5 = vec[8] - a3;
	int a4 = vec[9] - a5;

	cout << "Case " << casos << ": " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << "\n";


}


int main() {
	int i = 1;
	int casos;
	cin >> casos;
	while (casos--)
	{
		solve(i);
		i++;


	}

}


