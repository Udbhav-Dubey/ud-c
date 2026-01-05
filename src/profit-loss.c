#include <stdio.h>
int main (){
int cp,sp;
double profit,loss;
printf("please enter the cost price of the product\n");
scanf("%d",&cp);
printf("please enter the selling  price of the product\n");
scanf("%d",&sp);
if (sp>cp){
profit = sp - cp ;
profit = (profit / cp) * 100 ;
printf("profit is %f\n",profit);
}
if (cp>sp){
loss = cp - sp ;
loss = (loss /cp )*100;
printf("loss is %f\n",loss);
}

return 0;
}
