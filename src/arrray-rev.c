#include <stdio.h>
int main (){
    int n;
    printf("please enter the length of a array\n");
    scanf("%d",&n);
    int boy[n];
    for(int i=0;i<n;i++){
        printf("value for index %d\n",i);
        scanf("%d",&boy[i]);
    }

    for(int i=0;i<n;i++){
    printf("%d    ",boy[i]);
    }
    printf("\n");
// now reversing it
int boi[n];
int i=n-1,k=0;
 /*(;i>=0){
    boi[k]=boy[i];
    i=i-1;
    k++;
    }*/
for (int i=n-1;i>=0;i=i-1){
    boi[(n-i-1)]=boy[i];
    k++;
}
for(int u=0;u<n;u++){
printf("%d    ",boi[u]);
}
printf("\n");

return 0;
}
