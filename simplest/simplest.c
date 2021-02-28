#include <assert.h>
#include <stdio.h>

int my_sum(int a, int b) {
    return a + b;
}

int main(int argc, char* argv[]) {
    printf("Unit test start.....\r\n");
    assert(2 == my_sum(1, 1)); // Pass
    assert(-2 == my_sum(-1, -1)); // Pass
    assert(0 == my_sum(0, 0)); // Pass
    assert(2 == my_sum(2, 3)); // Failed

    //...
    return (0);
} 
