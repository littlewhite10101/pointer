#include<stdio.h>
int main(){
	int a=10;
	int *p=&a;
	int * *pa=&p; 
	printf("%d\n",**pa);	

	 //pa是二级指针
//* p表示 p是指针 int表示指向对象类型是int 
  
	








return 0;
}
