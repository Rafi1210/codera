#include<stdio.h>
#include<math.h>
int main()
{
    float X,Y,Z,num1,num2,num3;
    printf("Enter the three numbers :\n");
    scanf("%f%f%f" , &X , &Y , &Z);

    if(X<=Y && X<=Z)
    {
        num1 = X;
        if(Y<=Z)
        {
            num2 = Y;
            num3 = Z;
        }
        else {
            num2 = Z;
            num3 = Y;
        }
    }
       else if(Y<=X && Y<=Z)
    {
        num1 = Y;
        if(X<=Z)
        {
            num2 = X;
            num3 = Z;
        }
        else{
            num2 = Z;
            num3 = X;
        }
    }
    else {
        num1 = Z;
        if(X<=Y)
        {
            num2 = X;
            num3 = Y;
        }
        else{
            num2 = Y;
            num3 = X;
        }
    }
    printf("The ascending value is:%.2f %.2f %.2f" , num1 , num2 , num3);

    return 0;
}
