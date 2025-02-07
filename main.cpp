#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <list>
using namespace std; int main() {

	list<string> station{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
		"Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo",
		"Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo",
		"Shinjyuku", "Yoyogi", "Harajyuku", "Shibuya", "Ebisu",
		"Meguro", "Gotanda", "Osaki", "Shinagawa", "Tamachi",
		"Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	printf("1970年\n");
	//1970年の駅を表示
	for (auto itr = station.begin(); itr != station.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}

	printf("\n2019年\n");

	//要素の追加
	for (std::list<string>::iterator itr = station.begin(); itr != station.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = station.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	//2019年の駅を表示
	for (auto itr = station.begin(); itr != station.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}


	printf("\n2022年\n");

	//要素の追加
	for (std::list<string>::iterator itr = station.begin(); itr != station.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = station.insert(itr, "Takanawa-Geteway");
			++itr;
		}
	}

	//2022年の駅を表示
	for (auto itr = station.begin(); itr != station.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}

	return 0;
}