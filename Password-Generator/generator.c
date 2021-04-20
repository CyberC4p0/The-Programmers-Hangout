#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define AMOUNT_OF_NUMBERS 10
#define AMOUNT_OF_UPPERCASE_LETTERS 26
#define AMOUNT_OF_LOWERCASE_LETTERS 26
#define AMOUNT_OF_SYMBOLS 30

int main(void)
{
	/* Keys */
 	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
	char uppercase_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	char lowercase_letters[] = "abcdefghijklmnopqrstuvwxyz"; 
	char symbols[] = "!#$%&'()*+,-./:;<=>?@[]^_`{|}~"; 
	
	/* Pointers for selecting the certain character/number from the keys above */
	char *pointer_1 = uppercase_letters, *pointer_2 = lowercase_letters, *pointer_3 = symbols;

	/* Declaring variables for random pointer indexes */
	int random_pointer_index_1, random_pointer_index_2, random_pointer_index_3, random_number_array_index, random_case;

	/* Declaring variables for user input */
	int strength_of_password, length_of_password;
	
	srand(time(0)); //Seed for rand() function

	printf("Length of password (8-20): ");
	scanf("%d", &length_of_password);
	
	if (length_of_password >= 8 && length_of_password <= 20)
	{
		printf("Strength of password (1-3): ");
		scanf("%d", &strength_of_password);

		if (strength_of_password == 1)
		{
			/* Length of password has to be between 8 and 20 */
			if (length_of_password >= 8 && length_of_password <= 20)
			{
				int number_of_statements = 2; // Number of commands that need to be chosen from
				printf("Your random password is: ");

				for (int i = 0; i < length_of_password; i++)
				{
					/* Generating random numbers according to the established limit of their corresponding key */
					random_case = rand() % number_of_statements;
					random_pointer_index_1 = rand() % AMOUNT_OF_UPPERCASE_LETTERS;
					random_number_array_index = rand() % AMOUNT_OF_NUMBERS;
				
					/* Switch using a random case */
					switch (random_case)
					{
						case 0:
							printf("%c", pointer_1[random_pointer_index_1]);
							break;
					
						case 1:
							printf("%d", numbers[random_number_array_index]);
							break;
					}
				}
			}

		}

		else if (strength_of_password == 2)
		{
			int number_of_statements = 3;
			printf("Your random password is: ");
			
			for (int i = 0; i < length_of_password; i++)
			{
				random_case = rand() % number_of_statements;
				random_pointer_index_1 = rand() % AMOUNT_OF_UPPERCASE_LETTERS;
				random_pointer_index_2 = rand() % AMOUNT_OF_LOWERCASE_LETTERS;
				random_number_array_index = rand() % AMOUNT_OF_NUMBERS;
				
				switch (random_case)
				{
					case 0:
						printf("%c", pointer_1[random_pointer_index_1]);
						break;
					
					case 1:
						printf("%c", pointer_2[random_pointer_index_2]);
						break;
					
					case 2:
						printf("%d", numbers[random_number_array_index]);
						break;
				}
			}
		}
		
		else if (strength_of_password == 3)
		{
			int number_of_statements = 4;
			printf("Your random password is: ");
			
			for (int i = 0; i < length_of_password; i++)
			{
				random_case = rand() % number_of_statements;
				random_pointer_index_1 = rand() % AMOUNT_OF_UPPERCASE_LETTERS;
				random_pointer_index_2 = rand() % AMOUNT_OF_LOWERCASE_LETTERS;
				random_pointer_index_3 = rand() % AMOUNT_OF_SYMBOLS;
				random_number_array_index = rand() % AMOUNT_OF_NUMBERS;
		
				switch (random_case)
				{
					case 0:
						printf("%c", pointer_1[random_pointer_index_1]);
						break;

					case 1:
						printf("%c", pointer_2[random_pointer_index_2]);
						break;

					case 2:
						printf("%c", pointer_3[random_pointer_index_3]);
						break;

					case 3:
						printf("%d", numbers[random_number_array_index]);
						break;
				}
			}
		}
		
		else
		{
			printf("Invalid Level!\n");
			main();
		}
	}
	/* If length of password is less than the established minimum of 8 */
	else if (length_of_password < 8)
	{
		printf("Selected length is below 8!\n");
		main();
	}

	/* If length of password is more than the established maximum of 20 */
	else if (length_of_password > 20) 
	{
		printf("Selected length is above 20!\n");
		main();
	}

	else
	{
		printf("Invalid Length!\n");
		main();
	}
}
