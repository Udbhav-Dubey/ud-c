// Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
#include <stdio.h>
int main (){
int amount,fh,fhr,hh,hhr,f,fr,tt,ttr,t,tr,five,fiver,two,twor,one,oner; // fh=500 note
printf("enter the amount\n");
scanf("%d",&amount);
if (amount > 500 ){
fh = amount /500 ;
fhr = amount % 500 ;
printf("500 : %d\n",fh);
if (fhr > 100){
hh = fhr / 100 ;
hhr = fhr % 100 ;
printf("100 : %d\n",hh);
if (hh > 50){
f = hh /50;
fr = hh % 50 ;
printf("50 : %d\n",f);
if (fr>20){
tt= fr/20;
ttr= fr%20;
printf("20: %d\n",tt);
if (ttr >10 ){
t= ttr /10;
tr= tr%20;
printf("10 : %d\n",t);
if (tr>5){
five = tr / 5;
fiver = tr % 5 ;
printf("5 : %d\n",five);
if (fiver>2){
two = fiver / 2;
twor = fiver %2;
printf("2 : %d\n",two);
if (twor > 1){
one = twor / 1;
oner = twor % 1;
printf("1 : %d\n",one);




}

}
}
}

}
}

}
}

return 0;
}
