#include<iostream>
#include<typeinfo.h>
using namespace std;	
int x = 0;
enum year{a=2010,b,c,d,e,f};
enum month{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Spet,Oct,Nov,Dec};
enum weekday{Mon,Tue,Wed,Thur,Fir,Sat,Sun};
class Timedate {
private:
	year Y;
	month M;
	weekday W;
	int a, b, c;
public:
	void get();
	void check();
	void display() {cout << Y << "年 " << M << "月" << " 星期" << W << " " << a << "时 " << b << "分 " << c << "秒" << endl;};
};
void Timedate::check() {
	if(typeid((int&)Y)!=typeid(int)||Y<2010||Y>2015||
		typeid((int&)M)!= typeid(int)||M<1||M>12||
		typeid((int&)W)!= typeid(int)||W<1||W>7||
		typeid(a)!=typeid(int)||a<1||a>12||
		typeid(b)!=typeid(int)||b<1||b>60||
		typeid(c)!=typeid(int)||c<1||c>60)
	{ cout << "输入具体时间格式有误" << endl; x = 1; }
}
void Timedate::get(){
	cout << "请输入具体时间(均采用阿拉伯数字）：" << endl;
	cin >> (int&)Y >> (int&)M >> (int&)W >> a >> b >> c ;
}
int main() {
	Timedate date;
	date.get();
	date.check();
	if(x==0)date.display();
	return 0;
}