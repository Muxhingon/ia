#include <stdlib.h> //Standard library
#include <stdio.h> //Standard input / output

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%i%*c", &a);
    scanf("%i%*c", &b);
    
    c= a+b;
    printf("%i",c);

    return 0;
}