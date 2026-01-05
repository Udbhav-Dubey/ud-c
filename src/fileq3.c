//C program to write even, odd and prime numbers to separate file
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool prime(int num){
    if (num<2)return false;
        int flag =0;
        for (int i=2;i<=sqrt(num);i++){
            if (num%i==0){return false;}
        }
        return true;
}
bool even (int nume){
    if (nume%2==0){return true;}
    else return false;
}
int main (){
    FILE* fptr=fopen("fileq3.txt","r");
    FILE* fptr_even=fopen("fileq3_even.txt","w");
    FILE* fptr_odd=fopen("fileq3_odd.txt","w");
    FILE* fptr_prime=fopen("fileq3_prime.txt","w");
    if (fptr==NULL||fptr_even==NULL||fptr_odd==NULL||fptr_prime==NULL){
        printf("nope");
    }
    else {
        int num;
        while(fscanf(fptr,"%d",&num)==1){
        if (prime(num)==1){fprintf(fptr_prime,"%d\t",num);}
        else if (even(num)==1){fprintf(fptr_even,"%d\t",num);}
        else {fprintf(fptr_odd,"%d\t",num);}
        }}
    fclose (fptr);
    fclose(fptr_even);
    fclose(fptr_odd);
    fclose(fptr_prime);
return 0;
}
