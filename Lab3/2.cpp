#include <stdio.h>
#include <string.h>

struct Car {
	char model[20];
	int year;
	int price;
};//end loop
typedef struct Car car;

void addNum( struct Car *c );
int main(){
	struct Car c1;
	strcpy (c1.model,"Yaris");
    addNum(&c1);
	printf("model: %s\n year: %d\n price: %d",c1.model,c1.year,c1.price);
	return 0;
}//end loop
void addNum(struct Car *c) {
	c ->year =2022;
	c ->price = 549000;
}//end loop
