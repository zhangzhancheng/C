#include<stdio.h>
#include <stdlib.h>//用到rand()函数
#include<time.h>   //用到clock()函数
//精确到毫秒 
int main() {
	int begintime,endtime;
	String time=time()
	int i = 0;
	int a[1002];
	begintime=clock();	//计时开始
	for( i = 1; i <= 1000; i++){//要计时的程序
		a[i] = rand()%200-100;//产生-100到+100之间的随机数
		printf("  %d",a[i]);
	}
	endtime = clock();	//计时结束
	
	printf("\n\nRunning Time：%dms\n", endtime-begintime);
		printf("\n\nRunning Time2：%d\n", time);
	return 0;
}

