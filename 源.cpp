#include<iostream>
#include<string>
using namespace std;
////��̬��Ա
//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 122;//��̬��Ա���������ھ�̬������
//		cout << "static ��������" << endl;
//	}
//	static int m_A;
//
//
//};
//int Person::m_A = 0;
//void test01()
//{
//	//1ͨ���������
//	Person PP;
//	PP.func();
//	//2ͨ����������
//	//�������������
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
////thisָ���ʹ��
//class person
//{
//	//1������Ƴ�ͻ
//
//	//2���ض�������ָ��*this
//public:
//	
//	person(int age)
//	{
//		this->age = age;
//	}
//	int age;
//	person & Addpersonage(person& p)//�������Ա��ʹ�ñ���p��Լ����ʹ��ָ�룩�������� 
//	{
//		this->age += p.age;
//		return *this;
//	}
//};
//
//void test01()
//{
//	person person01(18);//ʹ�ù��캯��
//	
//
//	cout << "�ó�Ա����Ϊ" << person01.age << endl;
//}
//void test02()
//{
//	person P1(10);
//	person P2(20);
//	P2.Addpersonage(P1).Addpersonage(P1).Addpersonage(P1);//��ʽ���
//	cout << "P2������Ϊ" << P2.age << endl;
//}//��� ��Ϊperson Addpersonage��person & p�� �򷵻ص���һ��ֵ�����Ƿ������ã���������
////ÿһ�η��غ󶼻ᴴ��һ���µĶ���������ظ���һ��������в���  ÿ��������������30
//int main()
//{
//	test02();
//}****************************************************************************
//��ָ����ʳ�Ա����
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
//�������볣����
//class Person
//{
//public:
//	void showPerson() const  //������
//	{
//		m_B = 100; //�����޸�
//	  this ->m_A = 100;  //�����Ը�ֵ
//	}// this = NULL; //��ָ�벻�����޸�ָ�� --ָ�볣��
//	void funct01()
//	{
//		m_A = 12122;
//	
//	}
//	int m_A;
//	mutable int m_B;//�ڳ���������Ҫ�����޸�
//};
////������ 
//void test()
//{
//	const Person P; //�ڶ���ǰ��const����Ϊ������
//	P.m_A = 100;  //��������Ҳ�������޸�
//	P.m_B = 120; //�����޸�
//	P.showPerson();
//	P.funct01();// �������ܹ�ʹ����ͨ����
//}
////������ֻ�ܵ��ó�����
//**************************************************************
//��Ԫ
class Building
{
	friend void goodgay(Building* building);
public:
	void func()
	{
		m_sittingroom = "����";
		m_bedroom = "����";
	}

	string m_sittingroom;
private:
	string m_bedroom;

};
void goodgay(Building *building)
{
	cout << "���ѵ�ȫ�ֺ��� ���ڷ��ʡ�������" << building->m_sittingroom << endl;
	cout << "���ѵ�ȫ�ֺ��� ���ڷ��ʡ�������" << building->m_bedroom << endl;
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