#include <stdio.h>
    struct ID {
        int age ;
        char name[50];
        double id_numb;
    };
int main(){
	struct ID s1={31,"aswin",10.304};
	struct ID s2=s1;
printf("%d %f %s\n",s2.age,s2.id_numb,s2.name);
    return 0;

}
