#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<ctime>
#include<cmath>
#include<conio.h>

using namespace std;

#define CLS system("cls")

int genin() 
{
int ret = 0;
do{int ch=_getch();
//if(ch==54){ch=_getch();if(ch==52){return 64;}}
//if(ch==52){ch=_getch();if(ch==50){ch=_getch();if(ch==48){return 420;}}}
switch(ch){
case 72:ret = 1; break;//up
case 75:ret = 2; break;//left
case 80:ret = 3; break;//down
case 77:ret = 4; break;//right
case 90:
case 122:ret=5;break;//Z
/*case 88:
case 120:ret=6;break;//X
case 67:
case 99:ret=7;break;//C
case 65:
case 97:ret=8;break;//A
case 83:
case 115:ret=9;break;//S
case 100:
case 68:ret=10;break;//D*/
default:break;
}
} while (ret == 0);
return ret;
}
const int bets[8]={0,250,500,750};
const double pay[32]={0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0.25,
0.5,1.0,1.25,1.5,2.0,
0,0,0,0,0,};
int cr=10000,bt;
int cur,num,lst;
void showbets(){
    printf("选择赌注\n");
    for(int i=1;i<=3;i++){
        if(cur==i)printf(" >");else printf("  ");
        printf("%d 煋币\n",bets[i]);
    }
}
int add(int x){
    if(x==1)return rand()%8+1;
    else return rand()%4+4;
}
int paym(int x){
    if(x<1||x>20)return 0;
    return (int)(bt*pay[x]);
}
void showtab(){
    printf("上一次增加的点数:%d\n\n",lst);
    printf("当前点数:%d\n",num);
    if(cur==1)printf("> ");else printf("  ");
    printf("+1~8\n");
    if(cur==2)printf("> ");else printf("  ");
    printf("+4~7\n");
    if(cur==3)printf("> ");else printf("  ");
    printf("获取报酬(%d 煋币)\n",paym(num));
}
void showui(){
    printf("方向键移动,Z键选择选项\n");
    printf("你的煋币: %d\n",cr);
}
int pbets(){
    cur=1;
    while(1){
        CLS;
        showbets();
        showui();
        int p=genin();
        if(p==1)cur--,cur=max(cur,1);
        if(p==3)cur++,cur=min(cur,3);
        if(p==5)return bets[cur];
    }
}
int plays(){
    cur=1;
    while(1){
        CLS;
        showtab();
        showui();
        int p=genin();
        if(p==1)cur--,cur=max(cur,1);
        if(p==3)cur++,cur=min(cur,3);
        if(p==5){
            if(cur==1||cur==2){
                lst=add(cur);
                num+=lst;
                if(num>20){
                    CLS;
                    printf("Game Over!\n 当前点数：%d\n上一次增加点数：%d\n",num,lst);
                    system("pause");return 0;
                }
            }
            else{
                return paym(num);
            }
        }
    }
}
/*
-目标是尽量接近20点
-你开始有1~4点
-你每次可以加1~8点或者4~7点
-越接近20点回报越多，但是超过20点没有回报 
*/
int main(){
    srand(time(NULL));
    while(1){
        bt=pbets();
        cr-=bt;
        num=rand()%4+1;lst=0;
        cr+=plays();

    }
    return 0;
}
