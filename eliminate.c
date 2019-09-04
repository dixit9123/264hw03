// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
	// allocate an arry of n elements
	int * arr = malloc(sizeof(* arr) * n);
	// check whether memory allocation succeeds.
	// if allocation fails, stop
	if (arr == NULL)
	{
		fprintf(stderr, "malloc fail\n");
		return;
	}
	// initialize all elements
	for(int i = 0; i < n; i++)
        {
                arr[i] = i+1;
        }

	for(int i = 0; i < n; i++)
        {
                printf("%d ", arr[i]);
        }

	printf("This is the start array\n\n\n");

	// counting to k,
	// mark the eliminated element
	// print the index of the marked element
	// repeat until only one element is unmarked
	int index = -1; 
	int change=0;
	for(int i=0; i< n-1; i++)
	{
		if(change == 0)
		{
			i--;
		}
		int counter = 0;
		while(arr[index]!='x')
		{
			if(index > n)
			{
				index = index % n;
			}
			if(counter == k)
			{
				counter=0;
				arr[index]= 'x';
				printf("index: %d", index);
				change = 1;
			}
			index++;
			counter++;		
		}
		
		/*for(int j = (i+((k-1)*mult)) % n; j < (check % n) + k ; j++)
		{
			if()
			mult++;	
		}
		//check = check % n;

		arr[check % n] = 0;
		printf("Array: ");
		for(int p=0; p<n; p++)
		{
			printf("%d ", arr[p]);	
		}
		printf("\n%d\n", (check%n));
		*/
	}

	for(int i = 0; i < n; i++)
 	{
		//printf("%c ", arr[i]);
	}

	// print the last one




	// release the memory of the array
	free (arr);
}
#endif
