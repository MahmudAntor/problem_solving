#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
struct Bigint
{
    string a; // to store the digits

    int size()   // returns number of digits
    {
        return a.size();
    }

    void operator = ( string b )   // assigns a string to Bigint
    {
        a = b;
        reverse( a.begin(), a.end() );
    }

    Bigint operator + ( Bigint b )   // addition operator overloading
    {
        Bigint c;
        for(int i = 0, carry = 0; i<a.size() || i<b.size() || carry; i++ )
        {
            carry+=(i<a.size() ? a[i]-48 : 0)+(i<b.a.size() ? b.a[i]-48 : 0);
            c.a += (carry % 10 + 48);
            carry /= 10;
        }
        return c;
    }
};

std::string sum_strings(const std::string& a_a, const std::string& b_b) {
    Bigint a, b, c;
    a = a_a;
    b = b_b;
    c = a+b;
    reverse( c.a.begin(), c.a.end() );
    return c.a;
}
int main()
{
    cout<<sum_strings("111111111111111111111111111111", "111111111111111111111111111111");

    return 0;
}
