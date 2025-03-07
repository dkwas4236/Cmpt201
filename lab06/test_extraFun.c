/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include"extraFun.h"

int q1Helper(int, double, double);
int q2Helper(int);
int q3Helper(int, int, int, int);

int main(void){
  double a = 1, b = -1, c = 4, r1, r2;
  int test, nchar = 0, day, month, year;
  char ccase[16], type[16];
  //hard-coded strings for testing q2
  char str1[6] = {"hello"}, str2[6] = {"HELLO"}, str3[6] = {"12345"}, str4[7] = {"123aBc"}, str9[1] = {""};
  //hard-coded strings for testing q3
  char str5[11] = {"07/21/2002"}, str6[11] = {"2002/07/21"}, str7[11] = {"22//22/a71"}, str8[4] = {"123"};

//testing question 1
  //test 1 - expect to have 0 roots
  printf("\ntesting qroots with a=1, b=-1, c=4\n");
  test = qroots(&a,&b,&c,&r1,&r2);
  q1Helper(test, r1, r2);
  //test 2 - expect to have 1 root
  a = 1, b = -2, c = 1;
  printf("\ntesting qroots with a=1, b=-2, c=1\n");
  test = qroots(&a,&b,&c,&r1,&r2);
  q1Helper(test, r1, r2);
  //test 3 - expect to have 2 roots
  a = 1, b = -5, c = 6;
  printf("\ntesting qroots with a=1, b=-1, c=4\n");
  test = qroots(&a,&b,&c,&r1,&r2);
  q1Helper(test, r1, r2);

//testing question 2
  //test 1 - expect to be length 5, lowercase, alpha
  printf("\ntesting question 2 with string 'hello':");
  test = strstats(str1,&nchar, ccase, type);
  q2Helper(test);
  //test 2 - expect to be length 5, uppercase, alpha
  printf("\ntesting question 2 with string 'HELLO':");
  test = strstats(str2,&nchar, ccase, type);
  q2Helper(test);
  //test 3 - expect to be length 5, numeric
  printf("\ntesting question 2 with string '12345':");
  test = strstats(str3,&nchar, ccase, type);
  q2Helper(test);
  //test 4 - expect to be length 6, mixed, alphanum
  printf("\ntesting question 2 with string '123aBc':");
  test = strstats(str4,&nchar, ccase, type);
  q2Helper(test);
  //test 5 - expect to fail, length 0 
  printf("\ntesting question 2 with string '':");
  test = strstats(str9,&nchar, ccase, type);
  q2Helper(test);


//testing for question 3
  //test 1 - expect success
  printf("\ntesting question 3 with string '07/21/2002':");
  test = atod(str5, &day, &month, &year);
  q3Helper(test, day, month, year);
  //test 2 - expect to fail, wrong format
  printf("\ntesting question 3 with string '2002/07/21':");
  test = atod(str6, &day, &month, &year);
  q3Helper(test, day, month, year);
  //test 3 - expect to fail, alpha, multiple /
  printf("\ntesting question 3 with string '22//22/a71':");
  test = atod(str7, &day, &month, &year);
  q3Helper(test, day, month, year);
  //test 4 - expect to fail, not long enough
  printf("\ntesting question 3 with string '123':");
  test = atod(str8, &day, &month, &year);
  q3Helper(test, day, month, year);
}

// helper function for testing question 1
int q1Helper(int test,double r1,double r2){
  if(test == 2){
    printf("there are %i roots\n", test);
    printf("r1 = %f\n", r1);
    printf("r2 = %f\n", r2);
  }
  if(test == 1){
    printf("there are %i roots\n", test);
    printf("r1 = %f\n", r1);
  }
  if(test == (-1)){
    printf("there are no roots\n");
  }
  return 0;
}

//helper function for testing question 2
int q2Helper(int test){
  if(test == 1){
    printf("strstats function completed successfully\n");
  }
  else{
    printf("strstats function failed\n");
  }
  return 0;
}

//helper function for testing question 3
int q3Helper(int test,int day,int month,int year){
  if(test == 1){
    printf("\nday: %i\nmonth: %i\nyear: %i\n", day, month, year);
    printf("atod function completed successfully\n");
  }
  else{
    printf("\natod function failed\n");
  }
  return 0;
}
