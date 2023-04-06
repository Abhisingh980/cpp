#include <iostream>
using namespace std;
class PersonData
{
    string FirstName, LastName, Address, City, State;
    int Zip, PhoneNo;
    bool mailingList;
public:
    void setFirstName(string fname)
    {
        FirstName = fname;
    }
    void setLastName(string lname)
    {
        LastName = lname;
    }
    void setAddress(string address)
    {
        Address = address;
    }
    void setCity(string city)
    {
        City = city;
    }
    void setState(string state)
    {
        State = state;
    }
    void setZip(int zip)
    {
        Zip = zip;
    }
    void setPhoneNo(int phone)
    {
        PhoneNo = phone;
    }
    void getFirstName()
    {
        cout << "First Name: " << FirstName << endl;
    }
    void getLastName()
    {
        cout << "Last Name: " << LastName << endl;
    }
    void getAddress()
    {
        cout << "Address: " << Address << endl;
    }
    void getCity()
    {
        cout << "City: " << City << endl;
    }
    void getState()
    {
        cout << "State: " << State << endl;
    }
    void getZip()
    {
        cout << "Zip: " << Zip << endl;
    }
    void getPhoneNo()
    {
        cout << "Phone No: " << PhoneNo << endl;
    }
};
class CustomerData : public PersonData
{
    int CustomerNumber;
    bool MailingList;

public:
    void InputCustomerData()
    {
        string fname, lname, address, city, state;
        int zip, phone, customerNo;
        bool mailingList;
        cout << "Enter First Name: ";
        cin >> fname;
        setFirstName(fname);
        cout << "Enter Last Name: ";
        cin >> lname;
        setLastName(lname);
        cout << "Enter Address: ";
        cin >> address;
        setAddress(address);
        cout << "Enter City: ";
        cin >> city;
        setCity(city);
        cout << "Enter State: ";
        cin >> state;
        setState(state);
        cout << "Enter Zip: ";
        cin >> zip;
        setZip(zip);
        cout << "Enter Phone No: ";
        cin >> phone;
        setPhoneNo(phone);
        cout << "Enter Customer Number: ";
        cin >> customerNo;
        CustomerNumber = customerNo;
        cout << "Enter Mailing List: ";
        cin >> mailingList;
        MailingList = mailingList;
    }
    void DisplayCustomerData()
    {
        getFirstName();
        getLastName();
        getAddress();
        getCity();
        getState();
        getZip();
        getPhoneNo();
        cout << "Customer Number: " << CustomerNumber << endl;
        //cout << "Mailing List: " << MailingList << endl;
    }
    void setCustomerNumber(int number)
    {
        CustomerNumber = number;
    }
    void setMailingList(bool list)
    {
        MailingList = list;
    }
    void getCustomerNumber()
    {
        cout << "Customer Number: " << CustomerNumber << endl;
    }
    void getMailingList()
    {
        cout << "Mailing List: " << MailingList << endl;
    }
};
class PreferredCustomer : public CustomerData
{
    double PurchaseAmount;
    double DiscountLevel;

public:
    void setPurchaseAmount(double amount)
    {
        PurchaseAmount = amount;
    }
    void setDiscountLevel(double level)
    {
        DiscountLevel = level;
    }
    void getPurchaseAmount()
    {
        if (PurchaseAmount >= 500 && PurchaseAmount < 1000)
        {
            cout << "Purchase Amount: " << PurchaseAmount * 95 / 100 << endl;
        }
        else if (PurchaseAmount >= 1000 && PurchaseAmount < 1500)
        {
            cout << "Purchase Amount: " << PurchaseAmount * 94 / 100 << endl;
        }
        else if (PurchaseAmount >= 1500 && PurchaseAmount < 2000)
        {
            cout << "Purchase Amount: " << PurchaseAmount * 93 / 100 << endl;
        }
        else if (PurchaseAmount >= 2000)
        {
            cout << "Purchase Amount: " << PurchaseAmount * 90 / 100 << endl;
        }
        else
        {
            cout << "Purchase Amount: " << PurchaseAmount << endl;
        }
    }
    void getDiscountLevel()
    {
        if(PurchaseAmount >= 500 && PurchaseAmount < 1000)
        {
            cout << "Discount Level: 5%" << endl;
        }
        else if(PurchaseAmount >= 1000 && PurchaseAmount < 1500)
        {
            cout << "Discount Level: 6%" << endl;
        }
        else if(PurchaseAmount >= 1500 && PurchaseAmount < 2000)
        {
            cout << "Discount Level: 7%" << endl;
        }
        else if(PurchaseAmount >= 2000)
        {
            cout << "Discount Level: 10%" << endl;
        }
        else
        {
            cout << "Discount Level: 0%" << endl;
        }
    }
};
int main()
{
    cout << "enter the first name : ";
    string fname;
    cin >> fname;
    cout << "enter the last name : ";
    string lname;
    cin >> lname;
    cout << "enter the address : ";
    string address;
    cin >> address;
    cout << "enter the city : ";
    string city;
    cin >> city;
    cout << "enter the state : ";
    string state;
    cin >> state;
    cout << "enter the zip : ";
    int zip;
    cin >> zip;
    cout << "enter the phone no : ";
    int phone;
    cin >> phone;
    CustomerData c;
    c.setFirstName(fname);
    c.setLastName(lname);
    c.setAddress(address);
    c.setCity(city);
    c.setState(state);
    c.setZip(zip);
    c.setPhoneNo(phone);
    cout << "enter the customer number : ";
    int number;
    cin >> number;
    c.setCustomerNumber(number);
    cout << "enter the mailing list : ";
    bool list;
    cin >> list;
    c.setMailingList(list);
    c.getFirstName();
    c.getLastName();
    c.getAddress();
    c.getCity();
    c.getState();
    c.getZip();
    c.getPhoneNo();
    c.getCustomerNumber();
    c.getMailingList();
    cout << "enter the purchase amount";
    double amount;
    cin >> amount;
    cout << "enter the discount level";
    double level;
    cin >> level;
    c.InputCustomerData();
    c.DisplayCustomerData();
    PreferredCustomer p;
    p.setPurchaseAmount(amount);
    p.setDiscountLevel(level);
    p.getPurchaseAmount();
    p.getDiscountLevel();

    return 0;
}