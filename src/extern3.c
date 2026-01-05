#include <stdio.h>
extern int ext_var;
    void printext(){
        printf("%d",ext_var);
    }
int main (){
        printext();
        return 0;
}
