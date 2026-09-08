#include "iostream"
#include "vector"
#include "list"
#include "algorithm"
#include "string"
using namespace std;
int main() {
	
	string s;
	while (getline(cin,s))
	{
		list<char> lista;
		auto it = lista.begin();
		for (int i = 0 ; i < s.size();i++)
		{
			if (s[i] == '[')
			{
				it = lista.begin();
			}
			else if (s[i]==']')
			{
				it = lista.end();
			}
			else
			{
				lista.insert(it, s[i]);
			}
		}
		for (auto it : lista)
		{
			cout << it;
		}
	}
}













