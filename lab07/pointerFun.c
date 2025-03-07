/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
 */ 

#include<math.h>

void poly(double* coef, double* x, double* y, int* nc, int* na){
  for (int j=0;j<*na;j++){
    for (int i=0;i<*nc;i++){
      y[j] += (coef[i] * (pow(x[j],i)));
    }
  }  
}

void reverso(char* str, int* n){
  int s = *n;
  char tmpstr[s] = {};
  //make 2nd copy of string to manipulate
  for (int i=0;i<s;i++){
    tmpstr[i] = str[i];
  }
  *n = *n-1;
  //use manipulated string to swap with og string
  for (int i=0;i<s;i++) {
    str[i] = tmpstr[*n];
    *n = *n - 1;
  }
  str[s] = '\0';
}

void str_centre(char* str, int* n){
  int s = *n,space_count=0,tmpstrcount=0,ls=0,rs=0,j=0,x=0;
  char tmpstr[s] = {};
  // find number of x's, put non x's into tmp string 
  for (int i=0;i<s;i++){
    if((str[i] != 'x') && (str[i] != '\0')){
      tmpstr[tmpstrcount] = str[i];
      tmpstrcount++;
    }
    else{
    space_count++;
    }
  }
  space_count = space_count -1; //account for the null character at the end
  rs = space_count/2;
  ls = space_count - rs;
  // put required left side x's into original string
  for (;j<ls;j++){ // blank starts j from what its current value is
    str[j] = 'x';
  } 
  // put non-x's into original string
  for (;j<(ls+tmpstrcount);j++) {
    str[j] = tmpstr[x];
    x++;
  }
  // put required right side x's into original string
  for (;j<(rs+tmpstrcount+ls);j++){
    str[j] = 'x';
  }
  str[s-1] = '\0';
}

