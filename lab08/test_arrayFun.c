/*
Name: Darion
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include"arrayFun.h"
#include<stdlib.h>

int main(void){
  int *p, *p3, *t, *t3;
  int p1[] = {1,2}, p2[] = {3,4,5,6}, t1[] = {1,2,3}, t2[] = {2,1};
  char* c = "   hello   ", *c1 = "  computer ";
  char* cpointer, *cpointer1;
//testing question 1 and 2(to print array):
  //test 1
  printf("\ntesting question 1 with n = 7, low = 1, high = 10");
  p = init_array(7,1,10);
  print_array(p, 7);
  //test2
  printf("\ntesting question 1 with n = 5, low = 3, high = 5");
  t = init_array(5,3,5);
  print_array(t, 5);
//testing question 3 and 2(to print array):
  //test 1
  printf("\ntesting question 3 with p1 = [1,2] and p2 = [3,4,5,6]:");
  p3 = array_cat(p1,2, p2, 4);
  print_array(p3, 6);
  //test2
  printf("\ntesting question 3 with p1 = [1,2,3] and p2 = [2,1]:");
  t3 = array_cat(t1,3, t2, 2);
  print_array(t3, 5);
//testing question 4:
  //test 1
  printf("\ntesting question 4 with '   hello   '");
  cpointer = strtrim(c);
  printf("\n%s\n", cpointer);
  //test 2 
  printf("\ntesting question 4 with '  computer '");
  cpointer1 = strtrim(c1);
  printf("\n%s\n", cpointer1);
//freeing memory and setting dangling pointers to NULL
  free(cpointer1);
  free(cpointer);
  free(t3);
  free(p);
  free(p3);
  free(t);
  t=NULL, p=NULL, p3=NULL, t3=NULL, cpointer=NULL, cpointer1=NULL;
}

