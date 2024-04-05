#include <iostream>

using namespace std;

int main()
{
	int levelXp[3] = { 1000, 2500, 5000 };
	int userXp;
	int userLvl[4] = { 1, 2, 3, 4 };

	cout << "Сколько у Вас опыта: ";
	cin >> userXp;

	if (userXp < 0) {
		cout << "Ожидалось положительное значение";
	}
	else if (userXp < levelXp[0]) {
		cout << "Ваш уровень: " << userLvl[0];
	}
	else if (userXp < levelXp[1]) {
		cout << "Ваш уровень: " << userLvl[1];
	}
	else if (userXp < levelXp[2]) {
		cout << "Ваш уровень: " << userLvl[2];
	}
	else {
		cout << "Ваш уровень: " << userLvl[3];
	}
	
	cout << endl;

	return 0;
}