#include <stdio.h>
#define POP 9

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
    int data[POP];
    
    for (int i = 0; i < POP; i++){
        scanf("%d", &n);
        data[i] = n;
    }
    
    max = getMaxScore(data,POP);

    for (int i = 0; i < POP; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("%d\n", max);

    return 0;
}
