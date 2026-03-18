#include<iostream>
using namespace std;
class Employee
{
    public:
    int Id;
    string name;
    Employee(){
        Id=323;
        name="priyank";
}
    Employee(int a,string n){
        Id=a;
        name=n;
    }
    Employee(float a,char n){
        Id=a;
        name=n;
    }
    
    Employee(const Employee &obj){
        Id = obj.Id;
        name = obj.name;
    }
    void Display(){
        cout<< "Id =" << Id << "and name =" << name;
        }
};

int main(){
    Employee A;
    A.Display();
    Employee B(100,"ABHINAV");
    B.Display();
    Employee C = B;
    C.Display();
    Employee D(1423.4,'e');
    D.Display();
    
}