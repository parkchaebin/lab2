/*tree.cpp*/
#include <iostream>
#include <numeric>
#include <map>
#include <iterator>

using namespace std;

typedef struct {
	char name[10];
	int mid;
	int end;
} node;

int main(){
	map<int, node> stu;

	int num = 0;

	cout << "Enter the studentNUm : ";
	cin >> num;

	for(int i=0; i<num; i++) {
		node node;

		cout <<"name : ";
		cin >> node.name;

		cout << "mid score : ";
		cin >> node.mid;

		cout << "end score : ";
		cin >> node.end;

		stu.emplace(i, node);
		cout << "추가 됨\n";
	}

	for(auto i = begin(stu); i!=end(stu); i++) {
		cout <<"name : "<< i->second.name << ", mid score : " 
			<< i->second.mid << ", end score : " << i->second.end 
			<< endl << endl;

	}

	return 0;
}
