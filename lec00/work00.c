#include<stdio.h>

int main(void){
    int num;

    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        printf("こんにちは\n");
    }
    if(num > 1){
        printf("大事なことなので%d回言いました\n", num);
    }
    return 0;
}
