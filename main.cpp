#include <iostream>
#include <cmath>

using namespace std;


uint64_t calc_sum(uint64_t x)
{
   uint64_t result = 0;

   while (x > 0)
   {
       result += x % 10;
       x /= 10;
   }

   return result;
}


int main(int argc, char *argv[])
{
    int N = 4;

    uint64_t max = (uint64_t)(pow(10, 2 * N) - 1);
    uint64_t M = (uint64_t)(pow(10, N));

    int count = 0;
    for (uint64_t i = 0; i <= max; i++)
    {
        uint64_t x = i / M;
        uint64_t y = i % M;

        if (calc_sum(x) == calc_sum(y))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
