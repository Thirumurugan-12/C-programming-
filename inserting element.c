#include<stdio.h>

//Bluesense Codes


int main() {

	int a[]={1,4,5,7};
	int n;
	int count = 0;

	while (a[count]!='\0') {
		count++;
		n++;
	}

	int ele;
	printf("Array\n");

	for (int i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	printf("\nEnter the element to insert\n");
	scanf("%d",&ele);


	int pos;
	printf("Enter the index to Enter the element\n");
	scanf("%d",&pos);

	for (int i=n;i>=pos;i--) {
		a[i+1]=a[i];
	}
	a[pos] = ele;
	n++;

	printf("Updated Array \n");
	for (int i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	//getch();
	return 0;
}