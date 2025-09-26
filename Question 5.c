#include <stdio.h>
int main(){
	int hasPrerequisite,isCoursefull;
	
	printf("Enter 1 if you have completed the Prerequisite and if not then enter 0: ");
	scanf("%d",&hasPrerequisite);
	printf("%d\n",hasPrerequisite);
	printf("Enter 1 if Course is full and if not then enter 0: ");
	scanf("%d",&isCoursefull);
	printf("%d\n",isCoursefull);
	
	if(hasPrerequisite == 0)
	{
		printf("Cannot enroll: prerequisite missing\n");
		if (isCoursefull == 1){
			printf("Cannot enroll: prerequisite missing and course is full\n");
		}
	}
	else if(hasPrerequisite == 1)
	{
		if (isCoursefull == 0){
			printf("Enrolled Successfully\n");
		}
		else if (isCoursefull == 1){
			printf("Cannot enroll: course is full\n");
		}
		else{
			printf("Invalid Integer added \n");
		}
	}
	else{
		printf("Invalid Integer added \n");
	}
	
	return 0;
}
