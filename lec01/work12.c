#include <stdio.h>

int getMaxScore(int data[],int count){
    int max = 0;
    for (int i = 0; i < count; i++){
        if (data[i] > max){
        max = data[i];
        }
    }
    return max;
}


int main(void){
    int n, max;
    int count = 9;
    int data[count];
    
    for (int i = 0; i < count; i++){
        scanf("%d", &n);
        data[i] = n;
    }
    
    max = getMaxScore(data,count);

    for (int i = 0; i < count; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("%d\n", max);

    return 0;
}
