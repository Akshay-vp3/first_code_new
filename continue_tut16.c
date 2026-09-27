#include<stdio.h>
int main()
{
printf("hello world\n");
int i,age;
for (i=0;i<10;i++){
printf("%d\nenter your age\n",i);
scanf("%d",&age);
if (age>10)
{
    continue;
}
printf("we have not come across any continue statement ");
printf("har har maha dev ");
}
return 0;

}