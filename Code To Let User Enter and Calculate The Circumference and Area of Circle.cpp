//name: nazhan shaberi
//date : 22/3/2018
//purpose : a program that let user enter and calculate the circumference and area of circle

#include<iostream>
using namespace std;
int main ()

{
    int rad, circum, area;
    cout<<"enter radius of the circle: ";
    cin>>rad;

    while (rad >= 0 )
    {
    circum = 2*(3.141)*rad;
    area = (3.141)*rad*rad;
    cout<<"the circum is: "<<circum;
    cout<<"\n";
    cout<<"the area is: "<<area;

cout<<"\n";
cout<<"\n";

    cout<<"enter radius of the circle: ";
    cin>>rad;
    }

}
