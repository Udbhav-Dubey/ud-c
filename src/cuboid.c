#include <stdio.h>

void function (){

     int x,y,z;
     printf("enter l,b,h respectively \n");
     scanf("%d %d %d " , &x,&y,&z);
     int P;
     P= x*y+y*z+z*x;
     P= P+P;
     printf ("here you go %d ",P);
}

int main (){
    function ();
    return 0;


}
