//
//  main.c
//  Week7_4
//
//  Created by Jiahao Fu on 4/24/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401

#include <stdio.h>
#define MAX 100

int main(int argc, const char * argv[]) {
    int num[MAX], i, j, k, t;
    for (i=0;i<MAX; i++)
    {
        printf("请输入数字");
        scanf("%d", &num[i]);
    }
    for (j=0; j< MAX-1; j++)
    {
        for(k=0; k< MAX-1-j; k++)
        {
            if(num[k]>num[k+1])
            {
                t=num[k];
                num[k]=num[k+1];
                num[k+1] = t;
            }
        }
    }
    printf("经过排序后的数字为：");
    for(i=0;i<MAX;i++)
    {
        printf("%d", num[i]);
        printf("\n");
    }
    return 0;
    
}
