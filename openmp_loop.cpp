#include<iostream>
#include<omp.h>

int main(){
    int f;
    int a[10], b[10];
    #pragma omp parallel private(f)
    {
        f = 7;

        //#pragma omp for
        for(int i = 1; i <= 20; i++){
            a[i] = b[i] + f*(i+1);
        }
    }
    return 0;
}
