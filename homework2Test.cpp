#include <stdio.h>

int main() {
    int array[5] = {0, 0, 0, 0, 0};
    int le,chan; 
    
    for(int i = 0; i < 5; i++) {
        int num;
        printf("nhap ");
        scanf("%d", &num);
        if(num % 2 != 0) {
            array[i] = num;
            le++ ;
        }
        
    }
    chan=5-le; 
    
    printf("so le:%d so chan :%d",le,chan);
    return 0;
}

