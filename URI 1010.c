#include<stdio.h>
int main()
{
    int PRODUCTONE,ONENUMBER,PRODUCTTWO,TWONUMBER;
    float ONEP,TWOP,VALORAPAGAR;
    scanf("%d",&PRODUCTONE);
    scanf("%d",&ONENUMBER);
    scanf("%f",&ONEP);
    scanf("%d",&PRODUCTTWO);
    scanf("%d",&TWONUMBER);
    scanf("%f",&TWOP);
    VALORAPAGAR=(ONENUMBER*ONEP)+(TWONUMBER*TWOP);
    printf("VALOR A PAGAR: R$ %.2f\n",VALORAPAGAR);
    return 0;
}
