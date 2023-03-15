#include "C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v12.1\include\cuda_runtime.h"
#include "C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v12.1\include\device_launch_parameters.h"

#include <iostream>
using namespace std;
__global__ void add(int *a, int *b, int *c) {
    int i=threadIdx.x;
    c[i]=a[i]+b[i];

}

int main() {

    int x[]={1,2,3,4,5,6,7,8,9,10};
    int y[]={1,4,9,16,25,36,49,64,81,100};
    int z[sizeof(x)]={0};
    // create device pointers
    int *d_x=0, *d_y=0, *d_z=0;
    // allocate memory on device
    cudaMalloc(&d_x, sizeof(x));
    cudaMalloc(&d_y, sizeof(y));
    cudaMalloc(&d_z, sizeof(z));
    // copy data from host to device
    cudaMemcpy(d_x, x, sizeof(x), cudaMemcpyHostToDevice);
    cudaMemcpy(d_y, y, sizeof(y), cudaMemcpyHostToDevice);
  
  add<<<1,sizeof(x)/sizeof(int)>>>(d_x,d_y,d_z);

  cudaMemcpy(z, d_z, sizeof(z), cudaMemcpyDeviceToHost);
  
    return 0;
}

