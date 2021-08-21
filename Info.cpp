#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Name: " << name << endl << "Age: " << age;
    return 0;
}
