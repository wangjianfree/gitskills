#include<stdio.h>
int dichotomyFind(int N,int A[],int len){
	int low=0;
	int high=len-1;
	int middle=0;
	while(low<=high){
		middle=(low+high)>>1;
		if(N==A[middle]){
		printf("Searched %d,index is %d!\n",N,middle);
		return 1;
}
	else if(N>A[middle])
		low=middle+1;
	else
		high=middle-1;
}
	return 0;
}
int main(){
	int a[]={2,3,5,8,38,58,67,68,89,100,127,235,246,258,263,351,375,398,487,500};
	int l=sizeof(a)/sizeof(a[0]);
	int i=0,N;
	printf("Aarray content:");
	for(i=0;i<l;i++){
	if(i%8==0)
		printf("\n");
	printf("%4d",a[i]);
}
	printf("\nSearch N is ");
	scanf("%d",&N);
	if(!dichotomyFind(N,a,l))
		printf("Not Found!\n");
	return 0;
}
