#include <stdio.h>

int main() {
	//code
	//int deg = 3;
	int A[3][3], B[3][3], C[3][3];
	int s=0,i,j;
	
	printf("fill the 1st matrix\n");
	for(int i = 0; i < 3; i++)
	{
	    for(int j = 0; j < 3; j++)
	    {
	        scanf("%d",&A[i][j]);
	    }
	}
	
	printf("fill the 2nd matrix\n");
	for(int i = 0; i < 3; i++)
	{
	    for(int j = 0; j < 3; j++)
	    {
	        scanf("%d",&B[i][j]);
	    }
	}
	
	for(int i = 0; i < 3; i++)
	{
	    for(int j = 0; j < 3; j++)
	    {
	        C[i][j] = 0;
	        for(int k = 0; k < 3; k++)
	        {
	            C[i][j] = C[i][j] + A[i][k] * B[k][j];
	        }
	    }
	}
	
	
	printf("result matrix\n");
	for(int i = 0; i < 3; i++)
	{
	    for(int j = 0; j < 3; j++)
	    {
	        printf("%d ",C[i][j]);
	    }
	    printf("\n");
	}
	
	
	return 0;
}
