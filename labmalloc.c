#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int i = 0;
    int* ptr = 0;
    clock_t start, stop;
    int f = 2;
    while (i < 30)
    {
        start = clock();
 
        for (int i = 0; i < 100000; i++)
        {
            ptr = (int*)malloc(f * sizeof(int));
            free(ptr);
        }
 
        stop = clock();
 
        double total_t = (double)(stop - start) / CLOCKS_PER_SEC;
        printf("Allocated bytes: %d\n", f);
        printf("Required time is: %f\n", total_t);
        f *= 2;
        i++;
    }
    return 0;
}
