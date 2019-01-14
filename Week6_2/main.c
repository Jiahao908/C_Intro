//
//  main.c
//  Week6_2
//
//  Created by Jiahao Fu on 4/16/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 班级：电计1401 学号：201471114

#include <stdio.h>

float growthRate(float birthRate, float deathRate){
    return birthRate - deathRate;
}

float estimatedPopulation(int popu, float b_rate, float d_rate, int year){
    float new_popu = popu;
    while (year > 0){
        new_popu = new_popu + (b_rate*new_popu)/100.0 - (d_rate*new_popu)/100.0;
        year--;
        estimatedPopulation(popu, b_rate, d_rate, year);
}
    return new_popu;
}

int main(int argc, const char * argv[]) {
    float g_rate, b_rate, d_rate;
    int year_num, population;
    printf("请输入年初的人口数量，出生率，死亡率以及年数\n");
    scanf("%d %f %f %d", &population, &b_rate, &d_rate, &year_num);
    if (b_rate<0 || d_rate<0){
        return 0;
    }
    g_rate = growthRate(b_rate, d_rate);
    printf("预计人口数量为：%f\n", estimatedPopulation(population, b_rate, d_rate, year_num));
    return 0;
}
