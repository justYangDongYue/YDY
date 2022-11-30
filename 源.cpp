#include<iostream>
using namespace std;
#include<map>

class mapCompare {
public:
	bool operator()(int m1,int m2)const{
		return m1 > m2;
	}
};
void printShow(map<int,int,mapCompare>&m) {
	for (map<int, int, mapCompare>::iterator it = m.begin(); it != m.end();it++) {
		cout << "key=" << it->first << "    value=" << it->second << endl;

	}
}

void Test() {
	map<int, int,mapCompare>m;
	m.insert(make_pair(1,10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	printShow(m);
}


int main() {
	Test();
	system("pause");
	return 0;
}