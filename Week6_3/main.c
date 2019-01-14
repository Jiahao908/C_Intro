//
//  main.c
//  Week6_3
//
//  Created by Jiahao Fu on 4/16/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 班级：电计1401 学号：201471114

#include <stdio.h>

float cal_func1(int i, int j){
    int n,total;
    n = 0;
    total = 1;
    while (n <= j){
        total *= i;
        n++;
    }
    return total;
}
float cal_func2(int a){
    float total = 0;
    for(int n=0;n < 9;n++){
        total = total + (cal_func1(a,2*n+1))/(2*n+1);
    }
    return total;
}
int main(int argc, const char * argv[]) {
    printf("%f\n",cal_func2(1));
    printf("%f\n",cal_func2(2));
    printf("%f\n",cal_func2(3));
    printf("%f\n",cal_func2(4));
    return 0;
}
