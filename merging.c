#include<stdio.h>

int main() {

	int asize1,asize2;

	printf("\nEnter the Array size 1\n");
	scanf("%d",&asize1);

	int arr1[asize1];

	printf("\nEnter the set of elements for Array 1\n");
	for (int i=0;i<asize1;i++) {
		scanf("%d",&arr1[i]);
	} 

	printf("\nEnter the Array size 2\n");
	scanf("%d",&asize2);

	int arr2[asize2];

	printf("\nEnter the set of elements for Array 2\n");
	for (int i=0;i<asize2;i++) {
		scanf("%d",&arr2[i]);
	} 

	int res[asize2+asize1];
	int ind = 0;

	for (int i=0;i<asize1;i++) {
		res[ind] = arr1[i];
		ind++;
	}

	for (int i=0;i<asize2;i++) {
		res[ind] = arr2[i];
		ind++;
	}

	printf("\nArray After Merging two arrays\n");

	for (int i=0;i<asize2+asize1;i++) {
		printf("%d ",res[i]);
	}

	return 0;

}
