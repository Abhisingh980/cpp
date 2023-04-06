#include <iostream>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    float m[4];
};
int main()
{
    int q;
    cout << "enter the number of student do you want to enter" << endl;
    cin >> q;
    struct student s[q];
    float temp[q];
    float arr[q];
    for (int i = 0; i < q; i++)
    {
        cout<<"enter the roll no"<<" : ";
        cin>>s[i].rollno;
        cout<<endl;
        cout<<"enter the name of the student"<<" : ";
        cin>>s[i].name;
        cout<<endl;
        cout<<"enter the fouur sub marks "<<endl;
        for(int j=0;j<4;j++){
            cout<<"subject"<<" "<<j+1<<" : ";
            cin>>s[i].m[j];
            arr[i]+=s[i].m[j];
        }
        cout<<endl;
    }
    
    cout << "list of average of total marks of each student : " << endl;
    for (int i = 0; i <q; i++)
    {
        cout<<"rollno"<<": "<<s[i].rollno<<"Average of 4 sub "<<":"<<(arr[i]/4)<<endl;
        
    }
    for(int i=0;i<q;i++){
        temp[i]=arr[i];
    }
    cout << "List of total marks of students in sorted order with the roll no: " << endl;
    for (int i = 0; i < q; i++)
    {
        for(int j=i+1;j<q;j++){
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }  
    }
    for (int i = 0; i < q; i++)
    {
       for(int j=0;j<q;j++){
        if(arr[i]==temp[j]){
            cout<<"total marks sorted order"<<" : "<<arr[i]<<" roll no "<<s[j].rollno<<" "<<endl;
        }
       }
    }
    return 0;
}
