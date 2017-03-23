#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<iomanip>
using namespace std;

#include"Flight.h"				//存储航班订票系统
#include"InitInformation.h"		//初始化各种信息
#include"AssignBasicInfo.h"		//随机生成航班和乘客信息
#include"InFile.h"				//写入文件
#include"Assign.h"				//从文件读入信息
#include"Lookup.h"				//查找信息
#include"Order.h"				//订票
#include"DeOrder.h"				//退票
#include"FlightPrint.h"			//输出航班信息
#include"SeatRate.h"			//乘座率
#include"VIP.h"					//VIP
#include"UI.h"					//菜单

void main()
{
	srand( (unsigned)time(NULL) );

	int i=0;

	Flight F,*f=NULL;

	Passenger P,*p=NULL;

	Count C,*c=NULL;

	InitInformation( F,P,C );

//	AssignBasicInfo( F,P );

//	AssignTicketInfo( F,P,C );

//	InFile( F,P,C );

	AssignFlight( F );

	AssignPassenger( P );

	AssignTicket( C );

	UI( F,P,C );
}
