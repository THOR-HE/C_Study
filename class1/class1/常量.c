#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//常量分类
//1.字面常量；
//2.const修饰的常变量；
//3.#define定义的标识符常量；
//4.枚举常量


//int main()
//{
//	//字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	return 0;
//}



//int main()
//{
//	//int num = 10;		//变量
//	const int num = 10;		//const修饰的常变量
//	num = 20;
//	printf("%d\n",num);
//	
//	return 0;
//}


//#define NUM 10
//
//int main()
//{
//	int arr[10] = {0};		//数组定义，10个元素
//
//	//int n = 10;			//此处n是变量，可以看出定义数组的n报错
//	const int n = 10;		//此处换为了常变量，依旧有报错
//
//	int arr2[NUM] = {0};
//
//	return 0;
//
//}



//#define MAX 10000
//
//int main()
//{
//	int n = MAX;		//MAX的值不可更改
//	printf("n=%d\n",n);
//}


////枚举常量
////可以一一列举的常量
//
//enum Sex			//性别
//{
//	//未来可能的取值
//	MALE,			//默认初值从0开始
//	//MALE = 3,      //可以赋初值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;		//此处的赋值只能是上面定义好的值
//
//	printf("%d\n",s);		//输出对应的初值
//
//	return 0;
//}