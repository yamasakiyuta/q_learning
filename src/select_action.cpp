#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int select_action(int s,int num_a,double** Qtable);

int main()
{
	double **Qtable;
	int num_a,num_s;
	int i,j;
	int a;

	srand((unsigned)time(NULL));

	num_a=5;
	num_s=10;

	Qtable=new double*[num_s];
	for(i=0;i<num_s;i++){
		Qtable[i]=new double[num_a];
	}

	for(i=0;i<num_s;i++){
		for(j=0;j<num_a;j++){
			Qtable[i][j]=0;
			printf("Q[%d][%d]=%lf\n",i,j,Qtable[i][j]);
		}
	}

	Qtable[3][2]=9;
	Qtable[3][4]=9;
	Qtable[3][1]=9;

	for(i=0;i<10;i++){
		a=select_action(3,num_a,Qtable);
	}

	for(i=0;i<num_s;i++){
		printf("a=%d\n",a);
	}
	delete[]Qtable;

	return 0;
}

int select_action(int s,int num_a,double** Qtable){
	double max;
	int i=0;
	int* i_max=new int[num_a];
	int num_i_max=1;
	int a;

	i_max[0]=0;
	max=Qtable[s][0];

	for(i=1;i<num_a;i++){
		if(Qtable[s][i]>max){
			max=Qtable[s][i];
			num_i_max=1;
			i_max[0]=i;
		}
		else if(Qtable[s][i]==max){
			num_i_max++;
			i_max[num_i_max-1]=i;
		}
	}

	for(i=0;i<num_i_max;i++){
		printf("i_max[%d]=%d num=%d\n",i,i_max[i],num_i_max);
	}

	a=i_max[rand()%num_i_max];
	return a;
}
