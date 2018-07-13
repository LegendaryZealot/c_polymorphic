#include <stdio.h>

#define ADD(A,B) (A)+(B)

int main(int argc, char const *argv[])
{
    printf("%d\n",ADD(1,3));
    printf("%0.1f\n",ADD(1.5,3.1));
    return 0;
}
