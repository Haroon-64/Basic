#include<stdio.h>

int main()
{
    int arr[]= {3,4,5,6,78,34,89,23,45,6,23,245,567,
    89,908,678,453,32,123,12,123456,39824,2442,242,
    4,242,4,24,2,4,24,2,4,24,1231,67,43,56,90,342};

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("%d",size);
    
}
