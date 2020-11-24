#include<stdio.h>
int main(){
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int i;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int *p=&arr[8]; 
////	for(i=0;i<sz;i++){
////		printf("%d ",*p);
////		p++;
////}
//
////for(i=0;i<4;i++){
////		printf("%d ",*p);
////		p+=3;
////}
//	
//for(i=0;i<3;i++){
//		printf("%d ",*p);
//		p-=2;
//}
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9]-&arr[3]); //ÔªËØ¸öÊý 
	 
return 0;
}
