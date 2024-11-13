#include <stdio.h>

int main() {
    int pow = 2;
    int limit = 64;  
    
    while (pow <= limit) {  
        printf("%d\n", pow);
        pow *= 2; 
    }
    return 0;
}