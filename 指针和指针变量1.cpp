//ָ��
// 

#include<stdio.h>
int main(){
//	printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(double*));
//int a=0x11223344;
//int *p=&a;
//*p=0;
//char*p= &a;
//printf("%p\n",p);
//printf("%p\n",p+1);
 

/*

//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С 
//int* p�ܹ�����4���ֽ�  char* p�ܹ�����1���ֽ� 
//double* p�ܹ�����8���ֽ�

//ָ�����;�����ָ��Ĳ���
int *p p+1-->4
char *p p+1-->1  �ֽ� 
*/ 

int arr[10]={0}; //����������Ԫ�ص�ַ 
int *p =arr;
int i;
for(i=0;i<10;i++){
	*(p+i)=2;
} 
for(i=0;i<10;i++){
	printf("%d ",arr[i]);
}











return 0;
} 
