#include <graphics.h>
#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include<math.h>
#define SIN(x) sin(x * 3.141592653589/180)
#define COS(x) cos(x * 3.141592653589/180)

using namespace std;


int obj[4][4] = {{50, 0, 0, 0}, {0, 0, 50, 0}, {0, 50, 0, 0}, {1, 1, 1, 1}};


void pt_l(int x1, int y1, int x2, int y2)
{
    line(x1 + 320, 200 - y1, x2 + 320, 200 - y2);
}

void display(int a[4][4])
{
    pt_l(a[0][0], a[1][0], a[0][1], a[1][1]);
    pt_l(a[0][2], a[1][2], a[0][1], a[1][1]);
    pt_l(a[0][2], a[1][2], a[0][3], a[1][3]);
    pt_l(a[0][2], a[1][2], a[0][3], a[1][3]);
}

void trans(int a[4][4], int sy, char ch)
{
    cleardevice();

    if (ch == 'x' && sy == 1)
    {
        int s[4][4] = {{1, 0, 0, 1}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
else if (ch == 'x' && sy == 0)
    {
        int s[4][4] = {{1, 0, 0, -1}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'y' && sy == 1)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'y' && sy == 0)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, 1, 0, -1}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'z' && sy == 1)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 1}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'z' && sy == 0)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, -1}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }


    display(obj);
}

void scal(int a[4][4], int sy, char ch)
{
    cleardevice();

    int ss = 2; // Scaling factor

    //int s[4][4];

    if (ch == 'x' && sy == 1)
    {
        int s[4][4] = {{ss, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'x' && sy == 0)
    {
        int s[4][4] = {{-ss, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'y' && sy == 1)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, ss, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'y' && sy == 0)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, -ss, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'z' && sy == 1)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, ss, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'z' && sy == 0)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, -ss, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }


    display(obj);
}

void rot(int a[4][4], int sy, char ch)
{
    cleardevice();
    int x = 2;

    if (ch == 'x' && sy == 1)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, COS(x), -SIN(x), 0}, {0, SIN(x), COS(x), 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'x' && sy == 0)
    {
        int s[4][4] = {{1, 0, 0, 0}, {0, COS(-x), -SIN(-x), 0}, {0, SIN(-x), COS(-x), 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'y' && sy == 1)
    {
        int s[4][4] = {{COS(x), 0, SIN(x), 0}, {0, 0, 1, 0}, {-SIN(x), 0, COS(x), 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'y' && sy == 0)
    {
        int s[4][4] = {{COS(-x), 0, SIN(-x), 0}, {0, 0, 1, 0}, {-SIN(-x), 0, COS(-x), 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'z' && sy == 1)
    {
        int s[4][4] = {{COS(x), -SIN(x), 0, 0}, {SIN(x), COS(x), 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }
    else if (ch == 'z' && sy == 0)
    {
        int s[4][4] = {{COS(-x), -SIN(-x), 0, 0}, {SIN(-x), COS(-x), 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
        for (int k = 0; k < 4; k++)
    {
        int temp[4];
        for (int i = 0; i < 4; i++)
        {
            int su = 0;
            for (int j = 0; j < 4; j++)
            {
                su += s[i][j] * a[j][k];
            }
            temp[i] = su;
        }
        for (int i = 0; i < 4; i++)
        {
            obj[i][k] = temp[i];
        }
    }
    }


    display(obj);
}

int main()
{

int gdriver = DETECT, gmode, errorcode;



initgraph(&gdriver, &gmode, "");




errorcode = graphresult();

if (errorcode != grOk)
    {


cout << "Graphics error: %s\n", grapherrormsg(errorcode);
cout << "Press any key to halt:";
getch();
exit(1);
    }


display(obj);
int in = 0;
    do
    {
        string s;

        cin >> s;

        in = 0;
if (s == "+tx" || s == "+TX")
            in = 1;
else if (s == "-tx" || s == "-TX")
            in = 2;
else if (s == "+ty" || s == "+TY")
            in = 3;
else if (s == "-ty" || s == "-TY")
            in = 4;
else if (s == "+tz" || s == "+TZ")
            in = 5;
else if (s == "-tz" || s == "-TZ")
            in = 6;
else if (s == "+sx" || s == "+SX")
            in = 7;
else if (s == "-sx" || s == "-SX")
            in = 8;
else if (s == "+sy" || s == "+SY")
            in = 9;
else if (s == "-sy" || s == "-SY")
            in = 10;
else if (s == "+sz" || s == "+SZ")
            in = 11;
else if (s == "-sz" || s == "-SZ")
            in = 12;
else if (s == "+rx" || s == "+RX")
            in = 13;
else if (s == "-rx" || s == "-RX")
            in = 14;
else if (s == "+ry" || s == "+RY")
            in = 15;
else if (s == "-ry" || s == "-RY")
            in = 16;
else if (s == "+rz" || s == "+RZ")
            in =17;
else if (s == "-rz" || s == "-RZ")
            in = 18;



        switch (in)
        {
case 1:     trans(obj, 1, 'x');
                        break;
case 2:     trans(obj, 0, 'x');
                        break;
case 3:     trans(obj, 1, 'y');
                        break;
case 4:     trans(obj, 0, 'y');
                        break;
case 5:     trans(obj, 1, 'z');
                        break;
case 6:     trans(obj, 0, 'z');
                        break;
case 7:     scal(obj, 1, 'x');
                        break;
case 8:     scal(obj, 0, 'x');
                        break;
case 9:     scal(obj, 1, 'y');
                        break;
case 10:    scal(obj, 0, 'y');
                        break;
case 11:    scal(obj, 1, 'z');
                        break;
case 12:    scal(obj, 0, 'z');
                        break;
case 13:    rot(obj, 1, 'x');
                        break;
case 14:    rot(obj, 0, 'x');
                        break;
case 15:    rot(obj, 1, 'y');
                        break;
case 16:    rot(obj, 0, 'y');
                        break;
case 17:    rot(obj, 1, 'z');
                        break;
case 18:    rot(obj, 0, 'z');
                        break;
default:    cout << "Not Found" << endl;
                        break;
        }

    }while(in != 0);

    getch();
}
