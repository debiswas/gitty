#include <stdio.h>

int main(void)
{
    int x = 38;
    int y = 50;
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    // swapping changes...
    int t = x;
    y = t;
    x = y;
    
    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
