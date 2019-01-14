//
//  main.c
//  Week4_2
//
//  Created by Jiahao Fu on 4/2/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401

#include <stdio.h>

void change(int money){
    int half_dollar, quarter, dime, nickel, cent;
    half_dollar = money / 50;
    quarter = (money - half_dollar * 50)/25;
    dime = (money - half_dollar * 50 - quarter * 25)/10;
    nickel = (money - half_dollar * 50 - quarter * 25 - dime * 10)/5;
    cent = money - half_dollar * 50 - quarter * 25 - dime * 10 - nickel * 5;
    printf("此金额一共是%d个50美分，%d个25美分，%d个10美分，%d个5美分，%d个1美分\n", half_dollar, quarter, dime, nickel, cent);
}
int main(int argc, const char * argv[]) {
    int num;
    printf("请输入金额数：\n");
    scanf("%d", &num);
    if (num <= 0){
        printf("输入有误，金额数必须大于0! \n");
        return 0;
    }
    else{
        change(num);
    }
    return 0;
}
