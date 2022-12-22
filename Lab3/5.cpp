#include <stdio.h>
#include <string.h>

struct Book {
    char title[20];
	char author[20];
	char subject[40];	
};//end loop
void text(struct Book *bo);
int main(){
	struct  Book b;
	text(&b);
	printf("%s\n ",b.title);
	printf("by %s\n",b.author);
	printf("subject is %s",b.subject);
}
void text(struct Book *bo) {
	printf("I read");
	gets(bo->title);
	printf("who is composed");
	gets(bo->author);
	printf("what is subject");
	gets(bo->subject);
}
