// timetests.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"

// So jetzt adde ich mak ein paar Kommentare
#define T 0x12345678l; //1302551399;

int _tmain(int argc, _TCHAR* argv[])
{
	time_t t=time(0);
	struct tm _tms;
	gmtime_s(&_tms,&t);
	struct tm *tms=&_tms;
	

	printf("t=%d\n",t);
	printf("%02d:%02d:%02d %d.%02d.%d dst %d  yday %d wday %d\n",
		tms->tm_hour,
		tms->tm_min,
		tms->tm_sec,
		tms->tm_mday,
		tms->tm_mon+1,
		tms->tm_year+1900,
		tms->tm_isdst,
		tms->tm_yday,
		tms->tm_wday);


	getchar();

	return 0;
}

