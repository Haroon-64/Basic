#include<stdio.h>
int func();

int var = 20;

int main()
{
    int var = 10;
    {
        int var = 3;
        printf("%d\n", var);
    }
    printf("%d\n",var);
    func();
    return 0;
}

int func()
{
    printf("%d",var);
}

/* Local variable gets preference over to global variable*/
/* Multiple declaration of global variable is allowed but 
multiple defintions are not*/

