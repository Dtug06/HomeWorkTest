#include <stdio.h>

int main() {
    int array[5] = {0, 0, 0, 0, 0};
    int total = 0;
    
    for(int i = 0; i < 5; i++) {
        int num;
        printf("nhap ");
        scanf("%d", &num);
        if(num % 2 != 0) {
            array[i] = num;
        }
        total += array[i];
    }
    
    printf("tong cac so le la %d\n", total);
    return 0;
}

