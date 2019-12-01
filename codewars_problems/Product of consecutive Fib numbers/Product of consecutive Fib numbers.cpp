#include<math.h>
#include<vector>
typedef unsigned long long ull;
using namespace std;

class ProdFib
{
public:
    static long double index_fib(long double n)
    {
        long double phi = log((1 + sqrt(5)) / 2);
        long double store1 = log(5)/2;
        long double store2 = log(n);
        return floor((store1+store2) / phi);
    }
    static long double fib(long double n)
    {
        long double phi = (1 + sqrt(5)) / 2;
        return round(pow(phi, n) / sqrt(5));
    }

    static vector<ull> productFib(long double n)
    {
        long double sqrt_of_n = sqrt(n);
        long double store_fib_index = ProdFib::index_fib(sqrt_of_n);
        long double nth_fib = ProdFib::fib(store_fib_index);
        long double n_1th_fib = ProdFib::fib(store_fib_index + 1);
        long double n_2th_fib = ProdFib::fib(store_fib_index + 2);
        vector<ull> result;
        if(nth_fib * n_1th_fib == n)
        {
            result.push_back(nth_fib);
            result.push_back(n_1th_fib);
            result.push_back(1);
            return result;
        }
        else
        {
            if(nth_fib * n_1th_fib < n)
            {
                result.push_back(n_1th_fib);
                result.push_back(n_2th_fib);
                result.push_back(0);
                return result;
            }
            else
            {
                result.push_back(nth_fib);
                result.push_back(n_1th_fib);
                result.push_back(0);
                return result;
            }
        }
    }
};