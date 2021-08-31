#include<iostream>
using namespace std;
//count:统计相同元素的个数
//#include<vector>
//#include<algorithm>
//#include<string>
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(const person p)
//	{
//		if (this->m_age == p.m_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(1);
//	v.push_back(2);
//	int ret = count(v.begin(), v.end(), 1);
//	cout << ret << endl;//3
//	//自定义类型
//	vector<person>v1;
//	person p1("张飞", 30);
//	person p2("刘备", 30);
//	person p3("关羽", 30);
//	person p4("赵云", 25);
//	person p5("诸葛亮", 30);
//	person p6("曹操", 30);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	int ret1 = count(v1.begin(), v1.end(), p6);
//	cout << ret1 << endl;//4 有四个和曹操年龄相同的人
//}
//int main()
//{
//	test();
//	return 0;
//}
//count_if:条件统计
//#include<vector>
//#include<algorithm>
//#include<string>
//bool Great5(int val)
//{
//	return val > 5;
//}
//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//class agegreater20
//{
//public:
//	bool operator()(const person p)
//	{
//		return p.m_age > 20;
//	}
//};
//void test()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	int ret = count_if(v.begin(), v.end(), Great5);
//	cout << ret << endl;//4
//	//自定义类型
//	vector<person>v1;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	person p5("eee", 50);
//	person p6("fff", 60);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	v1.push_back(p6);
//	int ret1 = count_if(v1.begin(), v1.end(), agegreater20());
//	cout << ret1 << endl;//4
//}
//int main()
//{
//	test();
//	return 0;
//}
//常用的排序算法之sort排序
//#include<vector>
//#include<algorithm>
//#include<functional>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Myprint);//10 20 30 40 50  for_each:遍历函数  功能由第三个函数决定
//	cout << endl;
//	//从小到大
//	sort(v.begin(), v.end(), greater<int>());//greater<int>()内置从大到小排列算法
//	for_each(v.begin(), v.end(), Myprint);//50 40 30 20 10
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//random_shuffle:洗牌算法 将区间的值随意打乱
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include<ctime>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	srand((unsigned int)time(NULL));//创建一个随机数种子
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Myprint);//8 1 9 2 0 5 7 3 4 6
//}
//int main()
//{
//	test();
//	return 0;
//}
//merge:将两个有序数列合并为另一个有序数列
//#include<vector>
//#include<algorithm>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v1.push_back(i + 5);
//	}
//	v2.resize(v.size() + v1.size());
//	merge(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), Myprint);//0 1 2 3 4 5 5 6 6 7 7 8 8 9 9 10 11 12 13 14
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//reverse:元素反转
//#include<vector>
//#include<algorithm>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	for_each(v.begin(), v.end(), Myprint);//10 30 50 20 40
//	cout << endl;
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;//40 20 50 30 10
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<vector>
//#include<algorithm>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v1.resize(v.size());
//	for_each(v.begin(), v.end(), Myprint);//10 30 50 20 40
//	cout << endl;
//	copy(v.begin(), v.end(), v1.begin());
//	for_each(v1.begin(), v1.end(), Myprint);//10 30 50 20 40
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<vector>
//#include<algorithm>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v1.resize(v.size());
//	for_each(v.begin(), v.end(), Myprint);//10 30 50 20 40
//	cout << endl;
//	replace(v.begin(), v.end(), 10, 100);
//	for_each(v.begin(), v.end(), Myprint);//100 30 50 20 40
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//条件替换 find_if
//#include<vector>
//#include<algorithm>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//class Great20
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v1.resize(v.size());
//	for_each(v.begin(), v.end(), Myprint);//10 30 50 20 40
//	cout << endl;
//	replace_if(v.begin(), v.end(), Great20(), 100);//将所有大于20的数替换成100
//	for_each(v.begin(), v.end(), Myprint);//10 100 100 20 100
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//交换 swap
//#include<vector>
//#include<algorithm>
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//	v1.push_back(100);
//	v1.push_back(300);
//	v1.push_back(500);
//	v1.push_back(200);
//	v1.push_back(400);
//	cout << "交换前" << endl;
//	for_each(v.begin(), v.end(), Myprint);//10 30 50 20 40
//	cout << endl;
//	for_each(v1.begin(), v1.end(), Myprint);//100 300 500 200 400
//
//	cout << endl;
//	cout << "交换后" << endl;
//	swap(v, v1);
//	for_each(v.begin(), v.end(), Myprint);// 100 300 500 200 400
//	cout << endl;
//	for_each(v1.begin(), v1.end(), Myprint);//10 30 50 20 40
//
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//accumulate
//#include<vector>
//#include<numeric>
//void test()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//	int ret = accumulate(v.begin(), v.end(), 0);
//	cout << ret << endl;//5050
//}
//int main()
//{
//	test();
//	return 0;
//}
//fill：填充
//#include<vector>
//#include<numeric>
//#include<algorithm>
//void print(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	v.resize(10);
//	fill(v.begin(), v.end(), 10);
//	for_each(v.begin(), v.end(), print);//10 10 10 10 10 10 10 10 10 10
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//set_intersection:获取两个容器的交集(原容器必须为有序序列)
//#include<vector>
//#include<algorithm>
//void print(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v1.push_back(i + 5);
//	}
//	v2.resize(min(v.size(), v1.size()));
//	vector<int>::iterator it = set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), it, print);//5 6 7 8 9
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//set_union:两个集合的并集 两个集合必须是有序序列
//#include<vector>
//#include<algorithm>
//void print(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v1.push_back(i + 5);
//	}
//	v2.resize(v.size()+v1.size());
//	vector<int>::iterator it = set_union(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), it, print);//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//差集:set_difference
//#include<vector>
//#include<algorithm>
//void print(int val)
//{
//	cout << val << " ";
//}
//void test()
//{
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//		v1.push_back(i + 5);
//	}
//	v2.resize(max(v.size(),v1.size()));
//	//v和v1的差集
//	vector<int>::iterator it = set_difference(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), it, print);//0 1 2 3 4
//	cout << endl;
//	//v1和v的差集
//	vector<int>::iterator itt = set_difference(v1.begin(), v1.end(), v.begin(), v.end(), v2.begin());
//	for_each(v2.begin(), itt, print);//10 11 12 13 14
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//____________________________________________________
//OK!C++学习结束！










