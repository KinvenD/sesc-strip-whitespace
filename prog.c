#include <stdio.h>
//#include <math.h>
#include <string.h>



char* deletechar(char* str,int b){
    char newstr[1001];
    for(int i = b; i < strlen(str); i++){
        str[i] = (int)str[i+1];
    }    
  return str;
}


int main() {
  int z = 0;
  char str[1001];
  scanf("%s", str);
  int i = 0;
while(str[i]!='\0'){
  printf("%c", str[i]);
  while(str[i] == ' ' && str[i]!='\0'){
    printf("sasdcasdc");
    deletechar(str,i);
    printf("sasdcasdc");
  }
  while(str[i] != ' ' && str[i]!='\0'){
    i++;
  }
  i++;
}
  //printf("%s\n%d\n", str,i);
  return 0;
}
