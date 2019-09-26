#include <stdio.h>

#include <math.h>

#define PI 3.14159265


float sine(float x)

{

return (sin (x*PI/180));

}

float cosine(float x)

 {

return (cos (x*PI/180));

}

float tangent(float x)

{

return (tan(x*PI/180));

}

float cosec(float x)

{

return (1/sin(x*PI/180));

}

float sec(float x)

{

return (1/cos(x*PI/180));

}

 float cot(float x)

 {

return (1/tan(x*PI/180));

}

 float logten(float x)

{

return (log10(x));

}

 float squareroot(float x)

 {

return (sqrt(x));

}

float cuberoot(float x)

 {

return (cbrt(x));

}

float exponent(float x)

   {

  return(exp(x));

}

float power(float x, float y)

{

return (pow(x,y));

}

float addition(int arr[],int x)

{

    int i,a=0;

    for (i=1;i<=x;i++)

        a = a+arr[i];

    return a;

}

float subtraction(float x, float y)

{

return (x-y);

}

float multiplication(int arr[],int x)

{

    int i,a=1;

    for (i=1;i<=x;i++)

        a = a*arr[i];

    return a;

}

float division(float x, float y)

{

return (x/y);

}

float modulo(float x, float y)

{

return (fmodf(x,y));

}







 int main()

  {

  int n;

    float x,y,answer;
	
    do

    {

   printf("What do you want to do?\n\n");

    printf("1.  Sin\n2.  Cos \n3.  Tan \n4.  Cosec \n5.  Sec \n6.  Cot \n7.  1og10 \n8.  Square Root\n9.  Cube Root\n10. Exponent \n11. Power x^y \n12. Addition \n13. Subtraction \n14. Multiplication \n15. Division \n16. Modulo\n\n\nEnter 30 to exit\n\n\n");

    scanf ("%d",&n);

    if (n<11 && n>0)

    {

    printf("\n What is x?\n ");

    scanf("%f",&x);

    switch (n)

    {#include <stdio.h>

#include <math.h>

#define PI 3.14159265


float sine(float x)

{

return (sin (x*PI/180));

}

float cosine(float x)

 {

return (cos (x*PI/180));

}

float tangent(float x)

{

return (tan(x*PI/180));

}

float cosec(float x)

{

return (1/sin(x*PI/180));

}

float sec(float x)

{

return (1/cos(x*PI/180));

}

 float cot(float x)

 {

return (1/tan(x*PI/180));

}

 float logten(float x)

{

return (log10(x));

}

 float squareroot(float x)

 {

return (sqrt(x));

}

float cuberoot(float x)

 {

return (cbrt(x));

}

float exponent(float x)

   {

  return(exp(x));

}

float power(float x, float y)

{

return (pow(x,y));

}

float addition(int arr[],int x)

{

    int i,a=0;

    for (i=1;i<=x;i++)

        a = a+arr[i];

    return a;

}

float subtraction(float x, float y)

{

return (x-y);

}

float multiplication(int arr[],int x)

{

    int i,a=1;

    for (i=1;i<=x;i++)

        a = a*arr[i];

    return a;

}

float division(float x, float y)

{

return (x/y);

}

float modulo(float x, float y)

{

return (fmodf(x,y));

}







 int main()

  {

  int n;

    float x,y,answer;
	printf("\t\tWelcome to Scientific Calculator\n\n\n");
    do

    {

   printf("What do you want to do?\n\n");

    printf("1.  Sin(x)\n2.  Cos(x) \n3.  Tan(x) \n4.  Cosec(x) \n5.  Sec(x) \n6.  Cot(x) \n7.  1og10 \n8.  Square Root\n9.  Cube Root\n10. Exponent \n11. Power x^y \n12. Addition \n13. Subtraction x-y \n14. Multiplication \n15. Division x/y \n16. Modulo x(modulo)y\n\n\nEnter 30 to exit\n\nEnter The input\n\n");

    scanf ("%d",&n);

    if (n<11 && n>0)

    {

    printf("\n What is x?\n ");

    scanf("%f",&x);

    switch (n)

    {

        case 1: answer = sine(x);       break;

        case 2: answer = cosine(x);     break;

        case 3: answer = tangent(x);    break;

        case 4: answer = cosec(x);      break;

        case 5: answer = sec(x);        break;

        case 6: answer = cot(x);        break;

        case 7: answer = logten(x);     break;

        case 8: answer = squareroot(x); break;

        case 9: answer = cuberoot(x);  break;

        case 10: answer = exponent(x);   break;

    }

}

if (n==11)

{

    printf("What is x and y?\n");

    scanf("%f%f",&x,&y);

    answer = power(x,y);

}else if(n==12)

{

    int x,i;

    printf("number of addition\n");

    scanf("%d",&x);

    int arr[x];

    printf("enter %d number\n",x);

    for(i=1;i<=x;i++)

        scanf("%d",&arr[i]);

    answer = addition(arr,x);

}else if(n==13)

{

    printf("What is x and y?\n");

    scanf("%f%f",&x,&y);

    answer = subtraction(x,y);

}else if(n==14)

{

    int x,i;

    printf("Number of Multiplication\n");

    scanf("%d",&x);

    int arr[x];

    printf("enter %d number\n",x);

    for(i=1;i<=x;i++)

        scanf("%d",&arr[i]);
	answer = multiplication(arr,x);

}else if(n==15)

{

    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = division(x,y);

}else if(n==16)

{

    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = modulo(x,y);

}

if (n>0 && n<17)
{
    printf("%f\n",answer);
}
else
{
    printf("Enter correct input.\n\n");

}
if (n==30)
{
	printf("You are out of the Calc\n\n");
}
    }
    while(n!=30);
return 0;
}


        case 1: answer = sine(x);       break;

        case 2: answer = cosine(x);     break;

        case 3: answer = tangent(x);    break;

        case 4: answer = cosec(x);      break;

        case 5: answer = sec(x);        break;

        case 6: answer = cot(x);        break;

        case 7: answer = logten(x);     break;

        case 8: answer = squareroot(x); break;

        case 9: answer = cuberoot(x);  break;

        case 10: answer = exponent(x);   break;

    }

}

if (n==11)

{

    printf("What is x and y?\n");

    scanf("%f%f",&x,&y);

    answer = power(x,y);

}else if(n==12)

{

    int x,i;

    printf("number of addition\n");

    scanf("%d",&x);

    int arr[x];

    printf("enter %d number\n",x);

    for(i=1;i<=x;i++)

        scanf("%d",&arr[i]);

    answer = addition(arr,x);

}else if(n==13)

{

    printf("What is x and y?\n");

    scanf("%f%f",&x,&y);

    answer = subtraction(x,y);

}else if(n==14)

{

    int x,i;

    printf("Number of Multiplication\n");

    scanf("%d",&x);

    int arr[x];

    printf("enter %d number\n",x);

    for(i=1;i<=x;i++)

        scanf("%d",&arr[i]);
	answer = multiplication(arr,x);

}else if(n==15)

{

    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = division(x,y);

}else if(n==16)

{

    printf("What is x and y?\n");
    scanf("%f%f",&x,&y);
    answer = modulo(x,y);

}

if (n>0 && n<17)
{
    printf("%f\n",answer);
}
else
{
    printf("Wrong input.\n");

}
    }
    while(n!=30);
return 0;
}
