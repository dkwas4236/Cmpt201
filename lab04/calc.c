/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<uchar.h>

int main(int argc, char *argv[]){
  
  int answer;
  float answerf;
  int val1;
  int val2 = 0;
  float val1f;

// addition
  if(strcmp("add", argv[1]) == 0){
    if(argc != 4){
      printf("error add requires two operands\n");
    }
    else{
      val1 = atoi(argv[2]);
      val2 = atoi(argv[3]);
      answer = (val1 + val2);
      printf("%i+%i = %i\n", val1, val2, answer);
    }
  }

// subtraction
  else if(strcmp("sub", argv[1]) == 0){
    if(argc != 4){
      printf("error sub requires two operands\n");
    }
    else{
      val1 = atoi(argv[2]);
      val2 = atoi(argv[3]);
      answer = (val1 - val2);
      printf("%i-%i = %i\n", val1, val2, answer);
    }
  }

// multiplication
  else if(strcmp("mul", argv[1]) == 0){
    if(argc != 4){
      printf("error mul requires two operands\n");
    }
    else{
      val1 = atoi(argv[2]);
      val2 = atoi(argv[3]);
      answer = (val1 * val2);
      printf("%i*%i = %i\n", val1, val2, answer);
    }
  }

// division
  else if(strcmp("div", argv[1]) == 0){
    if(argc != 4){
      printf("error div requires two operands\n");
    }
    else{
      val1 = atoi(argv[2]);
      val2 = atoi(argv[3]);
      // if division by 0, 
      // note: scii character for infinity (221e) on my computer
      if(val2 == 0){
        printf("%i/%i = \u221e\n",val1, val2);
      }
      else{
      val1f = val1;
      answerf = (val1f) / (val2);
      printf("%i/%i = %f\n", val1, val2, answerf);
      }
    }
  }

// summation
  else if(strcmp("sum", argv[1]) == 0){
    if(argc < 3){
      printf("error sum requires at least two operands\n");
    }
    // calculate sum
    else{
      for(int i=0;i<argc;i++){
        val1 = atoi((argv[i]));
        val2 = val2 + val1;
      }
    // print sum
      printf("sum(");
      for(int i =2; i<argc; i++){
        if(i!=(argc-1)){
          printf("%s,",argv[i]);
        }
        else{
          printf("%s) = %i\n",argv[i], val2);
        } 
      }
    }        
  }

// unknown command
  else{
    printf("error unknown command: %s\n", argv[1]);
  }
  return 0;
}
