//指针
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

//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小 
//int* p能够访问4个字节  char* p能够访问1个字节 
//double* p能够访问8个字节

//指针类型决定了指针的步长
int *p p+1-->4
char *p p+1-->1  字节 
*/ 

int arr[10]={0}; //数组名是首元素地址 
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
