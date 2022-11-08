#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x-x-4)
#define df(x) (3*x*x-1)
 void main(){
           int i,n;
    float x1, x2, epsilon, delta, err;
clrscr();
printf("\nEnter the value of x1: ");
 scan("%f",&x1);
printf("\nEnter two very small number epsilon and delta: ");
scanf("%f %f", &epsilon, &delta);
printf("\nEnter the no. of iterations: ");
scanf("%d", &n);
for(i=0; i<n; i++){
if(df(x1)<delta){
 printf("nSlope of curve is too small.");
 goto exit;
}
x2-x1-f(x1)/df(x1);
printf("\nNext approximation after - iteration is %9f, f(x) =%11f", (i+1), x2, f(x2));
err-fabs((x2-x1)/x2);
 if(err < epsilon){
print("\n\nError\%f", err);
printf("\nRoot\t=%.4f", x2);
goto exit;
}
x1= x2;
}
printf("\n\nSolution does not converge after %d iterations.", n);
 
 getch();
}