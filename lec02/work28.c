#include <stdio.h>

#define ROW  10         /* マップの行数(縦幅) */
#define COL  12         /* マップの列数(横幅) */

#define WALL  1         /* 壁 */
#define EMPTY 0         /* 何もない場所 */

#define WALL_STR    "■"
#define EMPTY_STR   "  "
#define UNKNOWN_STR "？"


/*** 上の全角文字がうまく表示できない場合はこちらを使う ***/
/**********
#define WALL_STR    "#"
#define EMPTY_STR   " "
#define UNKNOWN_STR "?"
**********/


/* 地図を読み込む．
*  C演習Iでは扱わなかったが，2次元配列を関数の引数にする場合は，
*  仮引数には2次元目以降の添字を書かなければいけない．
*/
void readMap(int map[][COL], int rowsize){
    int i, j;
    for (i=0; i<rowsize; i++){
        for (j=0; j<COL; j++){
            scanf("%d", &map[i][j]);
        }
    }
}

/* 地図を表示する */
void showMap(int map[][COL], int rowsize){
    int i, j;

    printf("   ");
    for (j=0; j<COL; j++){
        printf("%2d", j%10);
    }
    printf("\n");

    for (i=0; i<rowsize; i++){
        printf("%2d:", i);
        for (j=0; j<COL; j++){
            if (map[i][j] == WALL){
                printf("%s", WALL_STR);
            }else if (map[i][j] == EMPTY){
                printf("%s", EMPTY_STR);
            }else{
                printf("%s", UNKNOWN_STR);
            }
        }
        printf("\n");
    }
}


int main(void){
    int map[ROW][COL];
    int i, j;

    readMap(map, ROW);  /* 迷路を読み込む */
    showMap(map, ROW);   /* 迷路を表示する */

    /* 迷路の位置(6,8)を調べてみる */
    i = 6;
    j = 8;
    if (map[i][j] == WALL){
        printf("map[%d][%d]は壁です\n", i, j);
    }else if (map[i][j] == EMPTY){
        printf("map[%d][%d]は通路です\n", i, j);
    }else{
        printf("map[%d][%d]は不明です\n", i, j);
    }

    return 0;
}