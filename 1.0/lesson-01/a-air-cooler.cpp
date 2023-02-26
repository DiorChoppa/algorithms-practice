#include <iostream>
#include <string>

// using namespace std;

int main()
{
	int s = 0, f = 0;
	std::string todo = "";

	std::cin >> s >> f >> todo;

	if (todo == "heat")
	{
		int ans = f > s ? f : s;
		std::cout << ans;
	}
	else if (todo == "freeze")
	{
		int ans = f < s ? f : s;
		std::cout << ans;
	}
	else if (todo == "auto" || todo == "fan")
	{
		int res = todo == "fan" ? s : f;
		std::cout << res;
	}
	return 0;
}