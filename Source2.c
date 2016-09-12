/*

Week2 Quiz
2014113359_김다혜

*/

// draw dumbbell
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "BMPImage.h"
#include <stdbool.h>
#include <string.h>


bool isInsideCircle(const double x, const double y) //왼쪽원
{
	const double x_c = 130;
	const double y_c = 282;
	const double r = 100;

	const double f = (x - x_c)*(x - x_c) + (y - y_c)*(y - y_c) - r * r;

	if (f > 0.0) return false;
	else return true;
}

bool eye(const double x, const double y) //오른쪽원
{
	const double x_c = 600;
	const double y_c = 282;
	const double r = 100;

	const double f = (x - x_c)*(x - x_c) + (y - y_c)*(y - y_c) - r * r;

	if (f > 0.0) return false;
	else return true;
}


bool nose(const double x, const double y) //손잡이
{
	const double x_c = 350;
	const double y_c = 282;
	const double r = 80;

	const double f = (x - x_c)*(x - x_c)/7 + (y - y_c)*(y - y_c) - r * r;

	if (f > 0.0) return false;
	else return true;
}

*/
/*
bool nose(const double x, const double y) //네모 손잡이 
{
	const double x_c = 230;
	const double y_c = 282;
	const double r = 1;
	const double rr = 2;


	const double f = r*rr;

	if (f > 0.0) return true;
	else return false;
}
*/

/*
bool nose(const double x, const double y) //코!!!네모로 만들기!!
{
	const double x_c = 93;
	const double y_c = 280;
	const double r = 13;

	
	if (x<99.5 && x>86.5 && y>273.5 && y<286.5) return true;
	else return false;
}
*/


/*
void main()
{


	int res_x, res_y; //os로부터 메모리를 받아오는 것

	unsigned char* rgb_array = 0; //rgb_array라고 포인터 변수 선언

	readBMP24("bg.bmp", &res_x, &res_y, &rgb_array); //여기서 &rgb_array 는 주소의 주소다!

	printf("%d %d\n", res_x, res_y);

	for (int j = res_y - 1; j >= 0; j--)
	{
		for (int i = 0; i < res_x; i++)
		{

			unsigned char r, g, b;

			const int ix = i + res_x * j;//1차원 array를 2차원 array처럼 쓸 수 있다.
			r = rgb_array[ix * 3 + 0]; //메모리에 rgb들이 픽셀수만큼 나열 되어있는 것
			g = rgb_array[ix * 3 + 1];
			b = rgb_array[ix * 3 + 2];

			if (nose(i, j) == true && eye(i, j) == false && isInsideCircle(i, j) == false ) // 얼굴 칠하기
			{

				rgb_array[ix * 3 + 0] = 255;
				rgb_array[ix * 3 + 1] = 193;
				rgb_array[ix * 3 + 2] = 44;

			}

			else if (eye(i, j) == true) //눈칠하기 
			{

				rgb_array[ix * 3 + 0] = 255;
				rgb_array[ix * 3 + 1] = 193;
				rgb_array[ix * 3 + 2] = 44;

			}

			else if (isInsideCircle(i, j) == true) //코칠하기 
			{

				rgb_array[ix * 3 + 0] = 255;
				rgb_array[ix * 3 + 1] = 193;
				rgb_array[ix * 3 + 2] = 44;

			}

		
		}
		writeBMP24("dumbbell.bmp", res_x, res_y, rgb_array);
	}
}

*/