#pragma once
void read_file(const char* namefile)
{
	ifstream file_out(namefile);
	if (!file_out)
	{
		cout << "Create file ERROR";
		exit(1);
	}
	else  cout << "OK\n";
	for (int x, y; file_out >> x >> y;)
	{
		cout << x << '\t' << y << '\t';
		if ((pow(x, 2) + pow(y, 2) <= pow(r1, 2)) && (y >= 0) && (x <= 0) || ((y <= 0) && (x >= 0) && (pow(x, 2) + pow(y, 2) <= pow(r2, 2)) && (pow(x, 2) + pow(y, 2) != pow(r1, 2))))
		{
			cout << "true\n";
		}
		else cout << "false\n";
	}
}