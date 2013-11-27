#include "draw.h"/*使用自定义的头文件时，需要这么写，主要是路径不对*/
struct SHAPE shapes[MAX_BOX]=
{
	/*
	*口    口口口    口口      口
	*口    口          口  口口口
	*口口              口
	*/
	{0x88, 0xc0, CYAN,1},
	{0xe8, 0x0, CYAN, 2},
	{0xc4, 0x40, CYAN,3 },
	{0x2e, 0x0, CYAN, 0},


	/*
	*  口                口口    口口口
	*  口    口          口          口
	*口口    口口口      口
	*/
	{0x44,0xc0,MAGENTA,5},
	{ 0x8e, 0x0, MAGENTA, 6 },
	{ 0xc8, 0x80, MAGENTA, 7 },
	{ 0xe2, 0x0, MAGENTA, 4 },

	/*
	*口      口口
	*口口  口口  
	*  口        
	*/
	{0x8c,0x40,YELLOW,9},
	{0x6c,0x0,YELLOW,8},

	/*
	*  口    口口  
	*口口      口口
	*口            
	*/
	{ 0x4c, 0x80, YELLOW, 11 },
	{ 0xc6, 0x0, YELLOW, 10 },

	/*
	*  口    口                    口
	*口口口  口口    口口口      口口
	*        口        口          口
	*/
	{ 0x4e, 0x0, WHITE, 13 },
	{ 0x8c, 0x80, WHITE, 14 },
	{ 0xe4, 0x0, WHITE, 15 },
	{ 0x4c, 0x40, WHITE, 12 },

	/*
	*口            
	*口              
	*口    口口口口    
	*口
	*/
	{ 0x88, 0x88, RED, 17 },
	{ 0xf0, 0x0, RED, 16 },

	/*
	*口口   
	*口口   
	*            
	*/
	{0xcc,0x0,BLUE,18}


};