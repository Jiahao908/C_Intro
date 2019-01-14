//
//  main.c
//  Week7_2
//
//  Created by Jiahao Fu on 4/23/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//

#include <stdio.h>
#define MAX 5

void reverse(int num[]){
    
}
int main(int argc, const char * argv[]) {
    int a[MAX];
    int num, i, k=0;
    printf("请输入一个正整数：");
    scanf("%d\n",&num);
    while (num>0)
    {
        a[k++] = num%10;
        num /= 10;
    }
    for(i=0;i<k;i++)
        printf("%d\n", a[i]);
    return 0;
}
