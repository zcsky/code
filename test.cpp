#include <stdio.h>
int main(void){
int hour1,hour2;
int minute1,minute2;
printf("������2��ʱ�䣬����һ�鰴��enter�����ա���Сʱ�������Ӹ�ʽ\n");
scanf("%d %d",&hour2,&minute2); 
scanf("%d %d",&hour1,&minute1); 
int ih = hour2-hour1;
int im = minute2-minute1;
if(ih<0){
ih = -ih;
im = -im;
}
if (im<0){
im = im+60;
ih--;
}

printf("����ʱ���ʱ���Ϊ%dСʱ%d����",ih,im);

return 0;

}
