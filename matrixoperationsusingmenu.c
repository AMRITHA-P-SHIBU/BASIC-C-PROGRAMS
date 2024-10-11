#include <stdio.h>
void add_matrices(int a[10][10],int b[10][10],int result[10][10],int row,int col){
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            result[i][j]=a[i][j]+b[i][j];
}
void subtract_matrices(int a[10][10],int b[10][10],int result[10][10],int row,int col){
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            result[i][j]=a[i][j]-b[i][j];
}
void multiply_matrices(int a[10][10],int b[10][10],int result[10][10],int row1,int col1,int col2){
    for(int i=0;i<row1;i++)
        for(int j=0;j<col2;j++){
            result[i][j]=0;
            for(int k=0;k<col1;k++)
                result[i][j]+=a[i][k]*b[k][j];
        }
}
int main(){
    int a[10][10],b[10][10],result[10][10],row1,col1,row2,col2,choice;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d",&row1,&col1);
    printf("Enter elements of first matrix:\n");
    for(int i=0;i<row1;i++)
        for(int j=0;j<col1;j++)
            scanf("%d",&a[i][j]);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d",&row2,&col2);
    printf("Enter elements of second matrix:\n");
    for(int i=0;i<row2;i++)
        for(int j=0;j<col2;j++)
            scanf("%d",&b[i][j]);
    do{
        printf("\nMenu:\n");
        printf("1.Add matrices\n");
        printf("2.Subtract matrices\n");
        printf("3.Multiply matrices\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(row1==row2&&col1==col2){
                    add_matrices(a,b,result,row1,col1);
                    printf("Result of addition:\n");
                    for(int i=0;i<row1;i++){
                        for(int j=0;j<col1;j++)
                            printf("%d ",result[i][j]);
                        printf("\n");
                    }
                }else{
                    printf("Matrices must be of the same size for addition.\n");
                }
                break;
            case 2:
                if(row1==row2&&col1==col2){
                    subtract_matrices(a,b,result,row1,col1);
                    printf("Result of subtraction:\n");
                    for(int i=0;i<row1;i++){
                        for(int j=0;j<col1;j++)
                            printf("%d ",result[i][j]);
                        printf("\n");
                    }
                }else{
                    printf("Matrices must be of the same size for subtraction.\n");
                }
                break;
            case 3:
                if(col1==row2){
                    multiply_matrices(a,b,result,row1,col1,col2);
                    printf("Result of multiplication:\n");
                    for(int i=0;i<row1;i++){
                        for(int j=0;j<col2;j++)
                            printf("%d ",result[i][j]);
                        printf("\n");
                    }
                }else{
                    printf("Number of columns in first matrix must equal number of rows in second.\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }while(choice!=4);
    return 0;
}
