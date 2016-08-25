#include "header.h"

int main(void)
{
	int decision = 1;
	char command = '\0';
	while (decision != 0)
	{
		system("cls");
		printf("Hi Welcome to Patrick's Digital Music Simulator\n");
		printf("\tMenu\n");
		printf("\t1. Add Entry\n");
		printf("\t2. Delete Entry\n");
		printf("\t3. Edit Entry\n");
		printf("\t8. Quit\n");

		command = getchar();
		fseek(stdin, 0, SEEK_END);

		switch(command)
		{
		case '1':
			printf("adding...");
			break;
			//TODO: add function
		case '2':
			printf("deleting...");
			break;
			//TODO: delete function 
		case '3':
			printf("editing...");
			break;
			//TODO: edit function
		case '8':
			decision = 0;
			break;
		default:
			printf("Error invalid option\n");
		}
	}
	return 0;
}