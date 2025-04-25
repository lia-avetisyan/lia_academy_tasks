#include <stdio.h>

int global_var = 2005;

void memory_segments() {
    
    static int static_initialized_var = 2012;
    static int static_uninitialized_var;
    int local_var = 5;

    printf("Global : %p\n", (void*)&global_var);
    printf("Static : %p\n", (void*)&static_initialized_var);
    printf("Static Uninitilalized : %p\n", (void*)&static_uninitialized_var);
    printf("Local : %p\n", (void*)&local_var);

}

int main() 
{
    memory_segments();
    return 0;
}

