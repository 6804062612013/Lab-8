#include<stdio.h>
int checkscore(char std[]);
int q1(char a[][10]);
int hardest(char std[][10]);
int main() {
	int i,j;
    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},//7
			{'D','B','A','B','C','A','E','E','A','D'},//6
			{'E','D','D','A','C','B','E','E','A','D'},//5
			{'C','B','A','E','D','C','E','E','A','D'},//4
			{'A','B','D','C','C','D','E','E','A','D'},//8
			{'B','B','E','C','C','D','E','E','A','D'},//7
			{'B','B','A','C','C','D','E','E','A','D'},//7
			{'E','B','E','C','C','D','E','E','A','D'}};//7

	for(i=0;i<8;i++){
	printf("std %d => %d\n", (i+1), checkscore(ans[i]));		
	}
	printf("%d students were corrected question 1 .\n",q1(ans));
	printf("%d is the hardest question.\n",hardest(ans));
}

int checkscore(char std[]) {
	char charkeys[10] = {'D','B','D','C','C','D','A','E','A','D'};
	int score = 0, i;
	for(i=0;i<10;i++){
		if(std[i] == charkeys[i])
		score = score+1;
	}
	return score;
}

int q1(char a[][10]) {
	int score = 0 , i;
	for(i=0;i<8;i++){
		if(a[i][0]=='D') score++ ;
	}
	return score;
}

int hardest(char std[][10]) {
	char charkeys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int count[10]={0,0,0,0,0,0,0,0,0,0} , i , j ,indexmin = 0;
	for(i=0;i<10;i++){
		for(j=0;j<8;j++){
			if(std[j][i]==charkeys[i]) count[i]++;
		}
	}
	for(i=1;i<10;i++) {
		if(count[i]<count[indexmin]) indexmin = i;
	}
	return indexmin+1;
}
