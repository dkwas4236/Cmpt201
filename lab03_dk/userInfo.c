/* Name: Darion Kwasnitza
 * Lab: AS04
 * ID: 3122890
 */

#include<stdio.h>
#include<string.h>
#define DEBUG 1 //true

int main(void){

//definitions  
  FILE *fp;
  int SMAX = 40;
  char username[SMAX];
  char prefered_language[SMAX];
  char prefered_editor[SMAX];
  char prefered_compiler[SMAX];
  char response;
  char *token;

//check if file present
  fp = fopen(".userinforc", "r");

//if file not present, write info to it
  if(fp == NULL){
    fp = fopen(".userinforc", "w");
    //get user info
    printf("\nPlease enter your username               : ");
    scanf("%s",username);
    printf("Please enter your prefered Language [EN] : ");
    scanf("%s",prefered_language);
    printf("Please enter your prefered Editor [ed]   : ");
    scanf("%s",prefered_editor);
    printf("Please enter your prefered Compiler [gcc]: ");
    scanf("%s",prefered_compiler);
    printf("\nThank you. Your information has now been stored.\n");
    //write the info in the file
    fprintf(fp, "Username=%s\n", username);
    fprintf(fp, "Language=%s\n", prefered_language);
    fprintf(fp, "Editor=%s\n", prefered_editor);
    fprintf(fp, "Compiler=%s\n", prefered_compiler);
    fclose(fp);
  }
  //if the file is present ask if user wants to modify
  else{
    printf("There is a configuration file. Would you like to modify it [y/n]?: ");
    scanf("%c", &response);
    //check for yes, and if yes write and save to file
 
    if((response == 'y')||(response == 'Y')){  
    // if debug is defined
    #ifdef DEBUG
      
      printf("\nPlease enter your username               : ");
      scanf("%s",username);
      printf("Please enter your prefered Language [EN] : ");
      scanf("%s",prefered_language);
      printf("Please enter your prefered Editor [ed]   : ");
      scanf("%s",prefered_editor);
      printf("Please enter your prefered Compiler [gcc]: ");
      scanf("%s",prefered_compiler);
      printf("\nDebugging information (no information stored):\n");
    
      printf("username=%s\n", username);
      printf("prefered_language=%s\n", prefered_language);
      printf("prefered_editor=%s\n", prefered_editor);
      printf("prefered_compiler=%s\n", prefered_compiler);

    #else
      fp = fopen(".userinforc", "w");

      printf("\nPlease enter your username               : ");
      scanf("%s",username);
      printf("Please enter your prefered Language [EN] : ");
      scanf("%s",prefered_language);
      printf("Please enter your prefered Editor [ed]   : ");
      scanf("%s",prefered_editor);
      printf("Please enter your prefered Compiler [gcc]: ");
      scanf("%s",prefered_compiler);
      printf("\nThank you. Your information has now been stored.\n");
    
      fprintf(fp, "Username=%s\n", username);
      fprintf(fp, "Language=%s\n", prefered_language);
      fprintf(fp, "Editor=%s\n", prefered_editor);
      fprintf(fp, "Compiler=%s\n", prefered_compiler);
      fclose(fp);
    #endif
    }
    //if answer is no
    else{
      printf("\nThe current configuration is:\n");
      //tokenize username
      fscanf(fp, "%s",username);
      token = strtok(username, "=");
      token = strtok(NULL, "=");
      printf("User name: %s\n", token);
      //tokenzie prefered_language
      fscanf(fp, "%s", prefered_language);
      token = strtok(prefered_language, "=");
      token = strtok(NULL, "=");
      printf("Language : %s\n", token);
      //tokenize prefered_editor
      fscanf(fp, "%s", prefered_editor);
      token = strtok(prefered_editor, "=");
      token = strtok(NULL, "=");
      printf("Editor   : %s\n", token);
      //tokenize prefered_compiler
      fscanf(fp, "%s", prefered_compiler);
      token = strtok(prefered_compiler, "=");
      token = strtok(NULL, "=");
      printf("Compiler : %s\n", token);
    }
  }
  return 0;
}
