#include<stdio.h>
int main()
{
    int NUMBER,HOUR;
    float SPH,SALARY;
    scanf("%d",&NUMBER);
    scanf("%d",&HOUR);
    scanf("%f",&SPH);
    printf("NUMBER = %d\n",NUMBER);
    SALARY=HOUR*SPH;
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
