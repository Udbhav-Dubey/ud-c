#include <stdio.h>
union A {
    int na;
    char ca;
};
union B {
    int nb;
    union A aa;
};
int main(){
   union B bb;
   bb.nb=10;
   printf("%d\n",bb.nb);
   bb.aa.ca='v';
   printf("%c\n",bb.aa.ca);
   return 0;
}
