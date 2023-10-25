// ROS.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14
#define ROAD 1
#define DIFFWHEEL 0.7
#define ANGLE 0.25

double spin(int rad, int dir)
{
    float l_rad;
    float r_rad;

    static int flag = 0;

    l_rad = (ROAD - DIFFWHEEL) / 2;
    r_rad = l_rad + DIFFWHEEL;

    if (flag == 1)
    {
        if (dir == 1)
        {
            return 2 * l_rad * ANGLE;
        }
        else if (dir == 2)
            return 2 * r_rad * ANGLE;
    }

    flag++;
    flag %= 2;

    if (dir == 1)
    {
        return 2 * r_rad * ANGLE;
    }
    else if (dir == 2)
        return 2 * l_rad * ANGLE;

    printf("after flag: %d, %.2f %.2f\n", flag, l_rad, r_rad);
}

int main()
{
    int rad;    // 바퀴의 지름
    int d;      // 회전 방향
    int sec;    // 회전 시간

    float l_spin_cnt;
    float r_spin_cnt;

    float right = 0;
    float left = 0;
    float time = 0;


    printf("바퀴의 지름을 입력하세요(0.1m): ");
    scanf("%d", &rad);
    printf("회전 방향을 입력하세요(1: 좌 2: 우): ");
    scanf("%d", &d);
    printf("회전 시간을 입력하세요(s): ");
    scanf("%d", &sec);

    r_spin_cnt = spin(rad, d);
    l_spin_cnt = spin(rad, d);

    printf("1. 우측 바퀴 회전수 : %.2f바퀴, 회전량 : %.2f도\n", r_spin_cnt, r_spin_cnt * 360);
    printf("2. 좌측 바퀴 회전수 : %.2f바퀴, 회전량 : %.2f도\n", l_spin_cnt, l_spin_cnt * 360);
    printf("3. 0.1초당 회전 각도 출력 : \n");
    printf("time : right - left\n");

    for (int i = 0; i <= 10 * sec; i++)
    {
        printf("%.2f : %.2f - %.2f\n", time, right, left);
        time += 0.1;
        right += r_spin_cnt * 360 / (10 * sec);
        left += l_spin_cnt * 360 / (10 * sec);
    }
}



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
