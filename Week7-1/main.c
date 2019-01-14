//
//  main.c
//  Week7-1
//
//  Created by Jiahao Fu on 4/23/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//

#include <stdio.h>
#define MAX 8

int main(int argc, const char * argv[]) {
    float score[MAX];
    int i, max, min;
    for(i=0, max=0, min=0;i<MAX;i++)
    {
        scanf("%f", &score[i]);
        if (score[i]>=score[max])
        {
            max = i;
        }
        if(score[i]<=score[min])
        {
            min = i;
        }
    }
    float total = 0;
    for(int j=0;j<MAX;j++)
    {
        if(j != max && j!= min)
        {
            total+=score[j];
        }
    }
    printf("该学生得分为%f", total);
    return 0;
}
