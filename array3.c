#include<stdio.h>
int main(){
	int seqList[1000],lastAnswer=0,n,q,arr[3],i,seq;
	scanf("%d",&n);
	scanf("%d",&q);
	while(q>0){
		for(i=0;i<3;i++){
			scanf("%d",&arr[i]);
		}
		if(arr[0]==1){
			seq=((arr[1]^lastAnswer)%n);
			seqList[seq]=arr[2];
		}
		else if(arr[0]==2){
			seq=((arr[1]^lastAnswer)%n);
			lastAnswer=seqList[seq];
			printf("%d",lastAnswer);
		}
		else
			printf("\nWrong");
		q--;
	}
}
