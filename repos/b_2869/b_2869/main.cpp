#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int A; // ³·
	int B; // ¹ã
	int V; //³ª¹«¸·´ë
	int current = 0;
	int day = 1;

	cin >> A >> B >> V;



	if ((V - A) % (A - B) == 0)
	{
		day = (V - A) / (A - B) + 1;
		printf("%d", day);
	}
	else
	{
		day = (V - A) / (A - B) + 2;
		printf("%d", day);
	}

}