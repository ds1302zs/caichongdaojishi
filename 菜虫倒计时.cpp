#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main() {
	long long t=1575519300;
	cout<<"误差：±2秒"; 
	for(int i=5; i<=31; i++) {
		while(t-time(NULL)>0) {
			system("cls");
			cout<<"本产品由学校食堂菜有虫(C)赞助&支持"<<endl;
			cout<<"学校食堂，饭菜健康；油盐酱醋，一个不放！"<<endl;
			cout<<"学校食堂，饭菜健康；菜虫米虫，百虫齐放！"<<endl;
			cout<<"距离12月"<<i<<"日倒饭还有"<<t-time(NULL)<<"秒"<<endl;
			if(t-time(NULL)<=10){
				cout<<"\a";
			}
			Sleep(1000);
		}
		t+=86400;
	}
	t=1546316160;
	for(int i=1; i<=9; i++) {
		while(t-time(NULL)>0) {
			system("cls");
			//cout<<"误差：±2秒"<<endl;
			cout<<"本产品由学校食堂菜有虫(C)赞助&支持"<<endl;
			cout<<"学校食堂，饭菜健康；油盐酱醋，一个不放！"<<endl;
			cout<<"学校食堂，饭菜健康；菜虫米虫，百虫齐放！"<<endl;
			cout<<"距离1月"<<i<<"日倒饭还有"<<t-time(NULL)<<"秒"<<endl;
			if(t-time(NULL)>=10 && t-time(NULL)<=1){
				cout<<"\a";
			}
			Sleep(1000);
		}
		t+=86400;
	}
	return 0;
}
