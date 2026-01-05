#include <stdio.h>

    int main (){

       char a = 'a';
       char b = 'b';
       char c = 'c';

  /*  char const *ptr = &a;
    printf ("awd %c\n",*ptr);
    ptr =&b ;
    printf ("awd %c\n",*ptr); */

    char *const ptr = &c;
    printf("%c\n",ptr); 
    ptr='d';
    printf("%c\n",ptr);    



return 0;
}   
