#include <stdlib.h> 
#include <stdio.h> 
int main(int argc, char *argv[]) 
{ 

    #pragma omp parallel  num_threads(2)
    {
        #pragma omp single
        {
            printf("A "); 
            printf("race "); 
            printf("car "); 
        }
    }
    printf("\n"); 
    return(0); 
}
