#include<iostream>
#include<typeinfo.h>
#include<string>
using namespace std;
class Student {
private:
	int x,z;
	string y;
public:
	Student(int num, string name,int age) { x = num; y = name; z = age; }//����
	void check();//���ã�����������ͣ�
	void set(int num, string name, int age) { x = num; y = name; z = age; }//ȡֵ
	void display();//��ӡ
};
void Student::check() {
	if (typeid(x) != typeid(int))cout << "ѧ�����ʹ���" << endl;
	if (typeid(y) != typeid(string))cout << "�������ʹ���" << endl;
	if (typeid(z) != typeid(int))cout << "�������ʹ���" << endl;
}
void Student::display() {
	cout << "ѧ��:" << x << "����:" << y << "����:" << z << endl;
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