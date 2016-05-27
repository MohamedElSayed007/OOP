#include <iostream>
#include <fstream>

using namespace std;

class Cars{
private:
    int discountVal;
public:
    Cars(){
        cout<<"Coded by : Mohamed El Sayed\n\n";
    }
    string carName;
    string carColor;
    int carPrice;
    int discount;

    void display();
    void save(char* savepath);
};

void Cars::display(){

    discountVal=(carPrice*discount)/100;
    cout<<"Car name : "<<carName<<endl<<
    "Car Color : "<<carColor<<endl<<
    "Car Price : "<<carPrice<<endl<<
    "Discount : "<<discountVal<<endl<<
    "Price after discount : "<<carPrice-discountVal<<endl;
}

void Cars::save(char* savepath){
ofstream write(savepath);
write<<"Car name : "<<carName<<endl<<
    "Car Color : "<<carColor<<endl<<
    "Car Price : "<<carPrice<<endl<<
    "Discount : "<<discountVal<<endl<<
    "Price after discount : "<<carPrice-discountVal<<endl;
    write.close();
}
int main()
{
    Cars bmw;
    bmw.carColor="Black";
    bmw.carName="BMW E90";
    bmw.carPrice=850000;
    bmw.discount=15;
    bmw.display();
    bmw.save("bmw.txt");

    return 0;
}
