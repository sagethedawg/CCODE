
#include <stdio.h>
#include <math.h>
float discriminant(float a, float b, float c);
float main(int argc, const char * argv[])    /* program which introduces keyboard input */
{
float a, b, c, determinant, root1, root2, realPart, imaginaryPart, d, sum, sroot, ds, discriminant;

printf("Enter three numbers to add\n");
printf("Please enter a \n");
scanf("%f",&a);
printf("Please enter b \n");
scanf("%f",&b);
printf("Please enter c \n");
scanf("%f",&c);

determinant = b*b-4*a*c;

if (determinant > 0)
{
root1 = (-b+sqrt(determinant))/(2*a);
root2 = (-b-sqrt(determinant))/(2*a);
printf("root1 = %f and root2 = %f\n",root1 , root2);
}
else if (determinant == 0)
{
root1 = root2 = -b/(2*a);
printf("root1 = root2 = %f;\n", root1);
}
else
{
realPart = -b/(2*a);
imaginaryPart = sqrt(-determinant)/(2*a);
printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
}
return 0;
}
