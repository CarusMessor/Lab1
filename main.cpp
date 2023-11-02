#include <iostream>
#include <math.h>
//#include <Windows.h>

using namespace std;

int main(){
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251); ???
    double x=0,y; //нецелые числа, а int - целые
    while(x!=9999)//пока выполняется условие, тело цикла выполняется. ! - не равно
    {
        cout<<"To exit enter 9999. Enter x: ";
        cin >> x; //ввод значения
        if(x<-5) y=-3;
        else if(x<-3) y=x+3;
        else if(x<3) y=sqrt(9-pow(x,2));
        else if(x<8) y=0.6*(x-3);
        else y=3;
        cout<<"y= "<<y<<endl;
    }
   cin.get();cin.get();//ожидание нажатия клавиши
   return 0;
}