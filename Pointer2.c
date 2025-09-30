#include <stdio.h>
void main(){
	float n[1][1][1], sum = 0;
	int i, j, k, n_1, n_2, n_3;

	printf("n = [x][x][x]\n\n");
	printf("#1[x]="):
	scanf("%d",&n_1);
	printf("#2[x]="):
	scanf("%d",&n_2);
	printf("#3[x]="):
	scanf("%d",&n_3);
	printf("\n");

	printf("n[1][1][1] = n[%d][%d][%d]",n_1,n_2,n_3);
	printf("\n\n");

	for(i=0;i<n_1;i++)
	{
		for(j=0;j<n_2;j++)
		{
			for(k=0;k<n_3;k++)
			{
				printf("n[%d][%d][%d]=",i,j,k);
				scanf("%f",&n[i][j][k]);
				sum=sum+n[i][j][k];
		    }
	    }
    }
	printf("Sum of 3d! n = %f \n",sum);
}