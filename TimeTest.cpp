#include<stdio.h>
#include <windows.h>
//��ȷ��΢�� 
int main() {
	int a[10002];
	int i = 0;
	double run_time;
	_LARGE_INTEGER time_start;	//��ʼʱ��
	_LARGE_INTEGER time_over;	//����ʱ��
	double dqFreq;		//��ʱ��Ƶ��
	LARGE_INTEGER f;	//��ʱ��Ƶ��
	QueryPerformanceFrequency(&f);
	
	dqFreq=(double)f.QuadPart;
	
	QueryPerformanceCounter(&time_start);	//��ʱ��ʼ
	for( i = 1; i <= 10000; i++)a[i]=i;	
	//Ҫ��ʱ�ĳ���
	QueryPerformanceCounter(&time_over);	//��ʱ����
	
	run_time=1000000*(time_over.QuadPart-time_start.QuadPart)/dqFreq;
	//����1000000�ѵ�λ���뻯Ϊ΢�룬����Ϊ1000 000/��cpu��Ƶ��΢��
	printf("\nrun_time��%fus\n",run_time);
	return 0;
}

