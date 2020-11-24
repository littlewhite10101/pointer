#include<stdio.h>
//int my_strlen(char arr[]){
//	int count=0;
//	for(int i=0;arr[i]!='\0';i++){
//		count++;
//	}
//	return count; 
//}
//int main(){
//	char arr[]="hello world";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//
//
//
//
//
//
//
//	return 0;
//}


int my_strlen(char *arr){
		char *start=arr;
		char *end=arr;
		while(*end!='\0'){
			end++;}
		return end-start;
}


int main(){
	char arr[]="hello";
	int len=my_strlen(arr);//数组名为首元素地址 
	printf("%d\n",len);



}
