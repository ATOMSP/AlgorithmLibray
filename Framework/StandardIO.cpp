//
// Created by sunpeng on 2023/8/16.
//
#include "AlgorithLib.h"

#include <cstdio>
#include <cctype>
#include <malloc.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* 前情提要第二题解 */
int Function(){
    char str[1000] = {0};
    char buf;
    int cnt = 0;
    gets(str);
    scanf("%c",&buf);
    buf = (char)tolower(buf);
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = (char)tolower(str[i]);
        if(str[i] == buf){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}

/* 前情提要第三题解 */
int Function2(){
    int n;
    do{
        scanf("%d",&n);
    } while (n < 1 || n > 1000);
    int *buf = (int*)malloc(sizeof(int) * n);
    int *fin = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",buf + i);
    }
    int m = 0;
    /* 先排序 后将重复的数据剔除掉，剩下的数据保存到新的数组中 */
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(buf[j] < buf[i]){
                m = buf[i];
                buf[i] = buf[j];
                buf[j] = m;
            }
        }
    }
    int j = 1;
    fin[0] = buf[0];
    for (int i = 1; i < n; ++i) {
        if(buf[i] != buf[i - 1]){
            fin[j++] = buf[i];
        }
    }
    for (int i = 0; i < j; ++i) {
        printf("%d\n",fin[i]);
    }
    return 0;
}
// 秒解！！！ 数组下标保存相同的数据，最后输出数组下标
//int main()
//{
//    int n;
//    int a;
//    while(~scanf("%d", &n))
//    {
//        int count[1001] = {0};
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &a);
//            count[a] = 1;
//        }
//        for (int i = 0; i < 1001; i++)
//        {
//            if (count[i] == 1)
//            {
//                printf("%d\n", i);
//            }
//        }
//    }
//    return 0;
//}

/* 前情提要第四题解 */
int Function3(){
    char buf[100] = {0};
    scanf("%s",buf);
    if(buf[0] != 0) {
        int len = (int)strlen(buf);
        char out[9] = {0};
        int cnt = (len / 8) + 1;
        int cnt2 = len % 8;
        for(int i = 0;i < cnt - 1;i++){
            for (int j = 0; j < 8; ++j) {
                out[j] = buf[j + i * 8];
                printf("%c",out[j]);
            }
            printf("\n");
        }
        if(cnt2){
            for (int i = 0; i < len - (cnt - 1) * 8; ++i) {
                printf("%c",buf[((cnt - 1) * 8) + i]);
            }
            for (int i = 0; i < cnt * 8 - len; ++i) {
                printf("%d",0);
            }
        }
    }
    return 0;
}


/* 前情提要第五解 */
int Function4(){

    char buf[11] = {0};
    int buf2[11];
    scanf("%s",buf);
    int len = strlen(buf);
    for (int i = 2; i < len; ++i) {
        switch ((int)tolower(buf[i])) {
            case 97: {
                buf2[i] = 10;
                break;
            }
            case 98: {
                buf2[i] = 11;
                break;
            }
            case 99:{
                buf2[i] = 12;
                break;
            }
            case 100:{
                buf2[i] = 13;
                break;
            }
            case 101:{
                buf2[i] = 14;
                break;
            }
            case 102:{
                buf2[i] = 15;
                break;
            }
            default:{
                buf2[i] = (int)(buf[i] - '0');
                break;
            }
        }
    }
    int out = 0;
    for (int i = len - 1,j = 0; i >= 2; --i) {
        out += buf2[i] * (int)pow(16,j++);
    }
    memset(buf2, 0, sizeof(buf2));
    sprintf((char *)buf2, "%d", out);
    printf("%s",buf2);
    return 0;
}

/* 前情提要第六题解 */













