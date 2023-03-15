#include<iostream>
using namespace std;
class stack
{
    int a[2];
    int top;
    public:
    stack():top(-1){}
    void push(int n)
    {
        int m;
        top++;
        a[top]=m;
        
    }
    int pop(){
        return a[top--];
    }
};
int main()
{
    stack s1;
    s1.push(1);
    s1.push(33);

   
   cout<<s1.pop();
}
