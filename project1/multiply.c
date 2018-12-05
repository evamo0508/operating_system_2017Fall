#include<linux/kernel.h>
#include<linux/linkage.h>

asmlinkage long sys_multiply(long num1,long num2)
{
	printk("multiply is %ld \n",num1*num2);
	return num1*num2;
}
