#include<stdio.h>

int main()
{

    int a[] = {1,2,34,5,6,876};
    a[3] = 555;

    int i=0;
    while(i<=5)
    {
        printf("%d\n",a[i]);
        i++;
    }
    return 0;
}


