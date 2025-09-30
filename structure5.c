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
	int i2data;
	float fdate;
	float f2date;
	char chdata:
	char ch2data;
};
// End: Example for Union

main()
{
	// Start : Example of enum
	enum days {Sum, Mon, Tue, Wed, Thu, Fri, Sat);
	enum days spday;
	int ixday;
	printf("8: Please enter a day 0-6:");
	scanf("%d",&ixday);
	spday = ixday;
	printf("9: Your day is %d.\n:",spday);
	//spday = Sat;
	//printf("10: Day is %d.\n",spday);
	//End : Example of enum

}