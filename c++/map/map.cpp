#include <map>
#include <string>
#include <iostream>

using namespace std;
int main()
{
	int i;
	map<int, string> mapStudent;
	multimap<string, string> authors;

	mapStudent.insert(pair<int, string>(1, "student_one"));
	mapStudent.insert(pair<int, string>(2, "student_two"));
	mapStudent.insert(pair<int, string>(3, "student_three"));
//	mapStudent.insert(1, "student_one");
//	mapStudent.insert(2, "student_two");
//	mapStudent.insert(3, "student_three");
	i = mapStudent.count(4);
	cout << "cout:" << i << endl;
	map<int, string>::iterator  iter;
	for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++) {
		cout << iter->first << "   " << iter->second << endl;
	}
	cout << "number sof student_one:" << mapStudent.count(2) << endl;
	iter = mapStudent.find(2);
	cout << "value:" << iter->second << endl;
	cout << mapStudent[2] << endl;

	//authors.insert("Barth, John", "Sot_Weed Factor");
//	authors.insert("Barth, John", "Lost in the Funhouse");
}
