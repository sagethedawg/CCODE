// compile gcc input.c -o input -lm
#include <stdio.h>
#include <math.h>
float table(float a, float b, float c);
float main()
	{
		float a,b,c;	
	    printf("Type three numbers a, b  and c \n");
		printf("Type each value follow by an Enter key\n");
		printf("This will output a x,f(x) table of values.");
		printf("Input a :");
		scanf("%f", &a);	
		printf("Input b :");
		scanf("%f", &b);	
		printf("Input c :");
		scanf("%f", &c);
		table(a,b,c);
	}
     
float table(float a, float b, float c){
	int x;
	float y = 0;
	for (x = -20; x < 21;x++){
		y = ((x*x)*a) + (b*x) + c;
		printf("%d | %f \n",x,y);
	}
}
