#include<stdio.h>
#include <stdlib.h>//�õ�rand()����
#include<time.h>   //�õ�clock()����
//��ȷ������ 
int main() {
	int begintime,endtime;
	String time=time()
	int i = 0;
	int a[1002];
	begintime=clock();	//��ʱ��ʼ
	for( i = 1; i <= 1000; i++){//Ҫ��ʱ�ĳ���
		a[i] = rand()%200-100;//����-100��+100֮��������
		printf("  %d",a[i]);
	}
	endtime = clock();	//��ʱ����
	
	printf("\n\nRunning Time��%dms\n", endtime-begintime);
		printf("\n\nRunning Time2��%d\n", time);
	return 0;
}

