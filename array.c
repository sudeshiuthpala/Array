#include<stdio.h>
int main(){
	int array[20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=n-1;i>=0;--i){
		printf("%d\t",array[i]);
	}
}
