#include<stdio.h>
int main()
{
    int three_d[2][3][3];
    int i,j,k;
    printf("Enter number:");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                scanf("%d",&three_d[i][j][k]);
            }
        }
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d",three_d[i][j][k]);
            }
            printf("\n");
        }
        printf("\nNext block\n");
    }
    return 0;
}
