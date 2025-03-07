/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include"pointerFun.h"

int help_q1v1(int, double*, double*);
int help_q1v2(int, double*);

int main(void){
  int nc1 = 2, na1 = 4, nc2 = 3, na2 = 3, n1 = 1, n2 = 8, n3 = 9, n01 = 9, n02 = 10;
  double xdata1[] = {1.0f, 2.0f, 3.0f, 4.0f}, coef1[] = {1.0f, 2.0f}, y1[4];
  double xdata2[] = {1.0f, 2.0f, 3.0f}, coef2[] = {3.0f, 4.0f, 1.0f}, y2[3];
  char str1[] = "a", str2[] = "computer", str3[] = "123456789";
  char str01[9] = "The", str02[10] = "xxxxxxThe"; 

//testing question 1 
  //test 1
  printf("\nEquation: y = 1.0 + 2.0x\n");
  poly(coef1, xdata1, y1, &nc1, &na1);
  help_q1v1(na1, xdata1, y1);
  //test 2
  printf("\nEquation: y = 3.0 + 4.0x + 1.0x^2\n");
  poly(coef2, xdata2, y2, &nc2, &na2);
  help_q1v1(na2, xdata2, y2);

//testing question 2
  //test 1
  reverso(str1, &n1);
  printf("\nThe reverse of 'a' is: %s\n",str1);
  //test 2
  reverso(str2, &n2);
  printf("The reverse of 'computer' is: %s\n", str2);
  //test 3
  reverso(str3, &n3);
  printf("The reverse of '123456789' is: %s\n", str3);

//testing question 3 
  //test 1
  str_centre(str01, &n01);
  printf("\ntesting q3 with string 'The' of length 9:\n");
  printf("The Title is: %s\n", str01);
  //test 2
  str_centre(str02, &n02);
  printf("\ntesting q3 with string 'xxxxxxThe' of length 10:\n");
  printf("The Title is: %s\n", str02);
}

// helper function for printing question 1 tests:
int help_q1v1(int na, double* x, double* y){
  // print x values:
  printf("x values: [ ");
  help_q1v2(na, x);
  // print y values:
  printf("y values: [ ");
  help_q1v2(na, y);
  return 0;
}

// making sure for loop is not repeated in help_q1v1:
int help_q1v2(int na, double* z){
  for (int i = 0; i<na ;i++){
    if((i) == (na-1)){
      printf("%.1f ", z[i]);
    }
    else{
      printf("%.1f, ", z[i]);
    }
  }
  printf("]\n");
  return 0;
}

