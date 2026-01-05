#include <stdio.h>
int main (){
    auto int view (); // declare kardiya
    view  (); // call kardiya
    printf("Main\n");

    int view (){
        printf("View\n");
        return 1;
    }

    printf("GEEKS\n");
    return 0;
}
