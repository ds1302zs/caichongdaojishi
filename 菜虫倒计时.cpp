#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main() {
	long long t=1575519300;
	cout<<"����2��"; 
	for(int i=5; i<=31; i++) {
		while(t-time(NULL)>0) {
			system("cls");
			cout<<"����Ʒ��ѧУʳ�ò��г�(C)����&֧��"<<endl;
			cout<<"ѧУʳ�ã����˽��������ν��ף�һ�����ţ�"<<endl;
			cout<<"ѧУʳ�ã����˽������˳��׳棬�ٳ���ţ�"<<endl;
			cout<<"����12��"<<i<<"�յ�������"<<t-time(NULL)<<"��"<<endl;
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
			//cout<<"����2��"<<endl;
			cout<<"����Ʒ��ѧУʳ�ò��г�(C)����&֧��"<<endl;
			cout<<"ѧУʳ�ã����˽��������ν��ף�һ�����ţ�"<<endl;
			cout<<"ѧУʳ�ã����˽������˳��׳棬�ٳ���ţ�"<<endl;
			cout<<"����1��"<<i<<"�յ�������"<<t-time(NULL)<<"��"<<endl;
			if(t-time(NULL)>=10 && t-time(NULL)<=1){
				cout<<"\a";
			}
			Sleep(1000);
		}
		t+=86400;
	}
	return 0;
}
