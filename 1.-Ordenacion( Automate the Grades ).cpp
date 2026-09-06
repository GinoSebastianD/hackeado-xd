#include "iostream"
#include "vector"
#include "algorithm"
#include "queue"

using namespace std;



void solve(int indice) {
	
	int term1;
	int term2;
	int final;
	int Attendance;
	int test1;
	int test2;
	int test3;
	priority_queue<int> mayores;
	cin >> term1 >> term2 >> final >> Attendance >> test1 >> test2 >> test3;
	mayores.push(test1);
	mayores.push(test2);
	mayores.push(test3);
	int mayor1 = mayores.top();
	mayores.pop();
	int mayor2 = mayores.top();
	mayores.pop();
	int promedio = (mayor1 + mayor2) / 2;

	int suma = term1 + term2 + final + Attendance +  promedio;

	if (suma >=90)
	{
		cout << "Case " << indice << ": A\n";
	}
	else if ( suma >=80  && suma<90)
	{
		cout << "Case " << indice << ": B\n";

	}
	else if (suma >= 70 && suma < 80)
	{
		cout << "Case " << indice << ": C\n";

	}
	else if (suma >=60 && suma < 70)
	{
		cout << "Case " << indice << ": D\n";
	}
	else
	{
		cout << "Case " << indice << ": F\n";
	}

}


int main() {
	int n;
	cin>> n;
	int i = 1;
	while (n--)
	{
		solve(i);
		i++;
	}

}
