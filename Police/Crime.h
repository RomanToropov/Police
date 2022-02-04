#include<iostream>
#include<fstream>
#include<string>
#include<map>

const extern std::map<int, std::string>& crime;

class Crime
{
	int crime_id; // Ïðàâîíàðóøåíèå
	std::string place; // Ìåñòî ñîâåðøåíèÿ

public:
	int get_crime_id()const
	{
		return crime_id;
	}
	const std::string& get_place()const
	{
		return place;
	}
	Crime() {}
	Crime(int crime_id, const std::string& place) :crime_id(crime_id), place(place) {}
	~Crime() {}

	std::ostream& print(std::ostream& os)const
	{
		return os << crime.at(crime_id) << ", " << place << ";";
	}
	std::ofstream& print(std::ofstream& os)const
	{
		os << crime_id << place;
		return os;
	}
	std::istream& scan(std::istream& is)
	{
		is.clear();
		std::cout << "Âûáåðèòå ïðàâîíàðóøåíèå:";
		is >> crime_id;
		std::cout << "Ââåäèòå ìåñòî ïðîèñøåñòâèÿ:";
		std::getline(is, place);
		return is;
	}
};

std::ostream& operator<<(std::ostream& os, const Crime& obj);
std::ofstream& operator<<(std::ofstream& os, const Crime& obj);
std::istream& getline(std::istream& is, Crime& obj);
std::istream & operator>>(std::istream & is, Crime & obj);
