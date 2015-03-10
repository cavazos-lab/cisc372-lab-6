#include <stdlib.h> 
#include <stdio.h> 
int main(int argc, char *argv[]) 
{ 

    #pragma omp parallel  num_threads(2)
    {
        #pragma omp single
        {
            printf("A "); 
            #pragma omp task
            {printf("race "); }
            #pragma omp task
            {printf("car "); }
        }
    }
    printf("\n"); 
    return(0); 
}
