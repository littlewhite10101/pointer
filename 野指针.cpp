#include<stdio.h>
int main(){
/*
野指针 
(1)未初始化
（2）越界访问
（3）指针指向内存空间释放 
*/

//int* p;
//*p=20; 


int arr[10]={0};
int* p=arr;
for(int i=0;i<12;i++){
	p++;
	//指针指向范围超过arr的范围，p就是野指针 
}

return 0;

} 
