#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//��������
//1.���泣����
//2.const���εĳ�������
//3.#define����ı�ʶ��������
//4.ö�ٳ���


//int main()
//{
//	//���泣��
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	return 0;
//}



//int main()
//{
//	//int num = 10;		//����
//	const int num = 10;		//const���εĳ�����
//	num = 20;
//	printf("%d\n",num);
//	
//	return 0;
//}


//#define NUM 10
//
//int main()
//{
//	int arr[10] = {0};		//���鶨�壬10��Ԫ��
//
//	//int n = 10;			//�˴�n�Ǳ��������Կ������������n����
//	const int n = 10;		//�˴���Ϊ�˳������������б���
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
//	int n = MAX;		//MAX��ֵ���ɸ���
//	printf("n=%d\n",n);
//}


////ö�ٳ���
////����һһ�оٵĳ���
//
//enum Sex			//�Ա�
//{
//	//δ�����ܵ�ȡֵ
//	MALE,			//Ĭ�ϳ�ֵ��0��ʼ
//	//MALE = 3,      //���Ը���ֵ
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;		//�˴��ĸ�ֵֻ�������涨��õ�ֵ
//
//	printf("%d\n",s);		//�����Ӧ�ĳ�ֵ
//
//	return 0;
//}