#include <iostream>
#include <graphics.h>
#include <vector>
#include <string>
#include <string.h>
#include <math.h>
#include <conio.h>

#define SIN(x) sin(x * 3.141592653589/180)
#define COS(x) cos(x * 3.141592653589/180)

using namespace std;


int sii = 50;

int obj[4][4] = {{0, sii, 0, 0}, {0, 0, sii, 0}, {0, 0, 0, sii}, {1, 1, 1, 1}};


void pt_l(int x1, int y1, int x2, int y2)
{
    line(x1 + 320, 200 - y1, x2 + 320, 200 - y2);
}

void disp(int a[4][4])
{
    pt_l(a[0][0], a[1][0], a[0][1], a[1][1]);
    pt_l(a[0][2], a[1][2], a[0][1], a[1][1]);
    pt_l(a[0][2], a[1][2], a[0][3], a[1][3]);
    pt_l(a[0][2], a[1][2], a[0][3], a[1][3]);
}


void rot(int a[4][4], int sy, char ch)
{
    cleardevice();
    int x = 2;

    int s[4][4] = {{1, 0, 0, 0}, {0, COS(x), -SIN(x), 0}, {0, SIN(x), COS(x), 0}, {0, 0, 0, 1}};

    int mult[4][4];
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
        {
            mult[i][j]=0;
        }


    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 4; ++j)
            for(int k = 0; k < 4; ++k)
            {
                mult[i][j] += s[i][k] * a[k][j];
            }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            obj[i][j] = mult[i][j];

        }
    }

}

void hidden(int a[4][4], int x, int y, int z)
{
    int vi[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vi[i][j] = a[i][j];
        }
    }
    int arr[3] = {x, y, z};

    for (int i = 0; i < 4; i++)
    {
        int z[3] = {1, 1, 1};
        for (int j = 0; j < 3; j++)
        {
            z[j] = ((obj[1][0] - obj[1][1]) * (obj[2][0] - obj[2][1]) + (obj[1][2] - obj[1][1]) * (obj[2][2] - obj[2][1]) + (obj[1][2] - obj[1][1]) * (obj[2][2] - obj[2][1]));
        }
        for (int j = 0; j < 3; j++)
        {
            z[j] -= ((obj[i][0] - obj[i][1]) * (obj[j][0] - obj[j][1]));
        }
        int p[3];
        for (int j = 0; j < 3; j++)
        {
            p[j] = arr[j] - ((obj[j][0] + obj[j][1] + obj[j][2] + obj[j][3]) / 3);
        }
        for (int j = 0; j < 3; j++)
        {
            p[j] += (obj[j][i] / 3);
        }
        if (p[0]*z[0] >= 0 && p[1]*z[1] >= 0 && p[2]*z[2] >= 0)
        {

            if (i != 2 || i != 3)
                pt_l(a[0][0], a[1][0], a[0][1], a[1][1]);
            if (i != 2 || i != 3)
                pt_l(a[0][2], a[1][2], a[0][1], a[1][1]);
            if (i != 1 || i != 0)
                pt_l(a[0][2], a[1][2], a[0][3], a[1][3]);
            if (i != 2 || i != 1)
                pt_l(a[0][0], a[1][0], a[0][3], a[1][3]);
            if (i != 1 || i != 3)
                pt_l(a[0][2], a[1][2], a[0][0], a[1][0]);
            if (i != 2 || i != 0)
                pt_l(a[0][1], a[1][1], a[0][3], a[1][3]);

        }
    }

}

int main()
{


int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();

    if (errorcode != grOk)
    {


        cout << "Graphics error is: %s\n", grapherrormsg(errorcode);
        cout << "Press any key to halt:";
        getch();
        exit(1);
    }

    int x = 200, y = 200, z = 0;

    disp(obj);

    cout << "Enter the point p" <<endl;
    cin >> x >> y >> z;


    disp(obj);

    cout << "Press 1 to start" << endl;
    int n;
    cin >> n;

    if(n != 1)
        exit(0);


    do{
        rot(obj, 1, 'x');
        hidden(obj, x, y, z);
    }while(1);



    getch();
}
