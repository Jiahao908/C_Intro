//
//  main.c
//  Week7_5
//
//  Created by Jiahao Fu on 4/24/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401

#include <stdio.h>
#define MAX 10

void select_sort(int num[])
{
    int i, j;
    for (i=0; i<MAX; i++)
    {
        int min = i;
        for(j=i+1; j<MAX; j++)
        {
            if(num[j]<num[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int t = num[min];
            num[min] = num[i];
            num[i] = t;
        }
    }
    for(i=0;i<MAX;i++)
    {
        printf("%d\n",num[i]);
    }
}


int main(int argc, const char * argv[]) {
    int num[MAX];
    printf("请输入n个整数：");
    for(int i=0; i<MAX; i++)
    {
        scanf("%d", &num[i]);
    }
    select_sort(num);
    
}
