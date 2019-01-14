//
//  main.c
//  Week6_4
//
//  Created by Jiahao Fu on 4/16/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401

#include <stdio.h>
#include <string.h>
#define MAX 30

float max = 0 ;
int ID = 0;
float ave = 0;
int i = 0;

typedef struct Student{
    float score;
    char name[10];
}stu;


void less_than_ave(stu node[]){
    int num = 0;
    while (num < i){
        if(node[num].score < ave){
            printf("%s\n", node[num].name);
            }
        num++;
    }
}

void print_max(stu node[]){
    printf("最高分是%f，获得最高分的学生姓名是%s\n", max, node[ID].name);
}

int main(int argc, const char * argv[]) {
    stu node[MAX];
    float total = 0;
    printf("请输入学生姓名和成绩，并且在输入信息前加T。 例：TZhangsan 90\n(如需退出输入成绩，请输入Q)");
    while (getchar()!='Q')
    {
        scanf("%s %f\n", node[i].name, &node[i].score);
        if (max==0){
            max = node[i].score;
            ID = i;
        }
        else if (max<= node[i].score){
            max = node[i].score;
            ID = i;
        }
        total = total + node[i].score;
        ave = total / (i + 1);
        i++;
    }
    /*for (int j = 0; j<i;j++){
        printf("%s %f", node[j].name, node[j].score);
    }*/
    printf("请选择你需要使用的功能：\n1.输出平均分\n2.输出考试分数低于班级平均分的学生姓名\n3.输出考试最高分以及获得最高分的学生姓名\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("%f", ave);
            break;
        case 2:
            less_than_ave(node);
            break;
        case 3:
            print_max(node);
            break;
        default:
            break;
    }
    return 0;
}
