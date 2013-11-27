#define VK_LEFT 0x4b00 /*定义键盘上下左右键*/
#define VK_RIGHT 0x4d00
#define VK_DOWN 0x5000
#define VK_UP 0x4800
#define VK_ESC 0x011b
#define TIMER 0x1c /*设置时间控制器中断号*/

#define MAX_BOX 19/*there are 19 shapes*/
#define BSIZE 20 /*the length of box is 20pix*/
#define Sys_x 160 /*显示方块界面的左上角x坐标*/
#define Sys_y 25 /*显示方块界面的左上角y坐标*/
#define Horizontal_boxs 10 /*水平方向以方块为单位的长度*/
#define Vertical_boxs 15 /*垂直方向以方块为单位的长度*/
#define Begin_box_x Horizontal_boxs-2 /*产生第一个方块时出现的起始位置*/

#define FgColor 3 /*前景颜色*/
#define BgColor 0 /*背景颜色*/

#define leftWin_x Sys_x+Horizontal_boxs*BSIZE+46 /*右边状态栏的x坐标*/

#define false 0
#define true 1
/*移动的方向*/
#define MoveLeft 1
#define MoveRight 2
#define MoveDown 3
#define MoveRoll 4

int current_box_numb;/*保存当前方块号，就是那19个*/
int Current_x = Sys_x + Begin_box_x * BSIZE;
int Current_y = Sys_y;
int flag_newbox = false;/*是否要产生新方块的标记*/
int speed = 0;/*下落速度*/
int score = 0;/*游戏分数*/
int speed_step = 30;
void interrupt(*oldtimer)(void)/*指向原来时钟中断处理过程入口的中断处理函数指针*/
 
struct BOARD
{
	int var;
	int color;
}Table_board[Vertical_boxs][Horizontal_boxs];


struct SHAPE
{
	char Box[2];
	int color;
	int next;
};
