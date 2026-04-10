#include <stdio.h>

int main(int argc, char *argv[]){   //第一引数にプログラム引数の数+1, 第二引数にプログラム引数の内容を配列ポインタで
    if (argc == 1){
        printf("error:プログラム引数が0です\n");
    }else{
        for (int i = 1; i < argc; i++){     //第一引数がプログラム引数の数+1よりスタートをずらす
            printf("argv[%d]:%s\n", i, argv[i]);
        }
    }
}