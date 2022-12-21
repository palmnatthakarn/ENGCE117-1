#include <stdio.h>
#include <string.h>

struct customer {
	char name[20];
	int age;
	int member;
};//end loop

int main(){
	struct customer oldman[5];
	for ( int i =1; i<5; i++){
		printf("oldman %d : name,age,member:",i);
		scanf("%s %d %d", oldman[i].name,
						 &oldman[i].age,	
						 &oldman[i].member);
	}//end loop for
	for ( int i =1; i<5; i++){
		printf("\nCustomer[%d]: \n",i);
		printf("name: %s\n",oldman[i].name);
		printf("age: %d\n",oldman[i].age);
		printf("member: %d\n",oldman[i].member);
	}//end loop
	return 0;
}//end loop
