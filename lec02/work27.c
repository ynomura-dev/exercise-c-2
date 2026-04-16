#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 10

int gStack[STACK_SIZE];
int gSNum = 0;

int isStackEmpty(){
    return gSNum == 0;
}

int isStackFull(){
    return gSNum == STACK_SIZE;
}

void push(int x){
    if (isStackFull()){
        printf("エラー: これ以上pushできません\n");
        exit(1);
    }
    gStack[gSNum] = x;
    gSNum++;
}

int pop(void){
    if (isStackEmpty()){
        printf("正しくない\n");
        exit(1);
    }
    gSNum--;
    return gStack[gSNum];
}

void printStack(void){
    int i;
    printf("STACK[");
    for(i = 0; i < gSNum; i++){
        printf(" %d", gStack[i]);
    }
    printf(" ]\n");
}

int assignid(char *kakko){
    if (strcmp(kakko, "(") == 0) return 1;
    if (strcmp(kakko, ")") == 0) return -1;
    if (strcmp(kakko, "[") == 0) return 2;
    if (strcmp(kakko, "]")  == 0) return -2;
    if (strcmp(kakko, "{")  == 0) return 3;
    if (strcmp(kakko, "}")  == 0) return -3;
    return 0;
}

int main(int argc, char *argv[]){
    int num, tmp;

    if (argc == 1){
        return 1;
    }

    for (int i = 1; i < argc; i++){
        num = assignid(argv[i]);

        if (num > 0){
            push(num);
        }
        else if (num < 0){
            tmp = pop();
            if (tmp != -num){
                printf("No Taiou\n");
                exit(1);
            }
        }
    }
    if (isStackEmpty()){
        printf("正しい\n");
    } else {
        printf("正しくない\n");
    }

    return 0;
}