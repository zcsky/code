#include <stdio.h>
int main(void){
int hour1,hour2;
int minute1,minute2;
printf("请输入2组时间，输完一组按下enter，按照——小时——分钟格式\n");
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

printf("两个时间的时间差为%d小时%d分钟",ih,im);

return 0;

}
