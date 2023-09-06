#pragma once
void create_file(const char* namefile)
{
	ofstream file_in;
	file_in.open(namefile);
	if (!file_in)
	{
		cout << "Create file ERROR";
		exit(1);
	}
	else {
		cout << "OK\n";
		for (int i = 0; i < 10; i++)
		{
			file_in << rand() % 11 - 5 << '\t' << rand() % 11 - 5 << '\n';
		file_in.close();
	}
}
