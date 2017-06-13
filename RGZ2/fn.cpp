#include "fn.h"
void out_mas(int**mas,int &length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
            cout<<setw(1)<<mas[i][j]<<"|";
        cout<<endl;
    }
    cout<<"____________________________________\n";
}

int Error()
{
    cout<<"Error";
    return 1;
}

void update_mas(int**mas,int &length, SCN &ObjSCN)
{
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            int buf=0;
            if(j+1<length && mas[i][j]+1==mas[i][j+1]) buf++;  // справа
            if(j-1>=0     && mas[i][j]+1==mas[i][j-1]) buf++;  // слева
            if(i+1<length && mas[i][j]+1==mas[i+1][j]) buf++;  // снизу
            if(i-1>=0     && mas[i][j]+1==mas[i-1][j]) buf++;  // сверху
            if(buf>=ObjSCN.N)
            {
                mas[i][j]++;
                //masBool[i][j]=true;
            }
        }
    }
}

void random_mas(int **mas,int &length, SCN &objSCN)
{
    srand(time(0));
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            mas[i][j]=0+rand()%objSCN.color;  // diapazon=0+(color-1)
            //masBool[i][j]=false;
        }
    }
}
//

