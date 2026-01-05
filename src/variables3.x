#include <stdio.h>

    void function (){
         int x=10;
         static int y=69;
        
      x = x + 10;
      y = y + 10;

        printf("\tLocal: %d\n\t Static: %d\n",x , y);


}

int main (){

    printf("First call\n");
    function();
    printf("Second call\n");
    function();
    printf("Third call\n");
    function();
    return 0;


}
