#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int tab[n];
	long  z = 1;
	
	for(long i = 0; i < n; i++)
	
	{
	
	
	tab[i] = z;
	
	z *= 2;
	}

	for(long i = 0; i < n; i++)
	
	{
	
	cout << "tab[" << i << "] = " << tab[i] << endl;
	
	}

}
