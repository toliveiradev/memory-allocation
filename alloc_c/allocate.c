#include <stdio.h>
#include <stdlib.h>

int main() {
    int* num_ptr = malloc(sizeof(int));
    
    if (num_ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *num_ptr = 42;
    printf("Dynamic number: %d\n", *num_ptr);

    free(num_ptr);

    return 0;
}