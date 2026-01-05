#include <stdio.h>
enum week {mon,tue,wed,thur,fri,sat,sun};
enum year {jan,feb,march,apr,may,june,july,aug,sept,oct,nov,dec};
int main(){
    enum week day ;
    day = wed;
    printf("%d\n",day);
    enum year month ;
    for (int i=jan;i<=dec;i++){
        printf("%d\n",i);
    }
    return 0;
}
