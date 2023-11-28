#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

long long int Sum ( int a, int b, int c){
    long long int S = (long long int) b;
    int w, i;
    for (i = 0; i < c; i++)
    {
        std::cin >> w;
        w = (w >= a) ? a - 1 : w;
        S += (long long int) w;
        // printf("%lli\n", S);
    }
    return S;
}

int main()
{
    int TestCases;
    scanf("%i", &TestCases);
    while (TestCases != 0)
    {
        int a, b, c;
        scanf("%i %i %i", &a, &b, &c);
        printf("%lli\n", Sum(a, b, c));
        TestCases--;
    }
    return 0;
}