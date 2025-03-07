/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include"extraFun.h"

int qroots(const double* a, const double* b, const double* c, double* r1, double* r2){
  int roots;
  roots = (pow(*b, 2)) - (4 *(*a) *(*c));
  if(roots == 0){ //r1 and r2 should be the same
    *r1 = ((-*b) + (sqrt((pow(*b,2)) - (4*(*a)*(*c))))) / (2**a);
    *r2 = (((-1)*(*b)) - (sqrt(pow(*b,2) - (4*(*a)*(*c))))) / (2*(*a));
    return 1;
  }
  else if(roots > 0){
    *r1 = (((-1)*(*b)) + (sqrt(pow(*b,2) - (4*(*a)*(*c))))) / (2*(*a));
    *r2 = (((-1)*(*b)) - (sqrt(pow(*b,2) - (4*(*a)*(*c))))) / (2*(*a));
    return 2;
  }
  else{
    return (-1);
  } 
}

int strstats(const char* str, int* nchar, char* ccase, char* type){
  *nchar = strlen(str);
  printf("\nthis string has length of %i\n", *nchar);
  if(*nchar == 0){
    return 0; // fail
  }
  *ccase = determineCase(str, ccase, nchar);
  *type = determineType(str, type, nchar);
  if(*ccase == 0 || *type == 0){
    return 0; // fail
  }
  return 1; //success
}

int determineCase(const char* str, char* ccase, int* nchar){
  int upper = 0, lower = 0;
  for (int i=0;i<*nchar;i++){
    if(islower(str[i])){
      lower ++;
    }
    else if(isupper(str[i])){
      upper ++;
    }
  }  
  //check for how many uppercase and lowercase  
  if((lower > 0) && (upper == 0)){
      printf("this string is lowercase\n");
      return 1;
  }
  if((lower == 0) && (upper > 0)){
      printf("this string is uppercase\n");
      return 1;
  }
  if((lower > 0) && (upper > 0)){
      printf("this string is mixed\n");
      return 1;
    }
  else{
    printf("this string does not contain letters\n");
    return 1;
  }
  return 0;
}

int determineType(const char* str, char* type, int* nchar){
  int alpha = 0, numeric = 0, other = 0;
  for (int i=0;i<*nchar;i++){
    if(isalpha(str[i])){
      alpha ++;
    }
    else if(isdigit(str[i])){
      numeric ++;
    }
    else{
      other ++;
    }
  }  
  //check for types in the string  
  if((alpha > 0) && (numeric == 0) && (other == 0)){
      printf("this string is of type alpha\n");
      return 1;
  }
  if((alpha == 0) && (numeric > 0) && (other == 0)){
      printf("this string is of type numeric\n");
      return 1;
  }
  if((alpha > 0) && (numeric > 0) && (other == 0)){
      printf("this string is of type alphanum\n");
      return 1;
  }
  if(other > 0){
    printf("this string is of type other\n");
    return 1;
  }
  return 0;  
}

int atod(const char* str, int* day, int* month, int* year){
  int length, slashcount = 0;
  char sday[3] = {str[3], str[4]};
  char smonth[3] = {str[0], str[1]};
  char syear[5] = {str[6], str[7], str[8], str[9]};
  length = strlen(str);
  if(length != 10){
    return 0;
  }
  for (int i = 0;i<length;i++){  
    if(isdigit(str[i]) == 0){
      if(str[i] != '/'){
        return 0;
      }
      else{
        slashcount++;
      }
      if(i != 2){
        if(i != 5){
          return 0;
        } 
      } 
    }
  }
  if(slashcount == 2){
    *day = atoi(sday);
    *month = atoi(smonth);
    *year = atoi(syear); 
    return 1;
  }
  else{
    return 0;
  }
}
