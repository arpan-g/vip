#include <iostream>
#include <cmath>
#include "../include/sort.h"
using namespace std;



// A simple print function
void print(int *input, int size)
{
	
    for ( int i = 0; i < size ; i++ )
        cout << input[i] << " ";
    cout << endl;
}




void merge(int* input, int startIndex , int endIndex)
{
    int mid = floor((startIndex + endIndex) / 2);
    int i1 = 0;
    int i2 = startIndex;
    int i3 = mid + 1;
    int temp[endIndex-startIndex+1];
    
	while(i2<=mid && i3<=endIndex)
		if(input[i2] < input[i3])
			temp[i1++] = input[i2++];
		else
			temp[i1++] = input[i3++];


	while(i2<=mid)
		temp[i1++] = input[i2++];

	while(i3 <= endIndex)
		temp[i1++] = input[i3++];

	for(int i = startIndex; i <= endIndex ; i++)
		input[i]=temp[i-startIndex];
	

}

void merge_sort(int* input, int startIndex, int endIndex)
{
    if ( startIndex < endIndex ){

	int midIndex = floor((startIndex+endIndex)/2);
	merge_sort(input, startIndex, midIndex);
	merge_sort(input, midIndex+1,endIndex);
	merge(input,startIndex,endIndex);
	

    }
}

int main(){

	int input[10]={45,78,564,676,674,876,576,453,438,358};
	print(input,10);
	merge_sort(input,0,9);
	print(input,10);

}




