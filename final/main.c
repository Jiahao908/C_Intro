//
//  main.c
//  final
//
//  Created by Jiahao Fu on 5/27/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪  学号：201471114  班级：电计1401

#include <stdio.h>
#define N 10

typedef struct class
{
    char studentName[50];
    int  number;
    int testScore;
    char grade;
}studentType;

void input_info(studentType stu[])
{
    printf("请输入20名学生的信息\n");
    for(int i =0; i<N;i++)
    {
        
        printf("第%d个学生的姓名是：\n", i+1);
        scanf("%s", stu[i].studentName);
        printf("第%d个学生的学号是：\n", i+1);
        scanf("%d", &stu[i].number);
        printf("第%d个学生的成绩是：\n", i+1);
        scanf("%d",&stu[i].testScore);
    }
}

void  transform(studentType stu[])
{
    for(int i = 0; i<N; i++)
    {
        if (stu[i].testScore >= 90)
            stu[i].grade = 'A';
        else if (stu[i].testScore >= 80)
            stu[i].grade = 'B';
        else if (stu[i].testScore >= 70)
            stu[i].grade = 'C';
        else if (stu[i].testScore >= 60)
            stu[i].grade = 'D';
        else
            stu[i].grade = 'N';
        
    }
}

void find_maxscore(studentType stu[])
{
    int t;
    studentType temp;
    for(int i=1;i<N;i++)
    { t=N-i;
        for(int j=0;j<t;j++)
            if(stu[j].testScore<stu[j+1].testScore)
            {  temp=stu[j]; stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
    }
    printf("最高分是：%s同学获得的%d", stu[0].studentName, stu[0].testScore);

}

void file_save(studentType stu[])
{
    FILE * fp = fopen("/Users/jiahao/Documents/pro_lab/final/final/test.txt", "w");
    short i;
    for(i=0; i<N;i++)
    {
        fprintf(fp, "%d   %d\n", stu[i].number, stu[i].testScore);
    }
    fclose(fp);
}



int main(int argc, const char * argv[]) {
    studentType stu[N];
    input_info(stu);
    find_maxscore(stu);
    file_save(stu);
    return 0;
}
