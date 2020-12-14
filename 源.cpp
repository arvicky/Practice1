#include<iostream>
#include<string>
using namespace std;
////静态成员
//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 122;//静态成员变量可以在静态函数内
//		cout << "static 函数调用" << endl;
//	}
//	static int m_A;
//
//
//};
//int Person::m_A = 0;
//void test01()
//{
//	//1通过对象访问
//	Person PP;
//	PP.func();
//	//2通过类名访问
//	//不创建具体对象
//	Person::func();
//
//}
//int main()
//{
//	test01();
//
//	return 0;
//}
//
//*************************************************************************
////this指针的使用
//class person
//{
//	//1解决名称冲突
//
//	//2返回对象本身用指针*this
//public:
//	
//	person(int age)
//	{
//		this->age = age;
//	}
//	int age;
//	person & Addpersonage(person& p)//创建类成员并使用别名p（约等于使用指针）利用引用 
//	{
//		this->age += p.age;
//		return *this;
//	}
//};
//
//void test01()
//{
//	person person01(18);//使用构造函数
//	
//
//	cout << "该成员年龄为" << person01.age << endl;
//}
//void test02()
//{
//	person P1(10);
//	person P2(20);
//	P2.Addpersonage(P1).Addpersonage(P1).Addpersonage(P1);//链式编程
//	cout << "P2的年龄为" << P2.age << endl;
//}//如果 改为person Addpersonage（person & p） 则返回的是一个值而不是返回引用，区别在于
////每一次返回后都会创建一个新的对象而不是重复对一个对象进行操作  每次输出结果都会是30
//int main()
//{
//	test02();
//}****************************************************************************
//空指针访问成员函数
//class Person
//{
//public:
//	void showclassname()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void  showPersonAge()
//	{
//		cout << "The person age is" << m_Age<<endl;
//	}
//	int m_Age;
//};
//*************************************************************************
//常函数与常对象
//class Person
//{
//public:
//	void showPerson() const  //常函数
//	{
//		m_B = 100; //可以修改
//	  this ->m_A = 100;  //不可以赋值
//	}// this = NULL; //该指针不可以修改指向 --指针常量
//	void funct01()
//	{
//		m_A = 12122;
//	
//	}
//	int m_A;
//	mutable int m_B;//在常函数中想要进行修改
//};
////常对象 
//void test()
//{
//	const Person P; //在对象前加const，变为常对象
//	P.m_A = 100;  //常对象下也不可以修改
//	P.m_B = 120; //可以修改
//	P.showPerson();
//	P.funct01();// 常对象不能够使用普通函数
//}
////常对象只能调用常函数
//**************************************************************
//友元
class Building
{
	friend void goodgay(Building* building);
public:
	void func()
	{
		m_sittingroom = "客厅";
		m_bedroom = "卧室";
	}

	string m_sittingroom;
private:
	string m_bedroom;

};
void goodgay(Building *building)
{
	cout << "基友的全局函数 正在访问——客厅" << building->m_sittingroom << endl;
	cout << "基友的全局函数 正在访问——卧室" << building->m_bedroom << endl;
}
void test01()
{
	Building building;
	goodgay(&building);
}
int main()
{
	test01();
	return 0;
}