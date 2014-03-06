/*
//  array_search.c
//  
//
//  Created by Valentin Emiya on 13/02/13.
//  Copyright (c) 2013 CNRS LIF, Aix-Marseille Univ. All rights reserved.
*/

#include <stdio.h>

int search(double *t, int N, double a){
   int i;
   for(i=0;i<N;i++)
   {
   if(*(t+i)==a)
      {
      return i;
      }      
    }
   return -1;
}

int main(void){
    double t_test[] = {1.2, 5.45, -1, 100};
    printf("%d\n", search(t_test, 4, 5.45)); /* doit afficher 1 */
    printf("%d\n", search(t_test, 4, 100)); /* doit afficher 3 */
    printf("%d\n", search(t_test, 4, 0)); /* doit afficher -1 */
    return 0 ;
}
