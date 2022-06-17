#include <stdio.h>
main()
{
    int i, no, term1=0, term2=1, nextTerm;

    printf("Enter the number of terms : ");
    scanf("%d", no);
    printf("Fibonacci Series : ");

    for (i=1; i<=no; ++i)
    {
        printf("%d", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

}
