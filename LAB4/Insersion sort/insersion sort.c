#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InsertionSort(int n,int arr[]){

    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int  main()
{
	int a[15000],n;
    clock_t start,end;

	n=1000;
	while(n<=10000)
	{
		for(int i=0;i<n;i++)
			a[i]=n-i;

		start=clock();
		InsertionSort(n,a);
		for(int j=0;j<=100;j++);
		end=clock();
		printf("Time for N = %d elements is = %f secs \n",n,((double)(end-start))/CLOCKS_PER_SEC);
		n=n+1000;
	}
}
