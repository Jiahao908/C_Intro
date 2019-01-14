//
//  main.c
//  Week4_4
//
//  Created by Jiahao Fu on 4/2/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//  姓名：符嘉豪 学号：201471114 班级：电计1401

#include <stdio.h>
typedef int bool;
#define true 1
#define false 0


int main(int argc, const char * argv[]) {
    int a, b, c, d;
    bool t;
    for(a=1; a<=4; a++){
        for (b=1; b<=4 ; b++) {
            if(a==b){
                continue;
            }
            for(c=1; c<=4; c++){
                if(c==b || c==a){
                    continue;
                }
                d = 10-a-b-c;
                t = (((a==1)!=(b==2))&&((c==1)!=(d==3))&&((d==2)!=(a==3)));
                if(t){
                    printf("A是第%d名；\nB是第%d名；\nC是第%d名；\nD是第%d名；\n", a, b, c, d);
                }
            }
        }
        
    }
    return 0;
}
