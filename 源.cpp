#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>// 标准算法头文件
#include<string>

void my_print(int val)
{
	cout << val << " ";
}

// vector存放自定义数据类型
// 
//int main()
//{
//	// 创建一个vector容器，类似于数组
//	vector<int> v;
//	// 使用vector的pushback函数插入数据
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	// 通过迭代器访问容器中的数据
//	// 方法 1
//	//vector<int>::iterator v_Begin = v.begin();// 起始迭代器，指向容器中第一个元素
//	//vector<int>::iterator v_End = v.end();// 结束迭代器，指向容器中最后一个元素的后面一个元素
//	//// 遍历访问
//	//while (v_Begin != v_End)
//	//{
//	//	cout << *v_Begin << " ";
//	//	v_Begin++;
//	//}
//	
//	// 方法 2
//	//for (vector<int>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	//{
//	//	cout << *v_begin << " ";
//	//}
//
//	// 方法 3
//	for_each(v.begin(), v.end(), my_print);
//	//	     起始位置   结束位置  调用的函数
//
//	return 0;
//}

// vector存放自定义数据类型

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
//		// 创建vector容器v
//	vector<person> v;
//	// 根据自定义数据类型创建对象
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// 尾插进容器
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	// 访问数据
//	for (vector<person>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{	// v_begin本质是个指针，可以解引用.  或者-> 访问
//		cout << (*v_begin).m_name << "的年龄为" << (*v_begin).m_age << endl;
//		cout << v_begin->m_name << "的年龄为" << v_begin->m_age << endl;
//	}
//}
//void test02()
//{
//		// 创建vector容器v
//	vector<person*> v;
//	// 根据自定义数据类型创建对象
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// 尾插进容器,p是指针，所以带上&
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	// 访问数据
//	for (vector<person*>::iterator v_begin =v.begin(); v_begin != v.end(); v_begin++)
//	{	// *v_begin还是个指针，所以可以再次解引用*，或者->访问
//		cout << (*(*v_begin)).m_name << "的年龄为" << (*(*v_begin)).m_age << endl;
//		cout << (*v_begin)->m_name << "的年龄为" << (*v_begin)->m_age << endl;
//	}
//}
//
//void test03()
//{
//	// 创建大容器v
//	vector<vector<int>> v;
//	// 创建小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	// 向小容器中加入数据
//	int i = -1;
//	while (++i != 4)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	// 将小容器加入到大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	// 通过大容器遍历所有数据
//	for (vector<vector<int>>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{
//		// *v_begin == vector<int> ，所以我们需要再做一次遍历
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

//    STL容器

//	 1、string

/*
 string ();创建一个空的字符串
 string(const char* c);使用字符串c初始化
 string(const string&str);使用一个string对象初始化另一个string对象
 string(int n,char c);使用n个字符c初始化
*/
void test01()
{
	// 
	string s1;// 创建一个空的字符串

	const char* str = "Type here";
	string s2(str); // string(const char* s)，把c的string转换成c++的string，使用字符串s初始化
	cout << s2 << endl;
	string s3(s2);	// string(const string& str)，拷贝构造函数，使用一个string对象初始化另一个string对象
	cout << s3 << endl;
	string s4(88, 'x');// string(int n,char c) 使用n个字符x初始化s4
	cout << s4 << endl;
}
/*字符串赋值
 string& operator=(const char* s);    1 把char*类型字符串 赋值给 当前字符串
 string& operator=(const string& s);  2 把字符串s 赋值给 当前字符串
 string& operator=(char c);		      3 把字符c 赋值给 当前字符串
 string& assign(const	char* s);	  4 把字符串s 赋值给 当前字符串
 string& assign(const char* s,int n); 5 把字符串s前n个字符 赋值给 当前字符串
 string& assign(const string& s,int n);5 除去字符串s前n个字符 剩下的赋值给 当前字符串
 string& assign(const string& s);	  6 把字符串s 赋值给 当前字符串
 string& assign(int n,char c);		  7 把n个字符c 赋值给 当前字符串
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
	str5.assign(str0,4);// 5 传入const char*,前面4个
	cout << str5 << endl;
	str5.assign(str1, 4);// 5 传入string& s，除去前面4个剩下的
	cout << str5 << endl;

	string str6;
	str6.assign(str1);	// 6
	cout << str6 << endl;

	string str7;
	str7.assign(88, 'c');// 7
	cout << str7 << endl;
}
/*字符串拼接
 string& operator+=(const char* s);	    1 把char*类型字符串 拼接到当前字符串末尾
 string& operator+=(const string& s);	2 把字符串s 拼接到当前字符串末尾
 string& operator+=(const char c);   	3 把字符c 拼接到当前字符串末尾
 string& append(const	char* s);		4 把字符串s 拼接到当前字符串末尾
 string& append(const char* s,int n);   5 把字符串s前n个字符 拼接到当前字符串末尾
 string& append(const string& s,int n); 5 把字符串s除去前n个字符 剩下的拼接到当前字符串末尾
 string& append(const string& s);		6 把字符串s 拼接到当前字符串末尾
 string& append(const string& s,int pos,int n);7 把字符串s从pos开始位置的n个字符 拼接到当前字符串末尾
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

	str3.append(s1, 3);		// 5 把s1前3个字符追加到后面
	cout << str3 << endl;
	str3.append(str1, 3);	// 5 把str1除去前3个字符，剩下的追加到后面
	cout << str3 << endl;	

	str3.append(str1);
	cout << str3 << endl;	// 6

	string str4;
	str4.append(str3, 11, 14);//7
	cout << str4 << endl;
}
/* 字符串查找与替换
 找第一次
int find(const string& s,int pos = 0)const;	 1从pos位置查找字符串s第一次出现位置
int find(const char* s,int pos = 0)const;	 2从pos位置查找字符串s第一次出现位置
int find(const char* s,int pos,int n)const;	 3从pos位置查找字符串s的前n个字符第一次出现位置
int find(const char c,int pos = 0)const;	 4从pos位置查找字符c第一次出现位置
 找最后一次
int rfind(const string& s,int pos = npos)const; 5从pos位置查找字符串s最后一次出现位置
int rfind(const char* s,int pos = npos)const;	6从pos位置查找字符串s最后一次出现位置
int rfind(const char* s,int pos,int n)const;	7从pos位置查找字符串s前n个字符最后一次出现位置
int rfind(const char c,int pos = 0)const;		8从pos位置查找字符c最后一次出现位置
 替换
string& replace(int pos,int n,const string& s); 9将pos位置开始n个字符替换为字符串s
string& replace(int pos,int n,const char* s);  10将pos位置开始n个字符替换为字符串s
*/
void test04()
{
	// 查找
	string s1 = "abcdefgcd";
	int pos = s1.find("cd"); // 不传pos则默认从0开始找字符cd第一次出现位置
	cout << pos << endl;
	pos = s1.rfind("cd");// 不传pos则默认从0开始找字符cd最后一次出现位置
	cout << pos << endl;

	int pos1 = s1.find("cd", 3);// 从3开始找字符cd第一次出现位置
	cout << pos1 << endl;
	pos1 = s1.rfind("cd",3);	// 从3开始找字符cd最后一次出现位置
	cout << pos1 << endl;

	int pos2 = s1.find("cd", 3, 1); // 从3开始找字符串cd的前1个字符第一次出现位置
	cout << pos2 << endl;
	pos2 = s1.rfind("cd", 3, 1); // 从3开始找字符串cd的前1个字符最后一次出现位置
	cout << pos2 << endl;
}
void test05()
{
	// 替换
	string s1 = "abcdefgcd";
	string str = " hello my ";
	s1.replace(2, 5, str);// 从2开始前5个字符替换为str
	cout << s1 << endl;
}
/*字符串比较
int compare(const string& s)const;  与字符串s比较
int compare(const char* s)const;    与字符串s比较
*/
void test06()
{
	string s1 = "abcdefg";
	string s2 = "abcdefg"; // 等于 0
	string s3 = "abcdef";  // 大于 1
	string s4 = "abcdefgh";// 小于 -1
	int ret = s1.compare(s2);
	cout << ret << endl;
	ret = s1.compare(s3);
	cout << ret << endl;
	ret = s1.compare(s4);
	cout << ret << endl;
}
/*字符存取
char& operator[](int n);  通过[]读取字符
char& at(int n);		  通过at方法获取字符
*/
void test07()
{
	// 1 通过[]方式读取字符
	string s = "Type here";
	for (int i = 0; i < s.size(); i++)
	{					// .size()可以返回字符s的长度
		cout << s[i] << " ";
	}
	cout << endl;
	// 2 通过at方式读取字符
	for (int i = 0; i < s.size(); i++)
	{
		cout << s.at(i) << " ";
	}
	cout << endl;
	// 通过[]修改字符
	s[0] = 't';
	cout << s << endl;
	// 通过at修改字符
	s.at(1) = 'Y';
	cout << s << endl;
}
/*插入和删除
 string& insert(int pos,const char* s);  1在pos位置插入字符串s
 string& insert(int pos,const string& s);2在pos位置插入字符串s
 string& insert(int pos,int n,char c);   3在pos位置插入n个字符c
 string& erase(int pos,int n = npos);	 4删除从pos开始的n个字符
*/
void test08()
{
	string s1 = "Type here";
	s1.insert(0, "ok");   // 1 char* 从0开始加上ok字符
	cout << s1 << endl;

	string s2 = "ko";
	s1.insert(0, s2);     // 2 string& 从0开始加上ko字符
	cout << s1 << endl;

	s1.insert(0, 8, '+'); // 3 从0开始加上8个字符+
	cout << s1 << endl;

	s1.erase(0, 12);      // 4 从位置0开始删除okko4个和8个+一共12个字符
	cout << s1 << endl;
}
/* 获取字串
string substr(int pos,int n=npos)const; // 返回由pos开始n个字符组成的字符串
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
	// 根据邮箱获取用户名称
	int pos = user_email.find('@');// 从email中读取@字符所在的位置，这里是位置5
	string user_name = user_email.substr(0, pos); // 截取0-5的字符
	cout << user_name << endl;
}
int main()
{
	test10();
	return 0;
}