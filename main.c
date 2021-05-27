#include"header.h"
#include<stdio.h>
int main()
{
    printf("select the operation want perfom\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
        int a,b,q;
        printf("enter and b\n");
        scanf("%d%d",&a,&b);
        q=add(a,b);
        printf("%d",q);
        break;
        }
        case 2:
        {
        int x,y;
        printf("enter and b\n");
        scanf("%d%d",&x,&y);
        int sub(x,y);
        break;
        }
        default:
        printf("invalid option");
    }
}