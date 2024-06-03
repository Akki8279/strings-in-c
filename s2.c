#include <stdio.h>
int main(){
  char str[100],*p;
  p=str;
  printf("Enter the strig\n");
  scanf("%[^\n]s",str);
  while(*p!='\0')
    {
      if(*p==' ')
        printf("\b");
      else{
        if(*(p+1)=='\0'){
          continue;
        }
        printf("%c",*p);
      }
      p++;
    }
  return 0;
}
