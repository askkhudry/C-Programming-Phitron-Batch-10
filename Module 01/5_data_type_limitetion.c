// ekta integer variable 4 byte ba 8 bit jayga ney
// orthat 2^32 ba 10^9 songkhok songkha ney,er beshi se rakhte pare na
//  ei jonno amader integer er bodol long long integer nite hy
// float er bodol double nite hoy
#include <stdio.h>
int main()
{
    int b = 4000000;
    long long int a = 100000000000;
    float f = 234.453;
    double d = 356.34568049;
    printf("%d %lld %f %lf", b, a, f, d);

    return 0;
}