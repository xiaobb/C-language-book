#define VK_LEFT 0x4b00 /*��������������Ҽ�*/
#define VK_RIGHT 0x4d00
#define VK_DOWN 0x5000
#define VK_UP 0x4800
#define VK_ESC 0x011b
#define TIMER 0x1c /*����ʱ��������жϺ�*/

#define MAX_BOX 19/*there are 19 shapes*/
#define BSIZE 20 /*the length of box is 20pix*/
#define Sys_x 160 /*��ʾ�����������Ͻ�x����*/
#define Sys_y 25 /*��ʾ�����������Ͻ�y����*/
#define Horizontal_boxs 10 /*ˮƽ�����Է���Ϊ��λ�ĳ���*/
#define Vertical_boxs 15 /*��ֱ�����Է���Ϊ��λ�ĳ���*/
#define Begin_box_x Horizontal_boxs-2 /*������һ������ʱ���ֵ���ʼλ��*/

#define FgColor 3 /*ǰ����ɫ*/
#define BgColor 0 /*������ɫ*/

#define leftWin_x Sys_x+Horizontal_boxs*BSIZE+46 /*�ұ�״̬����x����*/

#define false 0
#define true 1
/*�ƶ��ķ���*/
#define MoveLeft 1
#define MoveRight 2
#define MoveDown 3
#define MoveRoll 4

int current_box_numb;/*���浱ǰ����ţ�������19��*/
int Current_x = Sys_x + Begin_box_x * BSIZE;
int Current_y = Sys_y;
int flag_newbox = false;/*�Ƿ�Ҫ�����·���ı��*/
int speed = 0;/*�����ٶ�*/
int score = 0;/*��Ϸ����*/
int speed_step = 30;
void interrupt(*oldtimer)(void)/*ָ��ԭ��ʱ���жϴ��������ڵ��жϴ�����ָ��*/
 
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
