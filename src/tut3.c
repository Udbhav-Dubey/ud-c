//1. For any character entered through keyboard check whether the entered character is capal letter, small letter, a digit or special symbol
#include <stdio.h>
int main (){
    char ch;
    scanf("%c",&ch);
    if (ch>='a'&& ch<='z'){
        printf("small letter\n");
    }
    else if (ch>='A'&&ch<='Z'){
        printf("capital letter\n");
    }
    else if (ch>='0' && ch <='9'){
        printf("number");
    }
    else {printf("special");}
return 0;
}
