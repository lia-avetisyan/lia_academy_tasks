#include <stdio.h>

extern int var; 

void storage_class() {
    
    auto int auto_var = 301;
    static int static_var = 0; 
    static_var++;
    
    printf("Auto : %d", auto_var);
    printf("Static : %d", static_var);
    printf("Extern : %d", var);
}

int main() 
{
    
    storage_class();
    storage_class();
    storage_class();
    return 0;
}

