// Write a C program to input amount from user and print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
#include <stdio.h>
int main (){
int amount,note500,note100,note50,note20,note10,note5,note2,note1;
printf("please enter the amount\n");
scanf("%d",&amount);
if (amount >= 500){
note500 = amount/500;
amount -= 500 * note500 ;
printf("500 : %d\n",note500);
}
if (amount >= 100){
note100 = amount/100;
amount -= 100 * note100 ;
printf("100 : %d\n",note100);
}
if (amount >= 50){
note50 = amount/50;
amount -= 50 * note50 ;
printf("50 : %d\n",note50);
}
if (amount >= 20){
note20 = amount/20;
amount -= 20* note20 ;
printf("20 : %d\n",note20);
}
if (amount >= 10){
note10 = amount/10;
amount -= 10 * note10 ;
printf("10 : %d\n",note10);
}
if (amount >= 5){
note5 = amount/5;
amount -= 5 * note5 ;
printf("5 : %d\n",note5);
}
if (amount >= 2){
note2 = amount/2;
amount -= 2 * note2 ;
printf("2 : %d\n",note2);
}
if (amount >= 1){
note1 = amount;
printf("1 : %d\n",note1);
}
return 0;
}
