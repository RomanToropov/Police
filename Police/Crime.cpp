#include "Crime.h"

const std::map<int, std::string>& crime =
{
	std::pair<int, std::string>(1, "Ïðåâûøåíèå ñêîðîñòè"),
	std::pair<int, std::string>(2, "Ïðîåçä íà êðàñíûé"),
	std::pair<int, std::string>(3, "Âûåçä íà âñòðå÷íóþ ïîëîñó"),
	std::pair<int, std::string>(4, "Ïåðåñå÷åíèå ñïëîøíîé"),
	std::pair<int, std::string>(5, "Ïàðêîâêà â íåïîëîæåííîì ìåñòå"),
	std::pair<int, std::string>(6, "Îñêîðáëåíèå îôèöåðà"),
	std::pair<int, std::string>(7, "Ðàçãîâîð ïî òåëåôîíó âî âðåìÿ äâèæåíèÿ"),
	std::pair<int, std::string>(8, "Äðèôò íà ïåðåêð¸ñòêå"),
};


std::ostream& operator<<(std::ostream& os, const Crime& obj)
{
	return obj.print(os);
}

std::ofstream& operator<<(std::ofstream& os, const Crime& obj)
{
	return obj.print(os);
}

std::istream& operator>>(std::istream& is, Crime& obj)
{
	return obj.scan(is);
}
std::istream& getline(std::istream& is, Crime& obj)
{
	return obj.scan(is);
}