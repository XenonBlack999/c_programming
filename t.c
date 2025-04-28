#include <stdio.h>

int main() {
    int a[] = {4,3,7};

    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
