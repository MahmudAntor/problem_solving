#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers)
{
    int sum_total=0, sum_front=0;
    for(int i=0; i<numbers.size(); i++)
    {
        sum_total += numbers[i];
    }
    int temp = sum_total;
    for(int i=0; i<numbers.size(); i++)
    {
        sum_total = temp - (sum_front + numbers[i]);
        if(sum_total == sum_front)
        {
            return i;
        }
        else
        {
            sum_front += numbers[i];
        }
    }
    return -1;
}