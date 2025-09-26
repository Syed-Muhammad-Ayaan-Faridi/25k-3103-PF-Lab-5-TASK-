#include <stdio.h>

int main(){
	char Room,Action;
	
	printf("Enter the Room [Living Room(L)/Kitchen(K)]");
	scanf(" %c",&Room);
	printf("Enter the Action [Lights(L)/Thermostat(T)]");
	scanf(" %c",&Action);
	
	switch (Room)
	{
		case 'L':
			switch(Action)
			{
				case 'L':
					printf("Adjusting ambient lighting\n");
					break;
				case 'T':
					printf("Setting living room temperature\n");
					break;
				
				default:
					printf("Invalid char entered\n");
					break;
			}
			break;
		case 'K':
			switch(Action)
			{
				case 'L':
					printf("Turning on bright task lighting\n");
					break;
				case 'T':
					printf("Setting kitchen temperature\n");
					break;
				
				default:
					printf("Invalid char entered\n");
					break;
			}
			break;
		default:
			printf("Invalid char entered\n");
			
	}	
	return 0;
}
