#include <stdio.h>

int main() {
  char str[100],*p;
  p=str;
  printf("Enter the strig\n");
  scanf("%[^\n]s",str); //scanset is used to scan the string with spaces
  while(*p!='\0'){
    if(*p==' '){
      printf("\n");
    }
    else {
      printf("%c",*p);
    }
    *p++;
  }
  return 0;
}
