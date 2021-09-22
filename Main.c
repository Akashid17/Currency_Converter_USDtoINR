
#include<stdio.h>

float DollarToINR(float fNo)
{
    if(fNo < 0)
    {
        fNo = -fNo;
    }

    return(fNo*70);
}

int main()
{
    float fValue = 0;
    float fAns = 0;

    printf("Enter Amount in USD\n");
    scanf("%f",&fValue);

    fAns = DollarToINR(fValue);

    printf("Dollar to INR = %.2f\n",fAns);

    return 0;
}