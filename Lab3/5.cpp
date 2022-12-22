#include <stdio.h>
#include <string.h>

struct Car {
    char model[5];
	int price;
	int sale;
};//end loop
struct Car  *findsale(struct Car model[],int count);
int main(){
	struct Car model[5];
	strcpy(model[0].model,"Tesla");
	model[0].price = 129000;
	model[0].sale = 2400;
	for ( int i = 1; i< 5; i++){
		printf("Car %d : model,price,sale:",i);
		scanf("%s %d %d", model[i].model,
						 &model[i].price,	
						 &model[i].sale);
	}//end loop for
     struct Car *mostsale ;
     mostsale = findsale (model,5);
     printf("The is sale Most %s %d %d",(*mostsale).model,
     									(*mostsale).price,
										(*mostsale).sale);
	return 0;
}//end loop
struct Car  *findsale(struct Car model[],int count ){

	int maxsale,maxI;
	maxsale = model[0].sale;
	maxI = 0;
	for ( int i=1 ; i < count ; i++){
		if (model[i].sale > maxsale);{
			maxsale = model[i].sale;	
			 maxI = i;
		}
	}
	return &model[maxI];
};
