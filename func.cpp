#include <string>
#include <cmath>
#include "func.h"
std::string func(int a1, int b2, int vibor)
{
	std::string s;
switch (vibor)
{
case 1:
	s = std::to_string(a1) + " плюс " + std::to_string(b2) + " равно " + std::to_string(a1 + b2);
	break;
case 2:
	s = std::to_string(a1) + " минус " + std::to_string(b2) + " = " + std::to_string(a1 - b2);
	break;
case 3:
	s = std::to_string(a1) + " умножить на  " + std::to_string(b2) + " равно " + std::to_string(a1*b2);
	break;
case 4:
	if (b2)
		s = std::to_string(a1) + " делим на  " + std::to_string(b2) + " равно " + std::to_string(a1 / b2);
	else
		s = "На ноль делить нельзя";
	break;
case 5:
	s = std::to_string(a1) + " возводим в степень  " + std::to_string(b2) + " равно " + std::to_string(pow(a1,b2));
	break;
default:
	s = "Нет такой операции";
}
return s;

}