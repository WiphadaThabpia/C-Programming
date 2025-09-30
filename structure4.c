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
	// Start : Example of Union
	union myunion m;
	m.chdata = 'a';
	printf("11: m.idata = %d.\n",m.idata);
	printf("12: m.i2data = %d.\n",m.i2data);
	printf("13: m.fdata = %f.\n",m.fdata);
	printf("14: m.f2data = %f.\n",m.f2data);
	printf("15: m.chdata = %c.\n",m.chdata);
	printf("16: m.ch2data = %c.\n",m.ch2data);
	printf("===============================\n");
	m.fdata = 7.256;
	printf("17: m.idata = %d.\n",m.idata);
	printf("18: m.i2data = %d.\n",m.i2data);
	printf("19: m.fdata = %f.\n",m.fdata);
	printf("20: m.f2data = %f.\n",m.f2data);
	printf("21: m.chdata = %c.\n",m.chdata);
	printf("22: m.ch2data = %c.\n",m.ch2data);
	printf("===============================\n");
	m.i2data = 5600;
	printf("23: m.idata = %d.\n",m.idata);
	printf("24: m.i2data = %d.\n",m.i2data);
	printf("25: m.fdata = %f.\n",m.fdata);
	printf("26: m.f2data = %f.\n",m.f2data);
	printf("27: m.chdata = %c.\n",m.chdata);
	printf("28: m.ch2data = %c.\n",m.ch2data);
	printf("===============================\n");
	// End : Example of Union
}