#include <stdio.h>
#include <stdlib.h>

//Function Prototypes 
void mean(const int *a,int c);
void median(int *a,int c);
void mode(const int *a,int c);



//Bluesense Codes


int main() {

	int n;
	printf("Mean Mode Median Calculator\n\n");
	printf("Enter the number of elements  ");
	scanf("%d",&n);

	int a[n];
	printf("Enter the set of elements\n");
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}


	printf("\nArray\n");
	for (int i=0;i<n;i++) {
		printf("%d ",a[i]);
	}


	mean(a,n);
	median(a,n);
	mode(a,n);

	return 0;
}



void mean(const int *a,int c) {


	float mean=0;
	for (int i=0;i<c;i++) {
		mean = mean + a[i];
	}
	printf("\n\nMean : %.2f",(double)mean/c);
}



void median(int *a,int c) {

	//int median=0;

	//Sorting the Array 
	for (int i=0;i<c-1;i++) {
		for (int j=i+1;j<c;j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	int mid = c/2;

	if (c%2==0) {
		float median= (a[mid-1]+a[mid])/2.0;
		printf("\nMedian %.2f",median); 
	} else {
		float median = a[mid];
		printf("\nMedian %.2f",median);
	}
}

void mode(const int *a,int c) {

	int max = 0;
	//int mode = 0;
	int count = 0;
	int modarr[c];
	int k = 0;
	int track = 0;


	for (int i=0;i<c-1;i++) {
		
		count = 0;

		for (int j=i+1;j<c;j++) {
			if (a[i]==a[j]) {
				count++;
				track++;
			}
		}

		if (count > max && count!=0) {
			k = 0;
			max = count;
			modarr[k]=a[i];
			k++;
		} else if (count == max) {
			//max = count;
			modarr[k] = a[i];
			k++;
		}
	}
	if (track==c) {
			printf("There is no mode");
		} else {
			printf("\nMode = ");
			for (int i=0;i<k;i++) {
				printf("%d ",modarr[i]);
			}
		}

}