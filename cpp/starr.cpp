#include<iostream>
#include<array>
using namespace std;

void print(int size,array<int,10>& arr){     //how to pass size(10) as variable

    for (int i=0;i<arr.size();i++)
        cout<< arr[i];
}

int main(){
   
    array<int, 10> A={1,2,3,4,5,6,7,8,9,0};
    print (10,A);

}