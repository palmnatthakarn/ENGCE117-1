#include <stdio.h>
#include <string.h>

struct Car {
	char brand[20];
	char model[20];
	int year;
};//end loop
typedef struct Car car;

int main(){
	struct Car c1; car c2;
	strcpy (c1.brand,"Toyota");
	strcpy (c1.model,"Yaris");
	c1.year = 2022;
	
	strcpy(c2.brand,"GMW");
	strcpy(c2.model,"Good Cat");
	c2.year = 2021;
	
	printf("brand: %s\n model: %s\n year: %d\n",c1.brand,c1.model,c1.year);
	printf("brand: %s\n model: %s\n year: %d\n",c2.brand,c2.model,c2.year);
	return 0;
}//end loop
