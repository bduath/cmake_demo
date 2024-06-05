#include<stdio.h>
#include<stdlib.h>
#include "math_func.h"

int main(int args, char *argv[])
{
    if(args < 2){
        printf("Missing argv[1]");
        return 1;
    }
    int a = atoi(argv[1]);
    printf("%d\n", add_one(a));
    return 0;
}
