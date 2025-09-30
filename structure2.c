#include<stdio.h>

struct Employee {
	char id[6];
	char name[41];
	float hour;
	float rate;
};

typedef struct Employee sEmp;

struct CalDate {
	float Hr_Rate;
};

typedef struct CalDate sCald;

void printdetail(struct Employee empdet);

struct CalDate calHourRate(struct Employee emparr[]);

// Struct: Example for Typedef
void fprintdetail(sEmp empdet);
sCald fcalHourRate(sEmp emparr[]);
// End: Example for Typedef

// Start: Example for Union
union myunion{
	int idata;
	float fdate;
};
// End: Example for Union

main()
{
	// Start : Array in Structured Data Types
	struct Employee emp_array[3];
	printf("ID: ");
	scanf("%s", &emp_array[1].id);
	printf("Name: ");
	scanf("%s", &emp_array[1].name);
	printf("Hour: ");
	scanf("%f", &emp_array[1].hour);
	printf("Rate: ");
	scanf("%f", &emp_array[1].rate);
	printf("3: ID = %s\nName = %s\nHour = %f\nRate = %f\n",
	emp_array[1].id, emp_array[1].name, emp_array[1].hour,
	emp_array[1].rate);
	// End : Array in Structured Data Types
}