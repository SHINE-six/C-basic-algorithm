#include <stdio.h>
#include <stdbool.h>

int main()
{
int num[5] , i, big, next,run; 
	/*list, 
	counter, 
	store current biggest number between the 2 comparing, 
	the next number to compare with current biggest, 
	run to check whether there still process of compare?*/

	//to get the 5 values for the array
	for ( i = 0; i < 5; i++)
	{
		printf("Enter the number '%d' value for the array\n>",i+1);
		scanf("%d",&num[i]);
	}

	//continue do while run == 1, meaning there still sorting process
	do
	{
		run = 0;						//consider run to be false
		for (i = 0; i < 4; i++)		//looping through the 4 possible compare number, note - there are only 4 compare between 5 number
		{
			next = num[i+1];		//next number of the array that is to compare 
			big = num[i];
			if (big > next)
			{
				num[i] = next;
				num[i+1] = big;
				run = 1;
			}
		}
	} while (run == 1);
	

	printf("\nAscending Order: ");
	for ( i = 0; i < 5; i++)
	{
		printf("\n%d",num[i]);
	}
	
	
	//second attempt
	/*
	int length_of_array = 7;
	int num[length_of_array], i, origi, next, run;


	for ( i = 0; i < length_of_array; i++)
	{
		printf("Enter the %d value for the list \n>", i +1);
		scanf("%d",&num[i]);
	}


	do
	{
		run = false;
		for ( i = 0; i < (length_of_array-1); i++)
		{
			origi = num[i];
			next = num[i+1];

			if (origi > next)
			{
				num[i+1] = origi;
				num[i] = next;
				run = true;
			}
		}
	} while (run == true);
	

	
	
	//to display number
	printf("The ascending order is: \n");
	for ( i = 0; i < length_of_array; i++)
	{
		printf("The %d number is :  %d\n", i + 1 , num[i]);
	}
	*/
	

	
	

	return 0;
}
