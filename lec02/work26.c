#include <stdio.h>
#include <stdlib.h>
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
        printf("空状態でpopしようとしました\n");
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

int main(int argc, char *argv[]){
    int num, tmp;

    if (argc == 1){
        return 1;
    }

    for (int i = 1; i < argc; i++){
        num = atoi(argv[i]);

        if (num > 0){
            push(num);
        }
        else if (num < 0){
            tmp = pop();
            if (tmp != -num){
                printf("対応がとれていません\n");
                exit(1);
            }
        }
    }

    if (isStackEmpty()){
        printf("空状態です\n");
    } else {
        printf("空状態ではありません\n");
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
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
        printf("空状態でpopしようとしました\n");
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

int main(int argc, char *argv[]){
    int num, tmp;

    if (argc == 1){
        return 1;
    }

    for (int i = 1; i < argc; i++){
        num = atoi(argv[i]);

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
        printf("Emp\n");
    } else {
        printf("Not Emp\n");
    }

    return 0;
}

*/