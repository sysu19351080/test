#include<iostream>
#include<typeinfo.h>
#include<string>
using namespace std;
class Student {
private:
	int x,z;
	string y;
public:
	Student(int num, string name,int age) { x = num; y = name; z = age; }//构造
	void check();//设置（检查数据类型）
	void set(int num, string name, int age) { x = num; y = name; z = age; }//取值
	void display();//打印
};
void Student::check() {
	if (typeid(x) != typeid(int))cout << "学号类型错误" << endl;
	if (typeid(y) != typeid(string))cout << "姓名类型错误" << endl;
	if (typeid(z) != typeid(int))cout << "年龄类型错误" << endl;
}
void Student::display() {
	cout << "学号:" << x << "姓名:" << y << "年龄:" << z << endl;
}
int main() {
	Student a(19351080, "Tom", 18);
	a.check();
	a.display();
	Student b(19351070, "Bob", 17);
	b.check();
	b.display();
	return 0;
}