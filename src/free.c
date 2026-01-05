int main (){
inr *ptr=(int *)calloc(sizeof(int),5);
for (int i=0;i<5;i++){
    printf("%d",ptr[i]);
}
free(ptr);
ptr=NULL;
}
