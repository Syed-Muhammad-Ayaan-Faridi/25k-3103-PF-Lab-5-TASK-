#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float discriminant;
	
	printf("Enter the value a: ");
	scanf("%d",&a);
	printf("Enter the value b: ");
	scanf("%d",&b);
	printf("Enter the value c: ");
	scanf("%d",&c);
	
	discriminant = (b*b) - (4*a*c);
	
	if (discriminant < 0){
		printf("Imaginary Roots\n");
	}
	else if(discriminant > 0){
		printf("Two Real Roots\n");
	}
	else{
		printf("One Real Root\n");
	}
	
	
	return 0;
}
