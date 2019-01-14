//
//  main.c
//  Week10_2
//
//  Created by Jiahao Fu on 5/26/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 班级：电计1401 学号：201471114

#include <stdio.h>

struct play
{
    char name[10];
    int score[7];
    int wintimes;
    int maxscores;
};

void fuc_stat(struct play player[])
{
    
    for(int j = 0; j<7; j++)
        {
            if (player[0].score[j] > player[1].score[j])
                player[0].wintimes++;
            else
                player[1].wintimes++;
            if (player[0].maxscores < player[0].score[j])
                player[0].maxscores = player[0].score[j];
            if (player[1].maxscores < player[1].score[j])
                player[1].maxscores = player[1].score[j];
        }
}


int main(int argc, const char * argv[]) {
    struct play player[2];
    player[0].wintimes = 0;
    player[1].wintimes = 0;
    player[0].maxscores = 0;
    player[1].maxscores =0;
    for(int i =0; i<2; i++)
    {
        printf("请输入选手姓名：\n");
        scanf("%s", player[i].name);
        getchar();
        printf("请依次输入七场比赛成绩：\n");
        for(int j=0; j<7; j++)
        {
            scanf("%d", &player[i].score[j]);
        }
    }
    void fuc_stat(struct play player[]);
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<7; j++)
        {
            printf("%s VS %s", player[0].name, player[1].name);
            if (player[0].score[j] > player[1].score[j])
            {
                printf("The winner is %s", player[0].name);
                printf("%s's highest score is %d", player[0].name, player[0].maxscores);
                printf("%s's highest score is %d", player[1].name, player[1].maxscores);
            }
           else
           {
               printf("The winner is %s", player[1].name);
               printf("%s's highest score is %d", player[0].name, player[0].maxscores);
               printf("%s's highest score is %d", player[1].name, player[1].maxscores);
           }
        }
    }
    return 0;
}
