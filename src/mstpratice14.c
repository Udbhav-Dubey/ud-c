#include <stdio.h>
int main (){
    printf("please enter the size of 2d array\nrow: ");
    int row,col;
    scanf("%d",&row);
    printf("column: ");
    scanf("%d",&col);
    
    int arr[100][100]={0};
    printf("enter the elements of array\n");
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your matrice is\n");
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("enter the element to insert : ");
    int el;
    scanf("%d",&el);
    printf("enter where you want to insert the element\nrow : ");
    int row1,col1;
    scanf("%d",&row1);
    printf("column: ");
    scanf("%d",&col1);
    
    col1--;  // Convert to 0-based indexing
    row1--;  // Convert to 0-based indexing
    
    // Create a new array with one extra row
    int new_arr[100][100]={0};
    int new_row = row + 1;
    
    // Copy elements up to insertion row
    for (int i=0;i<row1;i++){
        for (int j=0;j<col;j++){
            new_arr[i][j] = arr[i][j];
        }
    }
    
  

    printf("your matrice is \n");
    for (int i=0;i<new_row;i++){
        for (int j=0;j<col;j++){
            printf("%d ",new_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
