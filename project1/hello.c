#include<linux/kernel.h>
#include<linux/linkage.h>

asmlinkage long sys_hello(void)
{
	printk("HELLO SYSTEM CALL b04901025 b04901164 \n");
	return 0;
}
