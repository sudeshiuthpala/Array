#include<stdio.h>
int main(){
	int array[6][6],i,j,sum,arr[100],max,t=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			scanf("%d",&array[i][j]);
		}
	}

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			sum=array[i][j]+array[i][j+1]+array[i][j+2]+array[i+1][j+1]+array[i+2][j]+array[i+2][j+1]+array[i+2][j+2];
			arr[t]=sum;		
			t++;
			}
	}

	max=arr[0];
	for(t=0;t<16;t++){
		if(arr[t]>max){
			max=arr[t];
		}
	}
	printf("\n%d",max);
}


