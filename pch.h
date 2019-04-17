// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H

// TODO: 添加要在此处预编译的标头



#define osci_T 0.02
#define osci_R 0.02
#define plane_X 0.2
#define plane_Y 0.2
#define plane_H 0.1
#define Num 100
#define mass 0.001
#define obd 600
#define obx 0.1
#define oby 0.3
#define obz 0.1
#define mod 1
/* mod     initial distribution
	1           uniform
	2			random
*/
#define Temp 0.03
#define T_Step 0.001

#define random() ((double)rand()/RAND_MAX)

typedef struct particle {
	double x;
	double y;
	double z=0;
	double vx;
	double vy;
	double vz=0;
};

#endif //PCH_H
