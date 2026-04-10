#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if (argc != 3){
        printf("error:プログラム引数を二つ指定してください\n");     //argv[n]を参照するとき存在するか確認する必要あり
    } else {
        printf("%d\n", atoi(argv[1])+atoi(argv[2]));
    }
    return 0;
}