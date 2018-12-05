#include<linux/kernel.h>
#include<linux/linkage.h>

asmlinkage long sys_min(long num1,long num2)
{
	if(num1<=num2)
	{
		printk("min is %ld \n",num1);
		return num1;
	}
	else
	{
		printk("min is %ld \n",num2);
		return num2;
	}
}
