//
//  main.c
//  May2021A4a
//
//  Created by Ugochukwu Ezekwem on 03/10/2021.
//  Copyright © 2021 Ugochukwu Ezekwem. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // the code rewritten. ...
    int array_nums[]={0,4,0,0,7,2,0,5};
    int array_nums_length=sizeof(array_nums)/sizeof(array_nums[0]);
    int k=0;
    for(int i=0;i<array_nums_length;i++)
     if(array_nums[i]!=0)array_nums[k++]=array_nums[i];
    for(int i=k; i<array_nums_length; i++)
        array_nums[i]=0;
    for(int i=0;i<array_nums_length;i++)
        printf("%d ", array_nums[i]);printf("\n");
}
