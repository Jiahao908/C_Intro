//
//  main.c
//  week4_1
//  Created by Jiahao Fu on 4/1/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401

#include <stdio.h>
int cal_jiangjin(int a){
    if ( a <= 0){
        printf("工作年数必须大于等于1");
        return 0;
    }
    else if (a <= 5 )
    {
        return a * 10 ;
    }
    else {
        return a * 20 ;
    }
}
float cal_yongjin(int b){
    if ( b < 0 ){
        printf("销售额必须为正数");
        return 0;
    }
    else if ( b<= 5000){
        return 0;
    }
    else if ( b > 5000 ){
        return b * 0.03;
    }
    else{
        return b * 0.06;
    }
}
int main(int argc, const char * argv[]) {
    int gong_zi, jiang_jin, yong_jin, year, sales, salary;
    printf("请输入销售人员的基本工资，工作年限和销售额\n");
    scanf("%d%d%d",&gong_zi, &year, &sales);
    if (gong_zi <= 0){
        printf("基本工资必须为正数！输入有误！\n");
        return 0;
    }
    jiang_jin = cal_jiangjin(year);
    yong_jin = cal_yongjin(sales);
    salary = gong_zi + jiang_jin + yong_jin;
    printf("该工作人员的当月工资为%d\n",salary);
    return 0;
}
