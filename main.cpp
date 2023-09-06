
#include "includes.h"

void main()
{
	srand(time(NULL));//random
	const char* namefile = "coord.txt";//coord file
	create_file(namefile);
	cout << "Input r1:\t";//r1
	cin >> r1;
	cout << '\n' << "Input r2:\t";//r2
	cin >> r2;
	read_file(namefile);
	system("pause");
}