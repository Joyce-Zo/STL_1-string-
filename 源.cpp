#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>// ��׼�㷨ͷ�ļ�
#include<string>

void my_print(int val)
{
	cout << val << " ";
}

// vector����Զ�����������
// 
//int main()
//{
//	// ����һ��vector����������������
//	vector<int> v;
//	// ʹ��vector��pushback������������
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	// ͨ�����������������е�����
//	// ���� 1
//	//vector<int>::iterator v_Begin = v.begin();// ��ʼ��������ָ�������е�һ��Ԫ��
//	//vector<int>::iterator v_End = v.end();// ������������ָ�����������һ��Ԫ�صĺ���һ��Ԫ��
//	//// ��������
//	//while (v_Begin != v_End)
//	//{
//	//	cout << *v_Begin << " ";
//	//	v_Begin++;
//	//}
//	
//	// ���� 2
//	//for (vector<int>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	//{
//	//	cout << *v_begin << " ";
//	//}
//
//	// ���� 3
//	for_each(v.begin(), v.end(), my_print);
//	//	     ��ʼλ��   ����λ��  ���õĺ���
//
//	return 0;
//}

// vector����Զ�����������

//class person
//{
//public:
//	person(string name,int age)
//	{
//		m_age = age;
//		m_name = name;
//	}
//	int m_age;
//	string m_name;
//};
//void test01()
//{
//		// ����vector����v
//	vector<person> v;
//	// �����Զ����������ʹ�������
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// β�������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	// ��������
//	for (vector<person>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{	// v_begin�����Ǹ�ָ�룬���Խ�����.  ����-> ����
//		cout << (*v_begin).m_name << "������Ϊ" << (*v_begin).m_age << endl;
//		cout << v_begin->m_name << "������Ϊ" << v_begin->m_age << endl;
//	}
//}
//void test02()
//{
//		// ����vector����v
//	vector<person*> v;
//	// �����Զ����������ʹ�������
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// β�������,p��ָ�룬���Դ���&
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	// ��������
//	for (vector<person*>::iterator v_begin =v.begin(); v_begin != v.end(); v_begin++)
//	{	// *v_begin���Ǹ�ָ�룬���Կ����ٴν�����*������->����
//		cout << (*(*v_begin)).m_name << "������Ϊ" << (*(*v_begin)).m_age << endl;
//		cout << (*v_begin)->m_name << "������Ϊ" << (*v_begin)->m_age << endl;
//	}
//}
//
//void test03()
//{
//	// ����������v
//	vector<vector<int>> v;
//	// ����С����
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	// ��С�����м�������
//	int i = -1;
//	while (++i != 4)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	// ��С�������뵽��������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	// ͨ��������������������
//	for (vector<vector<int>>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{
//		// *v_begin == vector<int> ������������Ҫ����һ�α���
//		for (vector<int>::iterator vv_begin = (*v_begin).begin();vv_begin != (*v_begin).end(); vv_begin++)
//		{
//			cout << *vv_begin << " ";
//		}			
//		cout << endl;
//	}
//}
//int main()
//{
//	test03();
//
//	//for_each(v.begin(), v.end(), my_print);
//	return 0;
//}

//    STL����

//	 1��string

/*
 string ();����һ���յ��ַ���
 string(const char* c);ʹ���ַ���c��ʼ��
 string(const string&str);ʹ��һ��string�����ʼ����һ��string����
 string(int n,char c);ʹ��n���ַ�c��ʼ��
*/
void test01()
{
	// 
	string s1;// ����һ���յ��ַ���

	const char* str = "Type here";
	string s2(str); // string(const char* s)����c��stringת����c++��string��ʹ���ַ���s��ʼ��
	cout << s2 << endl;
	string s3(s2);	// string(const string& str)���������캯����ʹ��һ��string�����ʼ����һ��string����
	cout << s3 << endl;
	string s4(88, 'x');// string(int n,char c) ʹ��n���ַ�x��ʼ��s4
	cout << s4 << endl;
}
/*�ַ�����ֵ
 string& operator=(const char* s);    1 ��char*�����ַ��� ��ֵ�� ��ǰ�ַ���
 string& operator=(const string& s);  2 ���ַ���s ��ֵ�� ��ǰ�ַ���
 string& operator=(char c);		      3 ���ַ�c ��ֵ�� ��ǰ�ַ���
 string& assign(const	char* s);	  4 ���ַ���s ��ֵ�� ��ǰ�ַ���
 string& assign(const char* s,int n); 5 ���ַ���sǰn���ַ� ��ֵ�� ��ǰ�ַ���
 string& assign(const string& s,int n);5 ��ȥ�ַ���sǰn���ַ� ʣ�µĸ�ֵ�� ��ǰ�ַ���
 string& assign(const string& s);	  6 ���ַ���s ��ֵ�� ��ǰ�ַ���
 string& assign(int n,char c);		  7 ��n���ַ�c ��ֵ�� ��ǰ�ַ���
*/
void test02()
{
	const char* str0 = "Type there";
	string str1;
	str1 = str0;		// 1 
	str1 = "Type here"; // 1
	cout << str1 << endl;
	
	string str2;
	str2 = str1;		// 2
	cout << str2 << endl;

	string str3;
	str3 = 'x';			// 3
	cout << str3 << endl;

	string str4;
	str4.assign(str0);	// 4
	cout << str4 << endl;

	string str5;
	str5.assign(str0,4);// 5 ����const char*,ǰ��4��
	cout << str5 << endl;
	str5.assign(str1, 4);// 5 ����string& s����ȥǰ��4��ʣ�µ�
	cout << str5 << endl;

	string str6;
	str6.assign(str1);	// 6
	cout << str6 << endl;

	string str7;
	str7.assign(88, 'c');// 7
	cout << str7 << endl;
}
/*�ַ���ƴ��
 string& operator+=(const char* s);	    1 ��char*�����ַ��� ƴ�ӵ���ǰ�ַ���ĩβ
 string& operator+=(const string& s);	2 ���ַ���s ƴ�ӵ���ǰ�ַ���ĩβ
 string& operator+=(const char c);   	3 ���ַ�c ƴ�ӵ���ǰ�ַ���ĩβ
 string& append(const	char* s);		4 ���ַ���s ƴ�ӵ���ǰ�ַ���ĩβ
 string& append(const char* s,int n);   5 ���ַ���sǰn���ַ� ƴ�ӵ���ǰ�ַ���ĩβ
 string& append(const string& s,int n); 5 ���ַ���s��ȥǰn���ַ� ʣ�µ�ƴ�ӵ���ǰ�ַ���ĩβ
 string& append(const string& s);		6 ���ַ���s ƴ�ӵ���ǰ�ַ���ĩβ
 string& append(const string& s,int pos,int n);7 ���ַ���s��pos��ʼλ�õ�n���ַ� ƴ�ӵ���ǰ�ַ���ĩβ
*/
void test03()
{
	string str1 = "I";
	const char* s = " am ";
	//str1 += " am ";			// 1
	str1 += s;					// 1
	cout << str1 << endl;

	string str2 = "studious";
	str1 += str2;				// 2
	cout << str1 << endl;

	str1 += 'o';
	cout << str1 << endl;		// 3

	const char* s1 = " are ";
	string str3 = "You";
	str3.append(s1);		// 4
	cout << str3 << endl;

	str3.append(s1, 3);		// 5 ��s1ǰ3���ַ�׷�ӵ�����
	cout << str3 << endl;
	str3.append(str1, 3);	// 5 ��str1��ȥǰ3���ַ���ʣ�µ�׷�ӵ�����
	cout << str3 << endl;	

	str3.append(str1);
	cout << str3 << endl;	// 6

	string str4;
	str4.append(str3, 11, 14);//7
	cout << str4 << endl;
}
/* �ַ����������滻
 �ҵ�һ��
int find(const string& s,int pos = 0)const;	 1��posλ�ò����ַ���s��һ�γ���λ��
int find(const char* s,int pos = 0)const;	 2��posλ�ò����ַ���s��һ�γ���λ��
int find(const char* s,int pos,int n)const;	 3��posλ�ò����ַ���s��ǰn���ַ���һ�γ���λ��
int find(const char c,int pos = 0)const;	 4��posλ�ò����ַ�c��һ�γ���λ��
 �����һ��
int rfind(const string& s,int pos = npos)const; 5��posλ�ò����ַ���s���һ�γ���λ��
int rfind(const char* s,int pos = npos)const;	6��posλ�ò����ַ���s���һ�γ���λ��
int rfind(const char* s,int pos,int n)const;	7��posλ�ò����ַ���sǰn���ַ����һ�γ���λ��
int rfind(const char c,int pos = 0)const;		8��posλ�ò����ַ�c���һ�γ���λ��
 �滻
string& replace(int pos,int n,const string& s); 9��posλ�ÿ�ʼn���ַ��滻Ϊ�ַ���s
string& replace(int pos,int n,const char* s);  10��posλ�ÿ�ʼn���ַ��滻Ϊ�ַ���s
*/
void test04()
{
	// ����
	string s1 = "abcdefgcd";
	int pos = s1.find("cd"); // ����pos��Ĭ�ϴ�0��ʼ���ַ�cd��һ�γ���λ��
	cout << pos << endl;
	pos = s1.rfind("cd");// ����pos��Ĭ�ϴ�0��ʼ���ַ�cd���һ�γ���λ��
	cout << pos << endl;

	int pos1 = s1.find("cd", 3);// ��3��ʼ���ַ�cd��һ�γ���λ��
	cout << pos1 << endl;
	pos1 = s1.rfind("cd",3);	// ��3��ʼ���ַ�cd���һ�γ���λ��
	cout << pos1 << endl;

	int pos2 = s1.find("cd", 3, 1); // ��3��ʼ���ַ���cd��ǰ1���ַ���һ�γ���λ��
	cout << pos2 << endl;
	pos2 = s1.rfind("cd", 3, 1); // ��3��ʼ���ַ���cd��ǰ1���ַ����һ�γ���λ��
	cout << pos2 << endl;
}
void test05()
{
	// �滻
	string s1 = "abcdefgcd";
	string str = " hello my ";
	s1.replace(2, 5, str);// ��2��ʼǰ5���ַ��滻Ϊstr
	cout << s1 << endl;
}
/*�ַ����Ƚ�
int compare(const string& s)const;  ���ַ���s�Ƚ�
int compare(const char* s)const;    ���ַ���s�Ƚ�
*/
void test06()
{
	string s1 = "abcdefg";
	string s2 = "abcdefg"; // ���� 0
	string s3 = "abcdef";  // ���� 1
	string s4 = "abcdefgh";// С�� -1
	int ret = s1.compare(s2);
	cout << ret << endl;
	ret = s1.compare(s3);
	cout << ret << endl;
	ret = s1.compare(s4);
	cout << ret << endl;
}
/*�ַ���ȡ
char& operator[](int n);  ͨ��[]��ȡ�ַ�
char& at(int n);		  ͨ��at������ȡ�ַ�
*/
void test07()
{
	// 1 ͨ��[]��ʽ��ȡ�ַ�
	string s = "Type here";
	for (int i = 0; i < s.size(); i++)
	{					// .size()���Է����ַ�s�ĳ���
		cout << s[i] << " ";
	}
	cout << endl;
	// 2 ͨ��at��ʽ��ȡ�ַ�
	for (int i = 0; i < s.size(); i++)
	{
		cout << s.at(i) << " ";
	}
	cout << endl;
	// ͨ��[]�޸��ַ�
	s[0] = 't';
	cout << s << endl;
	// ͨ��at�޸��ַ�
	s.at(1) = 'Y';
	cout << s << endl;
}
/*�����ɾ��
 string& insert(int pos,const char* s);  1��posλ�ò����ַ���s
 string& insert(int pos,const string& s);2��posλ�ò����ַ���s
 string& insert(int pos,int n,char c);   3��posλ�ò���n���ַ�c
 string& erase(int pos,int n = npos);	 4ɾ����pos��ʼ��n���ַ�
*/
void test08()
{
	string s1 = "Type here";
	s1.insert(0, "ok");   // 1 char* ��0��ʼ����ok�ַ�
	cout << s1 << endl;

	string s2 = "ko";
	s1.insert(0, s2);     // 2 string& ��0��ʼ����ko�ַ�
	cout << s1 << endl;

	s1.insert(0, 8, '+'); // 3 ��0��ʼ����8���ַ�+
	cout << s1 << endl;

	s1.erase(0, 12);      // 4 ��λ��0��ʼɾ��okko4����8��+һ��12���ַ�
	cout << s1 << endl;
}
/* ��ȡ�ִ�
string substr(int pos,int n=npos)const; // ������pos��ʼn���ַ���ɵ��ַ���
*/
void test09()
{
	string s1 = "Type there";
	string s2 = s1.substr(5, 5);
	cout << s2 << endl;
}
void test10()
{
	string user_email = "Joyce@Gmail.com";
	// ���������ȡ�û�����
	int pos = user_email.find('@');// ��email�ж�ȡ@�ַ����ڵ�λ�ã�������λ��5
	string user_name = user_email.substr(0, pos); // ��ȡ0-5���ַ�
	cout << user_name << endl;
}
int main()
{
	test10();
	return 0;
}