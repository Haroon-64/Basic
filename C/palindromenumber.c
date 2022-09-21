#include<stdio.h>

int main()
{
    int q , n , rem , res=0;

    printf("Enter the Number :");
    scanf("%d",&n);

    q=n;

    while(q != 0)
    {

        rem = q%10;
        res = res*10 + rem;
        q = q/10;

    }

    if(res == n)
    {
        printf("Number is a Palindrome");
    }
    else
    {
        printf("Number is not a Palindrome");
    }
    return 0;
}