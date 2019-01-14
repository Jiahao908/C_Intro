//
//  main.c
//  Week10_3
//
//  Created by Jiahao Fu on 5/26/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 班级：电计1401 学号：201471114

#include <stdio.h>
#define N 30 /*共有30名学生参选*/
#define M 8 /*八位候选人*/
#define H 5 /*选五位班委*/

typedef struct class
{
    char name[50]; /*候选人姓名*/
    int poll;/*得票数*/
    int sn;/*够半数以上标记为1*/
}VOTE;


void toupiao(VOTE vt[])
{
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j < H; j++)
        {
            char *p ="";
            scanf("%s",p);
            for(int k = 0; k<N; k++)
            {
                vt[k].poll = 0;
                if (*p == *vt[k].name)
                {
                    vt[k].poll++;
                    if (vt[k].poll >= 15)
                        vt[k].sn =1;
                }
            }
        }
    }
}

void tpsort(VOTE vt[])
{
    int t =0;
    VOTE temp;
    for(int i=1;i<8;i++)
    { t=8-i;
        for(int j=0;j<t;j++)
            if(vt[j].poll<vt[j+1].poll)
            {  temp=vt[j]; vt[j]=vt[j+1];
                vt[j+1]=temp;
            }
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    VOTE vt[M];
    void toupiao(VOTE vt[]);
    void tpsort(VOTE vt[]);
    for (int i=0; i<M; i++)
    {
        printf("%s的得票数为%d\n", vt[i].name, vt[i].poll);
        if (vt[i].sn == 1)
        {
            printf("得票数超过半数");
        }
        
    }
    printf("成功当选班委的名字是：");
    for(int k=0; k<5;k++)
    {
        printf("%s", vt[k].name);
    }
    return 0;
}
