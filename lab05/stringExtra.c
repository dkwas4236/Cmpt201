/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include"stringExtra.h"

int estrlen(char *s){
  int length =0;
  while((*s != ('\0'))){
    length++;
    s++;
  }
  return length;
}

int isnumeric(char *s){
  while((*s != ('\0'))){
    if ((*s < 48) || (*s > 58)){
      return 0;
    }
    s++;
  }  
  return 1;
}

int strfind(char *s, char c){
  int index = 0;
  while((*s != ('\0'))){
    if(*s == c){
      return index;
    }
    index++;
    s++;
  }
  return -1;
}

int isfraction(char *s){
  int slashcount = 0;
  int eslash = 0; //checks for end slash
  int len;
  len = estrlen(s);
  while((*s != ('\0'))){
    if(*s == '/'){
      slashcount++;
      if(eslash == 0 || eslash == (len-1)){
        return 0;
      }
    }
    else if((*s < 48) || (*s > 58)){
      return 0;
    }
    s++;
    eslash++;
  }
  if(slashcount == 1){
    return 1;
  }
  return 0;
}  
