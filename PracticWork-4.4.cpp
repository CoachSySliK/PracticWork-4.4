#include <iostream>

using namespace std;

int main()
{
	int levelXp[4] = { 0, 999, 2499, 4999 };
	int userXp;
	int userLvl[4] = { 1, 2, 3, 4 };

	cout << "Сколько у Вас опыта: ";
	cin >> userXp;

	if (userXp < 0) {
		cout << "Ожидалось положительное значение";
	}
	else if (userXp > levelXp[3]) {
		cout << "Ваш уровень: " << userLvl[3];
	}
	else if (userXp > levelXp[2]) {
		cout << "Ваш уровень: " << userLvl[2];
	}
	else if (userXp > levelXp[1]) {
		cout << "Ваш уровень: " << userLvl[1];
	}
	else {
		cout << "Ваш уровень: " << userLvl[0];
	}
	
	cout << endl;

	//мне кажется это можно сделать проще

	int level;

	cout << "Сколько у Вас опыта: ";
	cin >> userXp;
	if (userXp < 0) {
		cout << "Ожидалось положительное значение";
	}

	for (level = 3; level > -1; level--) {
		if (userXp > levelXp[level]) {
			cout << "Ваш уровень: " << userLvl[level];
			break;
		}		
	}

	//капец я долго подбирал какой цикл тут будет лучше. 
	//Наверно любой цикл подойдёт, но я слишком глуп.
	//Там две ветки, ветка master это первая версия, expert - итоговая. 
	//В первой версии я проверял уровень по возрастанию, тут пришлось сделать по убыванию, иначе у меня ничего не получалось.

	return 0;
}