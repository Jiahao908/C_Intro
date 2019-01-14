//
//  main.c
//  Week9_3
//
//  Created by Jiahao Fu on 5/7/18.
//  Copyright © 2018 Jason Fu. All rights reserved.
//

#include <stdio.h>
void link_string(char *newstring, char *link_new)
{
    int i;
    int j = sizeof(newstring);
    char *p = newstring;
    for(; *p; p++)
    {
        *p = *(newstring+j);
        j--;
    }
    link_new = newstring;
    for(; *p; p++)
    {
        *(link_new + j)= *p;
        j++;
    }
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
