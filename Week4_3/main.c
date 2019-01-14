//
//  main.c
//  Week4_3
//
//  Created by Jiahao Fu on 4/2/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401
#define MAX 100
#include <stdio.h>
float max, min;
void score(){
    int i = 0;
    float grades[MAX];
    printf("欢迎进入学生成绩管理系统！\n");
    while (i >= 0) {
      printf("请输入第%d名学生的成绩：（如需退出，请输入任意负数）\n", i+1);
      scanf("%f", &grades[i]);
        if (grades[i] < 0) {
        printf("您已退出该成绩管理系统。期待您的再次使用！\n");
        break;
    }
        else if (i == 0){
            max = grades[i];
            min = grades[i];
        }
        else if (grades[i] >= max){
          max = grades[i];
          }
        else if (grades[i] <= min){
          min = grades[i];
      }
        printf("当前最高成绩为：%f，最低成绩为：%f\n", max, min);
        i++;
    }
}

int main(int argc, const char * argv[]) {
    score();
    return 0;
}
