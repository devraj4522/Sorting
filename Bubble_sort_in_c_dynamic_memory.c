#include <stdio.h>
#include <stdlib.h>

int BubbleSort(int size, int *array);

int main(){

	int size, i, *array;

	printf("Enter total number of elements: ");
	scanf("%d", &size);

	printf("Enter the %d elements: ", size);
    
    array = (int *)malloc(sizeof(int)*size);
	
    for(i=0; i<size; i++){
		scanf("%d", (array + i));
	}

	//Run the Bubble Sort Algorithm to sort the list of elements
	BubbleSort(size, array);

	printf("After Sorting: ");
	for(i=0; i<size; i++){

		printf(" %d", array[i]);

	}
	printf("\n");
	return 0; 
}



int BubbleSort(int size, int *array){

	int i, j, temp;

	//Bubble sorting algorthm
	for(i=1; i<size; i++){
		for(j=1; j< size; j++){

			//Swap
			if(array[j-1] > array[j]){
				temp = array[j-1];
				array[j-1] = array[j];
				array[j]= temp;
			}
		}

	}
	return 1;
}
