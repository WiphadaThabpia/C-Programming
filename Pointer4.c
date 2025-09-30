#include <stdio.h>
void swap(int *a, int *b);
void main() {
	int ArrayA[10] = {1,2,3,4,5,4,3,2,1,9};
	int ArrayB[10] = {6,7,8,9,10,2,1,3,7,8};
	int *a = &ArrayA[0];
	int *b = &ArrayB[0];
	int i=0; ans1=0; ans2=0;

	printf("ArrayA = ");
	for(i=0; i<10; i++) {
		printf("%d",ArrayA[i]);
    }

    printf("ArrayB = \n");
    for(i=0; i<10; i++) {
		printf("%d",ArrayB[i]);
    }

    printf("\n");
    while(1) {
		printf("Input IndexArrayA : ");
		scanf("%d",&ans1);
		printf("Input IndexArrayB : ");
		scanf("%d",&ans2);

		swap(&ArrayA[ans1], &ArrayB[ans2]);

		printf("ArrayA = \n");
		for(i=0; i<10; i++) {
			printf("%d",ArrayA[i]);
	    }
	    printf("ArrayB = \n");
	    for(i=0; i<10; i++) {
		   printf("%d",ArrayB[i]);
	    }
	    printf("\n");
   }
}
void swap(int *a, int *b) {
	int i = 0;
	int temp = 0;
	    temp = *a;
	    *a = *b;
	    *b = *a;
	    printf("A:%u -> B:%u && B:%u\n",*b,*a,*a,*b);
	    printf("A:%u -> B:%u && B:%u\n\n",&b,&a,&a,&b);
}



