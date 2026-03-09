#include "check_functions.h"

#include <stdio.h>
#include <malloc.h>

// show 1,2,3,4,5
void task1() {
    int nums[] = { 1,2,3,4,5 };
    int *pointer = NULL;
    int i;
    pointer = nums; //  pにnumsのアドレスを入力
    printf("%d \n",*pointer);
    for( i = 0 ; i < 5; i++){
        printf("%d ",*pointer);
        pointer++;   //  p2のアドレスをインクリメント
    }
    printf("\n");

}
// show 5 4 3 2 1
void task2() {
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL; //
    int i;
    p = &nums[4]; //  index of 5.
    printf("%d \n",*p);
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p--;   //  p2のアドレスをインクリメント
    }
    printf("\n");
}
// show 0 1 2 3 4 5 6 7 8 9
void task3() {
    int *array = NULL;
    int i;
    //	①長さ10の配列の生成(mallocを使用）
    array = (int *)malloc(sizeof(int) * 10);

    for(i = 0; i < 10; i++){
        array[i] = i;	//	値の代入
    }
    //	値の表示
    for(i = 0; i < 10; i++){
        printf("%d ",array[i]);	//	値の代入
    }
    printf("\n");
    //	②生成したメモリの開放(free()を使用)
    free(array);
}
// show 0.000000 0.100000 0.200000 0.300003 0.400000 0.500000
void task4() {
    double *a = NULL;
    int i;
    //	メモリの生成
    a = (double*)malloc(sizeof(double)*3);
    for(i = 0; i < 6; i++){
        a[i] = 0.1 * i;
    }
    //	結果の表示
    for(i = 0; i < 6; i++){
        printf("%f ",a[i]);
    }
    printf("\n");
    //	メモリの開放
    free(a);
}

void check_pointer_again() {
    int u = 100;
    int w = 250;
    int *p;
    int *q;

    p = &u;
    q = &w;
    printf("pointer of %d(u) is %p\n", u, (void*)&u);
    printf("pointer of %d(w) is %p\n", w, (void*)&w);

    printf("pointer of %d(p) is %p\n", p, (void*)&p);
    printf("pointer of %d(q) is %p\n", q, (void*)&q);

    printf("pointer of %d(*p) is %p\n", *p, (void*)&*p);
    printf("pointer of %d(*q) is %p\n", *q, (void*)&*q);
}