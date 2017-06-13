#include "fn.h"

int main()
{
    setlocale(LC_ALL,"russian");
    SCN objSCN;
    int **mas;
    int menu;

    cout<<"Введите размер(1-3): ";      cin>>objSCN.size;
    if(objSCN.size>3 ||objSCN.size<1) return Error();
    cout<<"Количество цветов(1-10): ";  cin>>objSCN.color;
    if(objSCN.color>10 || objSCN.color<1)return Error();
    cout<<"Значение N(1-4): ";  cin>>objSCN.N;
    if(objSCN.N>4 || objSCN.N<1)return Error();

    int length=8*objSCN.size;  // размер массива
    mas=new int* [length];      //массив
    for(int i=0;i<length;i++)
        mas[i]=new int[length];

    cout<<"Случайный ввод - 1, ввод с файла -2 |"; cin>>menu;
    if(menu==2)
    {
        int res=fun(mas,length);
        if(res==0) return Error();
    }

    if(menu==1)random_mas(mas,length,objSCN);
    cout<<"Начальный массив:"<<endl;
    out_mas(mas,length);
    update_mas(mas,length,objSCN);
    cout<<"Измененный массив:"<<endl;
    out_mas(mas,length);

    for(int i=0;i<length;i++)
        delete [] mas[i];
    delete []mas;
    return 0;
}

