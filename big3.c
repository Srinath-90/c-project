#include <stdio.h>

void biggest3()
{
    int a, b, c, biggest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        biggest = a;
    else if (b >= a && b >= c)
        biggest = b;
    else
        biggest = c;

    printf("Biggest number is: %d\n", biggest);

   // return 0;
}
