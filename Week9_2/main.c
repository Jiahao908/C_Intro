//
//  main.c
//  Week9_2
//
//  Created by Jiahao Fu on 5/6/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪  学号：201471114 班级：电计1401

#include <stdio.h>
#include <string.h>
#define MAX 100

void search(char *c, char ch){
    int i=1;
    while ( *c != ch)
    {
        c++;
        i++;
    }
    printf("第一次出现的位置是：%d", i);
}
int main(int argc, const char * argv[]) {
    char ch, string[MAX];
    printf("请输入字符串\n");
    scanf("%[^\n]", string);
    char *c = string;
    getchar();
    printf("请输入检索字母\n");
    scanf("%c", &ch);
    search(c, ch);
    return 0;
}
