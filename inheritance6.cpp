#include <iostream>
using namespace std;
class Person
{
    string FirstName, LastName, Address, City, State;
    int Zip, PhoneNo;
    char ch;
    struct DateOfBirth
    {
        int Day, Month, Year;
    } dob;
    void setFirstName();
    void setLastName();
    void setAddress();
    void setCity();
    void setState();
    void setZip();
    void setPhoneNo();
    void setDOB();
public:
    void input1();
    void display1();
};
void Person::setFirstName()
{
    cout << "Enter the First Name : ";
    cin >> FirstName;
}
void Person::setLastName()
{
    cout << "Enter the Last Name : ";
    cin >> LastName;
}
void Person::setAddress()
{
    cout << "Enter the Address : ";
    cin >> Address;
}
void Person::setCity()
{
    cout << "Enter the City : ";
    cin >> City;
}
void Person::setState()
{
    cout << "Enter the State : ";
    cin >> State;
}
void Person::setZip()
{
    cout << "Enter the Zip : ";
    cin >> Zip;
}
void Person::setPhoneNo()
{
    cout << "Enter the Phone No : ";
    cin >> PhoneNo;
}
void Person::setDOB()
{
    cout << "Enter the Date of Birth : ";
    cin >> dob.Day >>ch>> dob.Month >>ch>> dob.Year;
}
void Person::input1()
{
    setFirstName();
    setLastName();
    setAddress();
    setCity();
    setState();
    setZip();
    setPhoneNo();
    setDOB();
}
void Person::display1()
{
    cout << "First Name : " << FirstName << endl;
    cout << "Last Name : " << LastName << endl;
}
class Car:public Person{
    string carName, type;
     int carID;
    const int wheels;
    public:
        static int count;
        Car();
        Car(string, int, string);
        Car(string, int, string, int);
        Car(const Car &);
        void setCarName();
        void setCarID();
        void setType();
        void getCarName();
        void getCarID();
        void getType();
        void display();
        void input();
        void AddCar();
        void DeleteCar();
        void UpdateCarAttributes();
        void PrintDetails();
        void PrintListofcars();
};
int Car::count=0;
Car::Car():wheels(4){
    count++;
}
Car::Car(string carName,int carID,string type):wheels(4){
    this->carName=carName;
    this->carID=carID;
    this->type=type;
    count++;
}
Car::Car(string carName,int carID,string type,int wheels):wheels(wheels){
    count++;
    carName=carName;
    carID=carID;
    type=type;
}
Car::Car(const Car& c):wheels(c.wheels){
    count++;
    carName=c.carName;
    carID=c.carID;
    type=c.type;
}
void Car::setCarName(){
    cout<<"Enter the Car Name : ";
    cin>>carName;
}
void Car::setCarID(){
    cout<<"Enter the Car ID : ";
    cin>>carID;
}
void Car::setType(){
    cout<<"Enter the Type : ";
    cin>>type;
}
void Car::AddCar(){====
    setCarName();
    setCarID();
    setType();
}
void Car::DeleteCar(){
    cout<<"Enter the Car ID to be deleted : ";
    cin>>carID;
        carName="";
        carID=0;
        type="";
}
void Car::UpdateCarAttributes(){
    cout<<"Enter the Car ID to be updated : ";
    cin>>carID;
        setCarName();
        setCarID();
        setType();  
}
void Car::PrintDetails(){
    cout<<"Car Name : "<<carName<<endl;
    cout<<"Car ID : "<<carID<<endl;
    cout<<"Type : "<<type<<endl;
}
void Car::PrintListofcars(){
    cout<<"Car Name : "<<carName<<endl;
    cout<<"Car ID : "<<carID<<endl;
    cout<<"Type : "<<type<<endl;
    cout<<"Wheels : "<<wheels<<endl;
}
void Car::getCarName(){
    cout<<"Car Name : "<<carName<<endl;
}
void Car::getCarID(){
    cout<<"Car ID : "<<carID<<endl;
}
void Car::getType(){
    cout<<"Type : "<<type<<endl;
}
void Car::input(){
    input1();
    setCarName();
    setCarID();
    setType();
    AddCar();
    DeleteCar();
    UpdateCarAttributes();
}
void Car::display(){
    cout<<"Car Details : "<<endl;
    getCarName();
    getCarID();
    getType();
    cout<<"Wheels : "<<wheels<<endl;
    cout<<"...........";
    Person::display1();
    PrintDetails();
}
int main()
{
    Car c1,*c4 = new Car("BMW", 123, "Sedan", 4),c2 = Car("Audi", 456, "SUV"),c3(c2);
    c1.input();
    c1.display();
    c4->display();
    c2.display();
    c3.display();
    cout<<"Total Cars : "<<Car::count<<endl;
   
    return 0;
}
