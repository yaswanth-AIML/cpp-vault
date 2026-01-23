#include <iostream>
#include<string>
using namespace std;
class car
{
    public:
    string car_brand,colour,fuel_type,model;
    int number,mileage,year;
    void input()
    {
        cout<<"enter the car brand :";
        cin>>car_brand;
        cout<<"enter the colour of the car";
        cin>>colour;
        cout<<"enter fuel type and mileage";
        cin>>fuel_type>>mileage;
        cout<<"enter the car number of the car";
        cin>>number;
        cout<<"enter the model of the car";
        cin>>model;
        cout<<"enter the manufacturing year of the car";
        cin>>year;
    }
    void output()
    {
        cout<<"Brand Name of The Car is"<<car_brand<<endl;
        cout<<"model of the car "<<model<<endl;
        cout<<"car number is :"<<number<<endl;
        cout<<"colour of the car :"<<colour<<endl;
        cout<<"fuel type of the car is :"<<fuel_type<<endl;
        cout<<"mileage of the car is :"<<mileage<<endl;
        cout<<"manufacturing year is"<<year;

    }
};
int main()
{
    car c1,c2;
    c1.input();
    c2.input();
    c1.output();
    c2.output();

}