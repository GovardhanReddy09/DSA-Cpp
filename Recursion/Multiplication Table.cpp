#include <iostream>
using namespace std;

void mul_table(int N, int i)
{
	if (i > 10)
		return;
	cout << N << " * " << i << " = " << N * i << endl;
	return mul_table(N, i + 1);
}
int main()
{
	int N = 8;
	mul_table(N, 1);
	return 0;
}

