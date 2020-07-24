#include<stdio.h>
int main()
{
	int nHours=40;
	int nDays=7;
	
	float avg=nHours/nDays;  // WITHOUT TYPECASTING.
	printf("%d hours in %d days\n",nHours,nDays);
	printf("work %.lf hours per day\n",avg);
	
	printf("\n\n");
	
	int nHour=40;
	int nDay=7;
	
	float av=nHour/(float)nDay;  // WITHOUT TYPECASTING.
	printf("%d hours in %d days\n",nHour,nDay);
	printf("work %.lf hours per day\n",av);
	
	printf("\n\n");
	
	int nHr=40;
	int nDy=7;
	
	float average=(float)nHr/(float)nDy;  // WITHOUT TYPECASTING.
	printf("%d hours in %d days\n",nHr,nDy);
	printf("work %.lf hours per day\n",average);

	
	return 0;
}