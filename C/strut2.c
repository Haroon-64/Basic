include<stdio.h>
#include<string.h>
struct A
{
int number;

float mark;

char name;
};
int main()

{

int a,b,n;

printf("enter number of elements"); scanf("%d",n);

for (a=0; a<n; a++)
{
struct A s[a];


  printf("enter number of %d",a+1); 
  scanf("%d", &s[a].number);    
  printf("enter mark"); 
  scanf("%f",&s[a].mark); 
  printf("enter name");
  scanf("%s", &s[a].name);
  
  }
printf("number\t mark\t namt\n");
  
  for (a=8; a<n; a++)
  {

struct A s[a];

printf("%d\t", s[a].number); printf("%s\n",s[a].name);
    }
  }