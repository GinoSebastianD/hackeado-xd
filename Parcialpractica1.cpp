#include "vector"
#include "iostream"
#include "stack"
#include "string"

using namespace std;

void solve() {

	string linea;
	while (getline(cin,linea))
	{
		stack<int> pil;

		int i = 0;
		int n = linea.size();
		int pos = 0;
		int error = -1;

		while (i < n) {
			pos++;
			if (i + 1 < n && linea[i] == '(' && linea[i + 1] == '*') {
				pil.push(5);
				i = i + 2;
				continue;
			}
			if (i + 1 < n && linea[i] == '*' && linea[i + 1] == ')') {
				if (pil.empty() || pil.top() != 5) {
					error = pos;
					break;
				}
				pil.pop();
				i = i + 2;
				continue;
			}

			if (linea[i] == '(') {
				pil.push(1);
			}
			else if (linea[i] == '[') {
				pil.push(2);
			}
			else if (linea[i] == '{') {
				pil.push(3);
			}
			else if (linea[i] == '<') {
				pil.push(4);
			}

			
			else if (linea[i] == ')') {
				if (pil.empty() || pil.top() != 1) {
					error = pos;
					break;
				}
				pil.pop();
			}
			else if (linea[i] == ']') {
				if (pil.empty() || pil.top() != 2) {
					error = pos;
					break;
				}
				pil.pop();
			}
			else if (linea[i] == '}') {
				if (pil.empty() || pil.top() != 3) {
					error = pos;
					break;
				}
				pil.pop();
			}
			else if (linea[i] == '>') {
				if (pil.empty() || pil.top() != 4) {
					error = pos;
					break;
				}
				pil.pop();
			}
			i++;
		}


		if (error == -1 && !pil.empty()) {
			error = pos + 1;
		}
		if (error == -1) {
			cout << "YES\n";
		}
		else {
			cout << "NO " << error << "\n";
		}

	}

}


int main() {
	



	solve();
	return 0;


}
