#include <iostream>
#include <ctime>

int main()
{
	std::time_t tt = time(NULL);
	tm *t = localtime(&tt);
	std::cout << t->tm_year + 1900 << std::endl;
	std::cout << t->tm_mon + 1 << std::endl;
	std::cout << t->tm_mday << std::endl;
	std::cout << t->tm_hour << std::endl;
	std::cout << t->tm_min << std::endl;
	std::cout << t->tm_sec << std::endl;
	char str[15] = "";
	sprintf(str, "%d%02d%02d%02d%02d%02d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
	std::cout << str << std::endl;
	return 0;
}