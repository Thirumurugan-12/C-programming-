#include <stdio.h>
#include <stdlib.h>

//Linear search


int main() {
	int a;
	printf("Enter the length of array  ");
	scanf("%d",&a);

	int arr[a];

	printf("\nEnter the set of elements  ");
	for (int i=0;i<a;i++) {
		scanf("%d",&arr[i]);
	}

	printf("\nEnter the element to search  ");
	int se;
	scanf("%d",&se);


	//Linear searching for an element

	for (int i=0;i<a;i++) {
		if (arr[i]==se) {
			printf("\nElement is present in %d Index || element =  %d",i,arr[i]);
		}
	}

	return 0;
}