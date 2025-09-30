#include <stdio.h>
void main()
{
    float n[20];
    float sum=0,avr;
    int *p,i;
    p=&n[0];
    for(i=0;i<20;i++)
    {
		printf("n[%d]=",i);
		scanf("%f",&n[i]);
		sum=sum+n[i];
		if(i==19)
		{
			avr=sum/20.0;
			printf("Average of n is %f\n",avr);
	    }
    }
}