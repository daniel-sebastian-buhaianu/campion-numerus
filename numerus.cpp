#include <fstream>
using namespace std;
int main()
{
	ifstream f("numerus.in");
	int k, n;
	f >> k >> n;
	f.close();
	int nrmax = k*5;
	int nrmin = nrmax-4;
	ofstream g("numerus.out");
	int i;
	if (k%2)
	{
		i = nrmin;
		while (i < nrmax)
			g << i++ << ' ';
		g << i << ' ' << i << '\n';
	}
	else
	{
		i = nrmax;
		g << i << ' '; 
		while (i > nrmin)
			g << i-- << ' ';
		g << i << '\n';
	}
	k = 1, nrmax = 5;
	while (n > nrmax) k++, nrmax += 5;
	g << k << '\n';
	nrmin = nrmax-4;
	i = n-nrmin;
	if (k%2)
		if (n == nrmax)
			g << "E F";
		else
			g << (char)('A' + i);
	else
		if (n == nrmax)
			g << "A B";
		else
			g << (char)('F'- i);
	g.close();
	return 0;
}

