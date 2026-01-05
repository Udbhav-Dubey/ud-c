// tax
#include <stdio.h>
int main(){
int s,t,k;
            printf("please enter your income\n");
            scanf("%d",&s);
            if (s>250000 && s<= 500000){
            k=s*5/100;
            t=s-k;
            printf("you will pay %d\n",k);
}
            if (s>500000 && s<=1000000){
            k=s*20/100;
            t=s-k;
            printf("you will pay %d\n",k);
}
            if (s>1000000){
            k=s*30/100;
            t=s-k;
            printf("you will pay %d\n",k);
}
            if (s<=250000){printf("no tax\n");}

return 0;
}
