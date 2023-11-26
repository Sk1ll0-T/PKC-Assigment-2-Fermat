/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>
#include<cmath>
using namespace std;
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {

        long long sr = sqrt(x);

        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int main()
{
    int t0, n, t, s, t_square_minus_n;
    cout << "t0=";
    cin >> t0;
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= 20; i++)
    {
        t = t0 + i;
        s = sqrt(abs(t * t - n));
        t_square_minus_n = (t * t - n) % n;
        cout << "t+" << i << "  t*t-n = " << t_square_minus_n << "     Perfect square=" << isPerfectSquare(t_square_minus_n) << "   s= " << s << "    t= " << t << endl;
        if (isPerfectSquare(t_square_minus_n))
        {
            int factor1 = t + s;
            int factor2 = t - s;
            if (factor1 > factor2)
                swap(factor1, factor2);
            cout<<endl << "The obtained two factors of n are (in increasing order)" << endl;
            cout << endl << "factor1=" << factor1;
            cout << endl << "factor2=" << factor2 << endl << endl;


            break;
        }
    }
    cout << t << endl << endl;



}