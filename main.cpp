#include <iostream>
#include <random>

using namespace std;

double drand48()
{
	return ((double)(rand()) / (RAND_MAX));/*RAND_MAXは32767*/
}

int main()
{
	for (int i = 0; i < 20; i++)
		cout <<  drand48() << '\n';
}
