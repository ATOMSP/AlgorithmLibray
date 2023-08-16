//
// Created by sunpeng on 2023/8/16.
//
#include "AlgorithLib.h"

#include <cstdio>
#include <cctype>

/* 前情提要第二题解 */
int Function(){
    char str[1000] = {0};
    char buf;
    int i = 0,cnt = 0;
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




