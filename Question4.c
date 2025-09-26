#include <stdio.h>
#include <string.h>
int main(){
	int Password = 12345678,Passcode;
	char Username[15] = "Johnny",username[15];
	
	
	printf("Enter your Password: ");
	scanf("%d",&Passcode);
	printf("Enter your username: ");
	scanf(" %s",username);
	
	if (strcmp(username,Username)==0) 
	{
		if (Passcode == Password){
			printf("Logged in Successfully\n");
		}
		else
		{
			printf("Incorrect Password entered\n");
		}
	}
	else
	{
		printf("Incorrect Username entered\n");
	}
	return 0;
}
