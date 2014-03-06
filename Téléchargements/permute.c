/*
//  permute.c
//  
//
//  Created by Valentin Emiya on 13/02/13.
//  Copyright (c) 2013 CNRS LIF, Aix-Marseille Univ. All rights reserved.
*/


#include <stdio.h>

void permute(int *pa, int *pb){
    int c;
    c=*pa;
    *pa=*pb;
    *pb=c;
   
    
}

int main(){
    int a = 1, b = 2;
    printf("a=%d, b=%d\n", a, b);
    permute(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
