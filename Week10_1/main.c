//
//  main.c
//  Week10_1
//
//  Created by Jiahao Fu on 5/16/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 班级：电计1401 学号：201471114

#include <stdio.h>

struct score
{
    int number;
    char name[50];
    double total;
    double eng_score;
    double pol_score;
    double math_score;
    double maj_score;
    char mark;
};

void Cal_Mark(struct score stu[])
{
    for(int i = 0;i<100;i++)
    {
        if (stu[i].eng_score>=45 && stu[i].pol_score>=45 && stu[i].math_score >= 75 && stu[i].pol_score >= 75 && stu[i].total >= 320)
        {
            stu[i].mark = 'P';
        }
    }
}

void SelectionSort(struct score stu[])
{
    int i, j, num;
    struct score temp;
    for(i=0;i<100-1;i++) /*外层*/
    { /*内循环比较的基准值*/
        num=i;   /*第 i 轮比较*/
        for(j=i+1;j<100;j++) /*内层*/
            if(stu[j].total > stu[num].total)
                num=j;
        /*第i论结束是否需要交换*/
        if(num!=i)
        { temp=stu[num];
            stu[num]=stu[i];
            stu[i]=temp;
        }
    }

}

int main(int argc, const char * argv[]) {
   
    struct score stu[100];
    for(int i = 0; i < 100; i++)
    {
        printf("请输入第%d个学生的考号\n",i+1);
        scanf("%d", &stu[i].number);
        printf("请输入第%d个学生的姓名\n",i+1);
        scanf("%s", stu[i].name);
        printf("请输入第%d个学生的英语成绩\n",i+1);
        scanf("%lf", &stu[i].eng_score);
        printf("请输入第%d个学生的政治成绩\n",i+1);
        scanf("%lf", &stu[i].pol_score);
        printf("请输入第%d个学生的数学成绩\n",i+1);
        scanf("%lf", &stu[i].math_score);
        printf("请输入第%d个学生的专业成绩\n",i+1);
        scanf("%lf", &stu[i].maj_score);
        stu[i].total = stu[i].eng_score + stu[i].pol_score + stu[i].math_score + stu[i].maj_score;
    }
    void SelectionSort(struct score stu[]);
    void Cal_Mark(struct score stu[]);
    for (int i = 0; i<100; i++)
    {
        if(stu[i].mark == 'P')
        {
            printf("姓名：%s 总分：%lf",stu[i].name, stu[i].total);
        }
    }
    return 0;
}
