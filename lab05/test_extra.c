/*
Name: Darion Kwasnitza
ID: 3122890
Lab: AS04
*/

#include<stdio.h>
#include"stringExtra.h"

int main(void){

  //estrlen
  //test1)
  printf("Testing estrlen:\nThe length of 123456789 is: %d\n",estrlen("123456789"));

  //test2)
  printf("The length of hello is: %d\n",estrlen("hello"));

  //test3)
  printf("The length of /?$ is: %d\n",estrlen("/?$"));

  //isnumeric
  //test 1)
  if(isnumeric("hello") == 1){
    printf("\nTesting isnumeric:\nhello is a number\n");
  }
  else{
    printf("\nTesting isnumeric:\nhello is not a number\n");
  }
  //test2)
  if(isnumeric("123") == 1){
    printf("123 is a number\n");
  }
  else{
    printf("123 is not a number\n");
  }
  //test3)
  if(isnumeric("1/2") == 1){
    printf("1/2 is a number\n");
  }
  else{
    printf("1/2 is not a number\n");
  }

  //strfind
  //test1)
  if(strfind("hello", 'l') == -1){
    printf("\nTesting strfind:\nThere is no occurence of l in hello\n");
  }
  else{
    printf("\nTesting strfind:\nIn hello, char l occurs first at index %i\n", strfind("hello", 'l'));
  }
  //test2)
  if(strfind("123456789", 'l') == -1){
    printf("There is no occurence of l in 123456789\n");
  }
  else{
    printf("In 123456789, char l occurs first at index %i\n", strfind("123456789", 'l'));
  }
  //test3)
  if(strfind("hello", 'g') == -1){
    printf("There is no occurence of g in hello\n");
  }
  else{
    printf("In hello, char g occurs first at index %i\n", strfind("hello", 'g'));
  }
  //test4)
  if(strfind("123456789", '7') == -1){
    printf("There is no occurence of 7 in 123456789\n");
  }
  else{
    printf("In 123456789, 7 occurs first at index %i\n", strfind("123456789", '7'));
  }

  //isfraction
  //test1)
  if(isfraction("hello") == 1){
    printf("\nTesting isfraction:\nhello is a fraction\n");
  }
  else{
    printf("\nTesting isfraction:\nhello is not a fraction\n");
  }
  //test2)
  if(isfraction("34") == 1){
    printf("34 is a fraction\n");
  }
  else{
    printf("34 is not a fraction\n");
  }
  //test3)
  if(isfraction("34/") == 1){
    printf("34/ is a fraction\n");
  }
  else{
    printf("34/ is not a fraction\n");
  }
  //test4)
  if(isfraction("3//4") == 1){
    printf("3//4 is a fraction\n");
  }
  else{
    printf("3//4 is not a fraction\n");
  }
  //test5)
  if(isfraction("3/4") == 1){
    printf("3/4 is a fraction\n");
  }
  else{
    printf("3/4 is not a fraction\n");
  }
} 
