#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int sum(unsigned int x) {
	int result = 0;
	while (x > 0)
	{
		result += x % 10;
		x /= 10;

	}
	return result;
}
int main()
{
	int N;
	cin >> N;


	int count = 0;

	for (unsigned int  x = 0; x < static_cast<unsigned int>(pow(10, 2 * N)); x++) {
		unsigned int m = static_cast<unsigned int>(pow(10, N));
		unsigned int xh = x / m;
		unsigned int xl = x % m;
		if (sum(xh) == sum(xl))
		{
			//cout << x << endl;
			count++;
		}
	}
	cout << count << endl;
}