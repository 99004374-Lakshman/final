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
        int x,y,w;
        printf("enter and b\n");
        scanf("%d%d",&x,&y);
        w=sub(x,y);
        printf("%d",w);
        break;
        }
        default:
        printf("invalid option");
    }
}