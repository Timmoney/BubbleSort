/*bubbleSort
	1.compare the current postion to the next adjacent position
	2.swap
	3.iterating thru the entire array
	4.

*/

#include <iostream>
using namespace std;

//the simple one
void bubbleSort(int A[], int len){

	for(int k = 0; k<len;k++){
		//one parse
		for(int i = 0; i<len-1; i++){
			if(A[i]>A[i+1]){
				int temp;
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
			}
		}
	}
}

//the better big o one
void bubbleSortV2(int A[], int len){

	for(int k = 0; k<len;k++){
		//setting flag
		int flag = 0;
		//one parse
		//consider k is the sorted array no need to go further
		for(int i = 0; i<len-1; i++){
			if(A[i]>A[i+1]){
				int temp;
				temp = A[i];
				A[i] = A[i+1];
				A[i+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0) break;
	}
}


int main(){
	int A[] = {7,8,9,5,3,4,6,2,1};

	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");

	bubbleSort(A, 9);
	
	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");

	bubbleSortV2(A, 9);
	
	for(int i=0; i < sizeof(A)/sizeof(A[0]); i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}