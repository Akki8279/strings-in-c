#include <stdio.h>
int main() {
    char str[100],*p;
    int c = 0;
    p = str;
    p=str;
    printf("Enter the strig\n");
    scanf("%[^\n]s",str); //scanset is used to scan the string with spaces
    while(*p!='\0'){
        if(*p==' '){
            printf("\n");
            for(int i=0;i<c;i++)
            printf(" ");
        }
        else {

            printf("%c",*p);
            c++;
        }
        p++;
    }
    return 0;
}
