#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double P, S;
	int n, k ;
	P = 1;
	n = 1;
		while (n <= 20)  
	{
		S = 0;
		k = n;
		while (k <= 20)

		{
			S += k;
			k++;

		}
		P *= (pow(n,2) + pow(S,2))/(n+1);
		n++;
	}
	cout << S << endl;
	cout << P << endl;

	P = 1;
	n = 1;
	do
	{
		S = 0;
		k = n;
		do
		{
			S += k; 
			k++; 
		} while (k <= 20);
		P *= (pow(n, 2) + pow(S, 2)) / (n + 1); 
		n++;
	} while (n <= 20);
	cout << S << endl;
	cout << P << endl;

	P = 1;
	for (n = 1; n <= 20; n++)
	{
		S = 0;
		for (k = n; k <= 20 ; k++)
		{
			S += k;

		}
		P *= (pow(n, 2) + pow(S, 2)) / (n + 1);

	}
	cout << S << endl;
	cout << P << endl;

	P = 1;
	for (n = 20; n >= 1; n--)
	{
		S = 0;
		for (k = n; k >= 1; k--)
		{
			S += k;
		}
		P *= (pow(n, 2) + pow(S, 2)) / (n + 1);
	}
	cout << S << endl;
	cout << P << endl;
	return 0;
}