#include "file.h"

struct SCN
{
    int size; // 1-3
    int color; // 1-10
    int N; // 1-4
};
bool fun(int **mas);
void out_mas(int**mas,int &length);
int Error();
void update_mas(int**mas,int &length,SCN &objSCN);
void random_mas(int **mas,int &length, SCN &objSCN);



