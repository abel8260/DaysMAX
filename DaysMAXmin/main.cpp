#include <iostream>

class Day{

    public:

    int dia;
    int mes;
    int ano;


};
class Day2{

    public:

    int dia2;
    int mes2;
    int ano2;


};
class DayOc : public Day{
    public:
    DayOc() = default;
    int counterDayOc(int dayano,int daymes, int dayday){return ((dayano-1)*360 + (daymes-1)*30 + (dayday));};



};

class DayMAX: public Day{
    public:
    int counterDayMAX(int day2ano2,int day2mes2, int day2day2){return ((day2ano2-1)*360 + (day2mes2-1)*30 + (day2day2));};


};



int main()
{
    int day3;
    int mes3;
    int year3;
    int day4;
    int mes4;
    int year4;
    std::cout << " ================== -------" << std::endl;
    std::cout << " input the day Max: " << std::endl;
    std::cin >> day3 ;
    std::cout << " input the month Max: " << std::endl;
    std::cin >> mes3 ;
    std::cout << " input the year Max: " << std::endl;
    std::cin >> year3 ;
    std::cout << " input the day Min: " << std::endl;
    std::cin >> day4 ;
    std::cout << " input the month Min: " << std::endl;
    std::cin >> mes4 ;
    std::cout << " input the year Min: " << std::endl;
    std::cin >> year4 ;

    DayOc D3;
    DayMAX D4;
    int Oc = D3.counterDayOc(year3,mes3,day3);
    int Max = D4.counterDayMAX(year4,mes4,day4);
    auto diff = [](int a, int b)->int{
        std::cout << "Hello world!" << std::endl;
        return (b-a);
    }(Oc,Max);
    int dias = diff;
    std::cout << "The diff is: "<< dias << std::endl;
    return 0;
}
