// to find pass fail in 3 subjects
#include <stdio.h>
int main (){
int p,c,m;
float t;
            printf("please enter your pcm marks out of 100 respectfully\n");
            scanf("%d%d%d",&p,&c,&m);
            t= p+c+m ;
            t= t*100/300;
            if(p>=33){
                        printf("you passed physics \n");}
            else {printf("you failed physics\n");}
            if(c>=33){
                        printf("you passed chemisty\n");}
            else {printf("you failed chemisty\n");}
            if(m>=33){
                        printf("you pass maths\n");}
            else {printf("you failed maths\n");}
            if(t>=40){
                        printf("you passed with %f\n",t);}
            else {printf("you failed with %f\n",t);}


return 0;
}
