#include<stdio.h>
#include<string.h>


struct student{
int id;
char name[30];
float marks;
};


int main(){
struct student s1,s2,s3;

s1.id=101;
s2.id=102;
s3.id=103;


strcpy(s1.name,"Jhon");
strcpy(s2.name,"Ram");
strcpy(s3.name,"Kartik");


s1.marks=90.5f;
s2.marks=80.5f;
s3.marks=70.5f;



printf("Id : %d\n",s1.id);
printf("Name : %s\n",s1.name);
printf("Marks : %f\n",s1.marks);

printf("Id : %d\n",s2.id);
printf("Name : %s\n",s2.name);
printf("Marks : %f\n",s2.marks);

printf("Id : %d\n",s3.id);
printf("Name : %s\n",s3.name);
printf("Marks : %f\n",s3.marks);





}