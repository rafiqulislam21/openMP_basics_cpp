#include<iostream>
#include<omp.h>

int main(){
    omp_set_num_threads(4);
    #pragma omp parallel
    {
        int thread = omp_get_thread_num();
        std::cout<<"Hello world form"<<thread<<"\n";
    }

    return 0;
}
