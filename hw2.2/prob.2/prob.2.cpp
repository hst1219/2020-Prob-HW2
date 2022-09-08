#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <random>
#include<math.h>

using namespace std;

unsigned long long factorial(int);


int main()
{
    int a; 

    printf("輸入alpha : ");
    scanf_s("%d", &a);

    random_device rd;
    mt19937 generator(rd());
    poisson_distribution<int> poisson(a);

    int x = poisson(generator);   




   
    int  cal1[21] = { 0 }, cal2[21] = { 0 };
    float  pmf1[21] = { 0 }, pmf2[21] = { 0 };
    float  cdf1[21] = { 0 }, cdf2[21] = { 0 };
    float the[21] = { 0 };

 
    for (int i = 0; i < 100; i++)  //100次實驗
    {
        int x = poisson(generator);
        if (x < 21)
            cal1[x] += 1;
        else
            continue;
    }


    for (int ii = 0; ii < 21; ii++) //算PMF
    {
        pmf1[ii] = (float)cal1[ii] / 100;
    }

 
    for (int iii = 0; iii < 21; iii++) //算CMF
    {
        for (int c1 = 0; c1 < iii; c1++)
        {
            cdf1[iii] += pmf1[c1];
        }
    }



    for (int j = 0; j < 10000; j++)  //10000次實驗
    {
        int x = poisson(generator);
        if (x < 21)
            cal2[x] += 1;
        else
            continue;
    }

    for (int jj = 0; jj < 21; jj++) //算PMF
    {
        pmf2[jj] = (float)cal2[jj] / 10000;
    }


    for (int jjj = 0; jjj < 21; jjj++) //算CMF
    {
        for (int c1 = 0; c1 < jjj; c1++)
        {
            cdf2[jjj] += pmf2[c1];
        }
    }


    for (int k = 0; k < 21; k++) //理論值
        the[k] = pow(a, k) * exp(-a) / factorial(k);
    


    printf("\n\n     100次實驗                                     10000次實驗                                       理論值\n\n");

    for (int pri = 0; pri < 21; pri++)
    {
        printf("X = %2d : ", pri);
        printf("%3d次  ", cal1[pri]);
        printf("PMF:%8f  ", pmf1[pri]);
        printf("CDF:%8f       ", cdf1[pri]);

        printf("X = %2d : ", pri);
        printf("%3d次  ", cal2[pri]);
        printf("PMF:%8f  ", pmf2[pri]);
        printf("CDF:%8f       ", cdf2[pri]);

        printf("PMF:%8f\n", the[pri]);
    }



    system("pause");
    return 0;
}





unsigned long long factorial(int f)
{
    int g;
    unsigned long long r = 1;

    for (g = 1; g <= f; g++)
        r = r * g;

    return r;
}



