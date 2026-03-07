#include <stdio.h>
void addthree(int number[] , int pos[3][2] , int Arsize );

int main() {
	int number[5] = {20,50,100,99,9};
	int pos[3][2]={{1,100},{3,200},{5,300}};
	addthree(number,pos,sizeof(number)/sizeof(number[0]));

}

void addthree(int number[],int pos[3][2],int Arsize)
{
	int i,index,add;
	for(i=0;i<2;i++){
		index= pos[i][0] ;
		add= pos[i][1] ;
		if(index<Arsize){
			number[index]+=add;
		}
	}
	for(i=0;i<Arsize;i++){
		printf("%d ",number[i]);
	}
}
