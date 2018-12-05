#include<sys/syscall.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	long num1=13;
	long num2=14;
	long multiply, min;
	syscall(337);
	multiply=syscall(338,num1,num2);
	min=syscall(339,num1,num2);
	printf("multiply result of %ld and %ld is %ld \n",num1,num2,multiply);
 	printf("min result of %ld and %ld is %ld \n",num1,num2,min);
	return 0;
}
