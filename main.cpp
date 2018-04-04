#include <stdio.h>

int main() {
    int inputs[20]={2, 5, 10, 14, 3, 9, 18, 13, 12, 15, 19, 11, 1, 7, 0, 17, 6, 4, 16, 8};
    int max_index;
    int max_number;
    int min_index;
    int min_number;

    /*

        ここにinputsの配列から最大の数とその順番を探しmax_numberとmax_indexに，最小の数とその順番をmin_numberとmin_indexにセットするプログラムを書く

    */

    //結果表示
    printf("max index=%d, number=%d",max_index,max_number);
    printf("min index=%d, number=%d",min_index,min_number);
    return 0;
}