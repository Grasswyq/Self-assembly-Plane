
//programming by pingline & undef
#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>

using namespace std;

particle pa[100];
double hp = 0;

void start(int m)
{
	srand(time(NULL));
	initgraph(1200, 1200, SHOWCONSOLE);
	setorigin(600, 0);
	if (m == 1)
	{
		double rStep_x = plane_X / 11, rStep_y = plane_Y / 11;
		for (int i = 1; i < 11; ++i)
		{
			for (int j = 1; j < 11; ++j)
			{
				pa[i * 10 + j - 11].x = i * rStep_x;
				pa[i * 10 + j - 11].y = j * rStep_y;
				pa[i * 10 + j - 11].vx = random()*Temp;
				pa[i * 10 + j - 11].vy = random()*Temp;
			}
		}
	}
}

void collision(int n)
{
	for (int i = 0; i < 100; ++i)
	{
		if (i != n)
		{

		}
	}
}

void show()
{
	//draw plane
	line(obd*obx/(oby), obd*(obz-hp)/(oby), obd*(obx - plane_X ) / oby, obd*(obz-hp) /(oby ));
	line(obd*obx /(oby ), obd*(obz-hp) /(oby ), obd*obx/(oby-plane_Y ), obd*(obz-hp)/(oby-plane_Y ));
	line(obd*(obx-plane_X)/(oby-plane_Y ),obd*(obz-hp)/(oby-plane_Y ), obd*(obx - plane_X) /(oby ), obd*(obz-hp) /(oby ));
	line(obd*(obx - plane_X) / (oby - plane_Y ), obd*(obz-hp) / (oby - plane_Y ), obd*obx/(oby-plane_Y ), obd*(obz-hp) /(oby-plane_Y ));
	//draw particle
	for (int i = 0; i < 100; ++i)
	{
		int px = obd * ((obx-pa[i].x)/(oby-pa[i].y));
		int py = obd * ((obz - pa[i].z) / (oby-pa[i].y));
		cout << px << "\t"<< py << "\t"<<pa[i].x<<"\t"<<pa[i].y<<endl;
		circle(px, py, 3);
	}


}

int main()
{
	start(mod);
	double a = osci_R * T_Step / osci_T;
	while (true)
	{
	show();
	hp += a;
	if (abs(hp) > osci_T)
		a = -a;
	clearcliprgn();
	}
	

}

