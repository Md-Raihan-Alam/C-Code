#include<stdio.h>
int main()
{
    //i++= first will be print then increment
    //++i= first increment then print
    //same for i-- / --i
    int i=1;
    int l;
    printf("Choose a number between 1 to 3:");
    scanf("%d",&l);
    printf("\n");
    for(int j=0;j<=10;j++) printf("%d ",j);
    printf("\n");
    while(i<=10)
    {
        printf("%d ",i);
        if(i==5) break;
        i++;
    }
        int k=10;
    printf("\n");
    do{
        k++;
        if(k==15) continue;
        else printf("%d ",k);
    }while(k<=20);
    printf("\n");
    switch(l){
    case 1:
    printf("Booringgg");
    break;
    case 2:
    printf("why did not you type 1");
    break;
    case 3:
    printf("What a person!!!");
    break;
    default:
    printf("\nI told you to choose between 1 to 3.");
    break;
    }
    return 0;
}
