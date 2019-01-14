//
//  main.c
//  Week6_1
//
//  Created by Jiahao Fu on 4/16/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 班级：电计1401 学号：201471114

#include <stdio.h>

float family(int num){
    float total;
    total = 4.5 + 20.5 + 7.5*num;
    return total;
}

float business(int num, int node){
    float total;
    if (node <= 0){
        printf("节点数必须为正数！");
        return 0;
    }
    else if (node > 10){
        total = 15 + 50*num + 75 + 5*(node-10);
        return total;
    }
    else{
        total = 15 + 50*num + 75;
        return total;
    }
    
}
int main(int argc, const char * argv[]) {
    int id, number, node_number;
    char c;
    printf("请输入客户账号，客户代码（家庭客户请输入R，商业客户请输入B），用户组用的频道数量。(各个信息之间请用空格隔开)\n");
    scanf("%d %c %d", &id, &c, &number);
    if (c == 'B'){
        printf("请提供节点数目\n");
        scanf("%d", &node_number);
    }
    if (c == 'R'){
        printf("客户账号为%d，账单总额为%f\n", id, family(number));
    }
    else if (c == 'B'){
        printf("客户账号为%d，账单总额为%f\n", id, business(number, node_number));
    }
    return 0;
}
