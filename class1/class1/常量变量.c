#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////��������ķ���
//int main()
//{
//	//����һ������
//	int age = 20;			//���� ������ = 0��   ��ʼ��   �Ƽ�
//	/*int age;*/            //���� ��������       ����    �����Ƽ�
//	double weight = 75.3;
//
//	//�����ɱ�
//	age = age + 1;
//	weight = weight + 1;
//
//	printf("%d\n", age);
//	printf("%f\n", weight);
//
//	return 0;
//}


//�ֲ�������ȫ�ֱ���

int a = 100;             //ȫ�ֱ���: { }�ⲿ����ı���

int main()
{
	int a = 10;         //�ֲ�������{ }�ڲ�����ı���
	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����     //������ ȫ�ֱ����;ֲ�������������ͬ
	printf("%d\n",a);

	return 0;
}




//������ʹ�ã������������ĺ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	
//	scanf("%d %d", &a, &b);        //scanf()�����뺯��
//	sum = a + b;
//	printf("%d\n", sum);
//
//	return 0;
//}