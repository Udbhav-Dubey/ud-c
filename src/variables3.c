#include <stdio.h>
void function (){
    static int x = 10;
    static float z=1.00001;
    static int y=7;
    int a,b;
   x= x * x;
   y=y*y;
   z=z+z+z+z;
   b=a+a ;

   

    printf ("\tpehla: %d\n\t doosra: %d\n\t teesra: %f\n\t   ", x,y,z);
    scanf ("%d",&a);
    printf ("\t lelo bete %d",b);


}


int main ()
{
    function ();
    return 0;

} 
