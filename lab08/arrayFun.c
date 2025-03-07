/*
Name: Darion
ID: 3122890
Lab: AS04
 */

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int* init_array(const int n,  const int low, const int hgh){
  int *array;
  array = malloc(sizeof(int)*n);
  srand(time(NULL)); //set seed
  for (int i=0;i<n;i++){
    array[i] = (rand() % (hgh-low + -1) + low +1); //-1, +1 for non inclusive
  }
  return array;
}

void print_array(int* p, const int n){
  printf("\n[");
  for (int i =0 ; i < n; i++){
    if(i == (n-1)){
      printf("%i]\n", p[i]);
    }
    else{
      printf("%i, ", p[i]);
    }
  }
}

int* array_cat(int* p1, const int n1, int* p2, const int n2){
  int* array;
  array = malloc((sizeof(int) * (n1+n2))); //n1+n2 for new string
  for (int i = 0;i<n1;i++){ //from 0 to n1
    array[i] = p1[i]; 
  }
  for (int i = n1;(i<(n2+n1));i++){ //from end of n1 to n2+n1
    array[i] = p2[i-n1];
  }
  return array;  
}

void* strtrim(char* str2){
  // count for indexing no_space_string
  int count = 0, length;
  char* no_space_string;
  length = strlen(str2) + 1;
  //if malloc does not work, then equal to NULL and return NULL
  if(((no_space_string = malloc(sizeof(char)*length)) == NULL)){
    return(NULL);
  } 
  //check for spaces, if space don't add
  for (int i = 0;i<length;i++){
    if(str2[i] != ' '){
      no_space_string[count] = str2[i];
      count++;
    }
  }
  return no_space_string;
}
