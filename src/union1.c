#include <stdio.h>
union student {
    int x;
    float y;
};
int main (){
   union student s;
   s.x=10;
   s.y=2.2;
   printf("%d\n",s.x);
   printf("%f",s.y);
return 0;
}
