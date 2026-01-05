// C program to check vowel or consonant
#include <stdio.h>
int main (){
    char ch1;
    printf("C program to check vowel or consonant\n");
    scanf("%c",&ch1);
    if (ch1==65 ||ch1==69 ||ch1==73 ||ch1==79 ||ch1==85 ||ch1==97 ||ch1==101 ||ch1==105 ||ch1==111 ||ch1==117){
      printf("vowel\n");}
     else if (ch1>'a' && ch1<'z' || ch1>'A' && ch1<'Z'){printf("consonant");}
    else {printf("none\n ");}
return 0;
}
