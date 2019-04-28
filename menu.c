#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
	while (1)
	{
		system("cls");
		printf("1:new game\n");
		scanf("%d", &choice);
		system("cls");

		if (choice == 1)
		{
			int choise1;
			system("cls");
			printf("Select difficulty level:\n");
			printf("1:Easy(4 numbers)\n");
			printf("2:Medium(6 numbers)\n");
			printf("3:Hard(8 numbers)\n");
			scanf("%d", &choise1);
			system("cls");
        }
        if ((choice != 1))
			break;
        system("PAUSE");
    }
        system("PAUSE");
}