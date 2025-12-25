#include<stdio.h>
int main()
{

    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){


        for(col=0;col<row;col++){

            printf("%d",row );

            //fun fact,here the first iteration will get dismissed
            //because the condition is col is less than row
            //but for 0 row it is not less than 0 column
            //so that one gets dismissed and starts from 1 row printing

        }printf("\n");
    }






}
