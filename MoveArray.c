#include<stdio.h>

void MoveArray(int *A,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(A[i]%2==1&&A[j]%2==0)
    		{
    			temp=A[i];
    			A[i]=A[j];
    			A[j]=temp;
			}
		}
	}
   
	for(i=0;i<n;i++)
		printf(" %d",A[i]);

 } 
 
 int main(void)
 
 {  
 	int A[]={3,5,8,11,34,98,23,89,88,20};
 	MoveArray(A,sizeof(A)/sizeof(int));
 	
 	return 0;
 }
