#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#include<cstdlib>
#include<conio.h>
#define random(x) (rand()%x)
using namespace std;

void SetPos(COORD a)
{
	HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(out, a);
}
 
void SetPos(int i, int j)
{
	COORD pos={i, j};
	SetPos(pos);
}
void zz(int ti){
	while(!kbhit()){
		SetPos(0,0);
		cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	}
	SetPos(0,15);
	return;
}
int main(){
	srand((int)time(0));
	cout<<"欢迎来到漫威游戏！！按1继续。"<<endl;
	 double a,yt=0;
	 cin>>a;
	 if(a==1){ 
	 cout<<"开始！"<<endl;
	 } 
	 else
	 cout<<"开……始？"<<endl;
	 
	 cout<<"P1开始选择角色！！！"<<endl;
	 cout << "请选择阵容：1、复仇者联盟（按一）                2、银河护卫队（按2）                          3、野英雄（按三）                          4、反派（按四）                                        5、X战警"; 
	 int zhenrong;
	 cin >> zhenrong;
	 if(zhenrong == 1)
	 {
		 cout<<"1是钢铁侠(近14远5)，2是蜘蛛侠(近6远12),3是奇异博士(近5远30(远冷却3回合)),4是美国队长(近6远20(远冷却1回合)),5是浩克(近9远7(攻血+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1选择了钢铁侠"<<endl;
		 g=14;
		 g2=5;break;
	 	case 9999:cout<<"恭喜！！选到隐藏人物：古一！！（按7加血)(近100远55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1选择了蜘蛛侠"<<endl;
		     g=6;
		     g2=12; 
		     break;
		case 3:	cout<<"P1选择了奇异博士"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1选择了美国队长"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1选择了浩克"<<endl; 
		    g=9;
		    g2=7;
	 } 
	 
	 cout<<"选择模式，1是单人,2是疯狂"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"即将开始单人模式"<<endl;
	 else if(mode==2){
	 	cout<<"即将开始疯狂模式（极度危险）"<<endl;
	 }else cout<<"未开发"<<endl;
	 if(mode==1) cout<<"选择难度 1是简单 2是正常 3是困难 4是疯狂 5是极限 6是超极限 7是地狱 8是不可能（谨慎选择5+）"<<endl;
	 if(mode==2) cout<<"选择敌人 1是满大人(level 4) 2是奥创(level 6!!) 3是乌木喉(level 7!!!) 4是黑暗奇异(level 6!!) 5是灭霸(level 7!!!) 6是天神组(level 7!!!) 7是天神组(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"已选择"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"普通小兵"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<"武器:"<<"无";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl;
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"小兵对你造成了"<<ze<<"点伤害"<<endl;
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"小兵受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"小兵受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"敌人"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"你太慢了，敌人偷袭了你"<<endl;
	 		usleep(500000);
	 		cout<<"你受到了"<<20+nzt3<<"点伤害"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"你的中毒程度上升了"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"敌人对你多造成了"<<(nzt2-nzt)*60<<"点伤害"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"天神组使用了血瓶回了30滴血"<<endl; 
				zf--;
			    cout<<"天神组的血瓶还剩"<<zf<<"瓶"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"天神组决定攻击你"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"天神组决定攻击你"<<endl;
				    cout<<"天神组受到了0.3点反伤"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl; 
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"你的攻击被格挡/闪避了！"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"敌人对你造成了"<<ze<<"点伤害"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"你中毒了，你受到了"<<du<<"点伤害"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"敌人受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"敌人受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 2)
	{
		cout<<"1是星爵(近10远10)，2是卡魔拉(近7远12),3是格鲁特(近5远30(远冷却3回合)),4是火箭(近6远20(远冷却1回合)),5是蟑螂女(近1远2(攻血+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1选择了星爵"<<endl;
		 g=10;
		 g2=10;break;
	 	case 9999:cout<<"恭喜！！选到隐藏人物：古一！！（按7加血)(近100远55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1选择了卡魔拉"<<endl;
		     g=7;
		     g2=12; 
		     break;
		case 3:	cout<<"P1选择了格鲁特"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1选择了火箭"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1选择了蟑螂女"<<endl; 
		    g=1;
		    g2=2;
	 } 
	 
	 cout<<"选择模式，1是单人,2是疯狂"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"即将开始单人模式"<<endl;
	 else if(mode==2){
	 	cout<<"即将开始疯狂模式（极度危险）"<<endl;
	 }else cout<<"未开发"<<endl;
	 if(mode==1) cout<<"选择难度 1是简单 2是正常 3是困难 4是疯狂 5是极限 6是超极限 7是地狱 8是不可能（谨慎选择5+）"<<endl;
	 if(mode==2) cout<<"选择敌人 1是满大人(level 4) 2是奥创(level 6!!) 3是乌木喉(level 7!!!) 4是黑暗奇异(level 6!!) 5是灭霸(level 7!!!) 6是天神组(level 7!!!) 7是天神组(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"已选择"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"普通小兵"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<"武器:"<<"无";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl;
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"小兵对你造成了"<<ze<<"点伤害"<<endl;
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"小兵受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"小兵受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"敌人"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"你太慢了，敌人偷袭了你"<<endl;
	 		usleep(500000);
	 		cout<<"你受到了"<<20+nzt3<<"点伤害"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"你的中毒程度上升了"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"敌人对你多造成了"<<(nzt2-nzt)*60<<"点伤害"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"天神组使用了血瓶回了30滴血"<<endl; 
				zf--;
			    cout<<"天神组的血瓶还剩"<<zf<<"瓶"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"天神组决定攻击你"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"天神组决定攻击你"<<endl;
				    cout<<"天神组受到了0.3点反伤"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl; 
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"你的攻击被格挡/闪避了！"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"敌人对你造成了"<<ze<<"点伤害"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"你中毒了，你受到了"<<du<<"点伤害"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"敌人受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"敌人受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 3)
	{
		cout<<"1是月光骑士（近10远15）"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1选择了月光骑士"<<endl;
		 g=10;
		 g2=15;break;
	 	case 9999:cout<<"恭喜！！选到隐藏人物：古一！！（按7加血)(近100远55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
	 } 
	 
	 cout<<"选择模式，1是单人,2是疯狂"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"即将开始单人模式"<<endl;
	 else if(mode==2){
	 	cout<<"即将开始疯狂模式（极度危险）"<<endl;
	 }else cout<<"未开发"<<endl;
	 if(mode==1) cout<<"选择难度 1是简单 2是正常 3是困难 4是疯狂 5是极限 6是超极限 7是地狱 8是不可能（谨慎选择5+）"<<endl;
	 if(mode==2) cout<<"选择敌人 1是满大人(level 4) 2是奥创(level 6!!) 3是乌木喉(level 7!!!) 4是黑暗奇异(level 6!!) 5是灭霸(level 7!!!) 6是天神组(level 7!!!) 7是天神组(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"已选择"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"普通小兵"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<"武器:"<<"无";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl;
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"小兵对你造成了"<<ze<<"点伤害"<<endl;
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"小兵受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"小兵受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"敌人"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"你太慢了，敌人偷袭了你"<<endl;
	 		usleep(500000);
	 		cout<<"你受到了"<<20+nzt3<<"点伤害"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"你的中毒程度上升了"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"敌人对你多造成了"<<(nzt2-nzt)*60<<"点伤害"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"天神组使用了血瓶回了30滴血"<<endl; 
				zf--;
			    cout<<"天神组的血瓶还剩"<<zf<<"瓶"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"天神组决定攻击你"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"天神组决定攻击你"<<endl;
				    cout<<"天神组受到了0.3点反伤"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl; 
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"你的攻击被格挡/闪避了！"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"敌人对你造成了"<<ze<<"点伤害"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"你中毒了，你受到了"<<du<<"点伤害"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"敌人受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"敌人受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 4)
	{
		cout<<"1是灭霸(近14远5)，2是满大人(近6远12),3是暗黑奇异(近5远30(远冷却3回合)),4是变异蜘蛛侠(近6远20(远冷却1回合)),5是灰浩克(近9远7(攻血+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1选择了灭霸"<<endl;
		 g=14;
		 g2=5;break;
	 	case 9999:cout<<"恭喜！！选到隐藏人物：古一！！（按7加血)(近100远55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1选择了满大人"<<endl;
		     g=6;
		     g2=12; 
		     break;
		case 3:	cout<<"P1选择了黑暗奇异"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1选择了变异蜘蛛侠"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1选择了灰浩克"<<endl; 
		    g=9;
		    g2=7;
	 } 
	 
	 cout<<"选择模式，1是单人,2是疯狂"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"即将开始单人模式"<<endl;
	 else if(mode==2){
	 	cout<<"即将开始疯狂模式（极度危险）"<<endl;
	 }else cout<<"未开发"<<endl;
	 if(mode==1) cout<<"选择难度 1是简单 2是正常 3是困难 4是疯狂 5是极限 6是超极限 7是地狱 8是不可能（谨慎选择5+）"<<endl;
	 if(mode==2) cout<<"选择敌人 1是满大人(level 4) 2是奥创(level 6!!) 3是乌木喉(level 7!!!) 4是黑暗奇异(level 6!!) 5是灭霸(level 7!!!) 6是天神组(level 7!!!) 7是天神组(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"已选择"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"普通小兵"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<"武器:"<<"无";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl;
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"小兵对你造成了"<<ze<<"点伤害"<<endl;
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"小兵受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"小兵受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"敌人"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"你太慢了，敌人偷袭了你"<<endl;
	 		usleep(500000);
	 		cout<<"你受到了"<<20+nzt3<<"点伤害"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"你的中毒程度上升了"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"敌人对你多造成了"<<(nzt2-nzt)*60<<"点伤害"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"天神组使用了血瓶回了30滴血"<<endl; 
				zf--;
			    cout<<"天神组的血瓶还剩"<<zf<<"瓶"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"天神组决定攻击你"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"天神组决定攻击你"<<endl;
				    cout<<"天神组受到了0.3点反伤"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl; 
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"你的攻击被格挡/闪避了！"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"敌人对你造成了"<<ze<<"点伤害"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"你中毒了，你受到了"<<du<<"点伤害"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"敌人受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"敌人受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 5)
	{
		cout<<"1是金刚狼(近14远5)，2是X教授(近6远12),3是万磁王(近5远30(远冷却3回合)),4是魔形女(近6远20(远冷却1回合)),5是凤凰女(近9远7(攻血+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1选择了金刚狼"<<endl;
		 g=14;
		 g2=5;break;
	 	case 9999:cout<<"恭喜！！选到隐藏人物：古一！！（按7加血)(近100远55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1选择了X教授"<<endl;
		     g=6;
		     g2=12; 
		     break;
		case 3:	cout<<"P1选择万磁王"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1选择了魔形女"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1选择了凤凰女"<<endl; 
		    g=9;
		    g2=7;
	 } 
	 
	 cout<<"选择模式，1是单人,2是疯狂"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"即将开始单人模式"<<endl;
	 else if(mode==2){
	 	cout<<"即将开始疯狂模式（极度危险）"<<endl;
	 }else cout<<"未开发"<<endl;
	 if(mode==1) cout<<"选择难度 1是简单 2是正常 3是困难 4是疯狂 5是极限 6是超极限 7是地狱 8是不可能（谨慎选择5+）"<<endl;
	 if(mode==2) cout<<"选择敌人 1是满大人(level 4) 2是奥创(level 6!!) 3是乌木喉(level 7!!!) 4是黑暗奇异(level 6!!) 5是灭霸(level 7!!!) 6是天神组(level 7!!!) 7是天神组(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"已选择"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"普通小兵"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<"武器:"<<"无";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl;
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"小兵对你造成了"<<ze<<"点伤害"<<endl;
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"小兵受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"小兵受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"敌人"<<"                                   "<<"血量："<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"你"<<"                                     "<<"血量："<<you<<endl;
	 	cout<<"1是打              2是补血            3是扔"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"你太慢了，敌人偷袭了你"<<endl;
	 		usleep(500000);
	 		cout<<"你受到了"<<20+nzt3<<"点伤害"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"你的中毒程度上升了"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"敌人对你多造成了"<<(nzt2-nzt)*60<<"点伤害"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"天神组使用了血瓶回了30滴血"<<endl; 
				zf--;
			    cout<<"天神组的血瓶还剩"<<zf<<"瓶"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"天神组决定攻击你"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"天神组决定攻击你"<<endl;
				    cout<<"天神组受到了0.3点反伤"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"攻击冷却中……"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"你回了30滴血"<<endl; 
			         usleep(500000);
			         cout<<"血瓶还剩"<<f<<"瓶"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"你使用了DEBUG，血回了99999滴！"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"你的攻击被格挡/闪避了！"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"你吸了8滴血"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"敌人对你造成了"<<ze<<"点伤害"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"你中毒了，你受到了"<<du<<"点伤害"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"你受到了"<<yt<<"点反伤"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"敌人受到了"<<g<<"点伤害"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"敌人受到了"<<g2<<"点伤害"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"你"<<"："<<q<<endl;
	 	cout<<"你花了"<<nti<<"秒";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	else
	{
		cout << "你是什么意思？？？？？";
	}
	return 0;
}
