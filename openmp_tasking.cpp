#include <omp.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    #pragma omp parallel
    {
        #pragma omp single
        {
            cout << "A ";
        #pragma omp taskgroup
        //wait until two child task complete
        {
            #pragma omp task
                cout << "race ";
            #pragma omp task
                cout << "car ";
        }
        cout << "is fun to watch ";
        }
    }
    cout << endl;
return 0;
}
