#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////定义变量的方法
//int main()
//{
//	//创建一个变量
//	int age = 20;			//类型 变量名 = 0；   初始化   推荐
//	/*int age;*/            //类型 变量名；       可行    但不推荐
//	double weight = 75.3;
//
//	//变量可变
//	age = age + 1;
//	weight = weight + 1;
//
//	printf("%d\n", age);
//	printf("%f\n", weight);
//
//	return 0;
//}


////局部变量与全局变量
//
//int a = 100;             //全局变量: { }外部定义的变量
//
//int main()
//{
//	int a = 10;         //局部变量：{ }内部定义的变量
//	当局部变量和全局变量名字冲突的情况下，局部优先     //不建议 全局变量和局部变量的名字相同
//	printf("%d\n",a);
//
//	return 0;
//}




////变量的使用：求两个整数的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	
//	scanf("%d %d", &a, &b);        //scanf()是输入函数
//	sum = a + b;
//	printf("%d\n", sum);
//
//	return 0;
//}





//作用域和生命周期
// 
//作用域
//
////局部变量的作用域：就是变量所在的局部范围
//int main()
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//	}
//	return 0;
//}



//全局变量的作用域：整个工程
//int g_val = 2021;				//全局变量


//int main()
//{
//	printf("1:%d\n", g_val);A
//	{
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}




//变量的生命周期

//局部变量的生命周期:进入局部范围-生命开始，出局部范围-生命结束
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n",a);
//	}
//	//printf("%d\n",a);
//	return 0;
//}