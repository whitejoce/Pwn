#include <stdio.h>

int main(){
    
    int i = 0x11223344;
    char *p;

    p = (char *) &i;
    if (*p == 0x44) { 
        printf("Little Endian\n");
    }
    else {
        printf("Big Endian\n");
    }
    return 0;
}
