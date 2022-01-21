#include <stdio.h>                 //引用头文件stdio.h


//必须写出主函数且一个文件内有且只能有一个主函数  C语言是从主函数的第一行开始执行的
int main()                        //程序的入口  main()——函数名  int——函数返回类型
{
	printf("Hello Word!!!\n");    //printf()-库函数-打印信息    使用的时候需要引用头文件stdio.h
	                              //"\n"换行符
	return 0;               
}                                 //{ }内部为函数体，函数=函数返回类型+函数名+函数体