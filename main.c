#include <stdio.h>

int policz(int a, int b){
    return a+b;
}
int main() {
    printf("Hello World");
    int odp = policz(5,8);
    printf("%d", odp);
    return 1;
}