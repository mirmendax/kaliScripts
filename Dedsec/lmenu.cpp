#include <iostream>
#include <iomanip>


#include <stdio.h>
#include "color.h"


using namespace std;

int msleep(unsigned long milisec)  
 
{  
    struct timespec req={0};  
    time_t sec=(int)(milisec/1000);  
    milisec=milisec-(sec*1000);  
    req.tv_sec=sec;  
    req.tv_nsec=milisec*1000000L;  
    while(nanosleep(&req,&req)==-1)  
        continue;  
    return 1;  
 
}  

int main()
{
unsigned long sl = 80;
  Color::Modifier blue(Color::FG_BLUE);
  Color::Modifier red(Color::FG_RED);
  Color::Modifier green(Color::FG_GREEN);
  Color::Modifier yel(Color::FG_YELLOW);
  Color::Modifier mag(Color::FG_MAGENTA);
  Color::Modifier def(Color::FG_DEFAULT);
 cout<<blue << endl;
 cout<<blue << "                                \n                                            @@@@@@@@   @@@@@@@@@         " << endl;
 cout<<red << "                             @@@@@@@      @@@@@@@@@@@ @@@@@@@@@@@@             " << endl;
msleep(sl);
 cout<<green << "                           @@@@@@@@@@@@  @@@@@@ @@@@@ @@@@@@@@@@@@@  @@@@      " << endl;
msleep(sl);
 cout<<yel << "  @@@@          @@@@@@@@@@ @@@@@@@@@@@@@ @@@@@@ @@@@  @@@@@%   @@@ @@@@@@@@@   " << endl;
msleep(sl);
 cout<<red << "@@@@@@@@@    @@@@@@@@@@@@@ #@@@@@@@@@@@@ @@@@@@      @@@@@@@     @@@@@@@@@@@@@ " << endl;
msleep(sl);
 cout<<blue << "@@@@@@@@@@   @@@@@@@@@@@@  @@@@@  @@@@@ #&&&&&&&&    @@@@@@@@@@ @@@@@@ @@@@@@@@" << endl;
 cout<<green << " @@@@@@@@@@   @@@@@@@@@@@@  @@@@@  @@@@@ #&&&&&&&&   @@@@@@@@@@ @@@@@   @@@@@@@" << endl;
msleep(sl);
 cout<<red << "  @@@@@@@@@@&  @@@@@@@@@    @@@@&  &&&&&  &&&&&&&&% &&&&&&&&@  &@@@@    @@@@@@@" << endl;
 cout<<yel << "   @@@@  %@&&&  @@@&&&       &&&&&  &&&&    &&&&&&& &&&&      &&&&@     (@@@@# " << endl;
msleep(sl);
 cout<<blue << "    @@@&   &&&&  &&&&&.      &&&&&  &&&&      %%%% %&&&      &&&&              " << endl;
 cout<<green << "     &&&&   &&&%  &&%%%%%%%%  %%%%  %%%% /%%   %%% %%%%%%%  %&&& &&&&&&        " << endl;
msleep(sl);
 cout<<red << "      &&&&   %%%#  %%%%%%%%#  %%%%  %%%% %%%%%%%%% %%%%%%% %%%%&&&&&&          " << endl;
 cout<<yel << "       %%%%   %%%   %######   ##### #### ########  ##%%%%  %%%%%%%&            " << endl;
msleep(sl);
 cout<<blue << "        %%%%   ###  #####      #### #### (######             %%%%               " << endl;
 cout<<green << "         %###  ####  #((((     ((((((((/   (##                                  " << endl;
msleep(sl);
 cout<<red << "          ####  #(((  (((( (((( ((((((                                         " << endl;
 cout<<yel << "           ##(( ((((   ((////// (((                                            " << endl;
msleep(sl);
 cout<<green << "            ((((((((/   ///////                                               " << endl;
 cout<<yel << "             ((((((//    ///                                                   " << endl;
 cout<<red << "              ///////                                          " << endl;
msleep(sl);
 cout<<green << "               ////                                     " << endl;
 cout<<blue << endl <<endl;
msleep(400);
 cout<<def;
 cout<<mag << "================================================================================" << endl;
 cout<<mag << "Команда			"<<yel<<" Описание\n"<<endl;
 cout<<green << "myip			"<<red<<" Мой ip адрес"<<endl;
msleep(sl);
 cout<<green << "showpass		"<<red<<" Показать базу паролей"<< endl;
 cout<<green << "wlan_mon		"<<red<<" Перевести WiFi в режим монитора"<<endl;
msleep(sl);
 cout<<green << "wlan_managed		"<<red<<" Перевести WiFi в режим менеджера"<<endl;
 cout<<green << "temp			"<<red<<" Вывести температуру процессора\n" <<endl;
 cout<<green << "msfconsole		"<<red<<" Запуск Metasploit Framework"<<endl;
msleep(sl);
 cout<<mag << "================================================================================" << endl;
msleep(sl);
 cout<<red << "                 	     ++++++++++++++++++++++++++++++++++++++++                    " << endl;
 cout<<def << "                		       DedSec logo ("<<green<<"with "<<mag<<"Wathdogs "<<green<<"2"<<def<<")                      " << endl;
 cout<<def << "                		       Version: "<<green<<"0.1 beta                                        " << endl;
 cout<<red << "               		     ++++++++++++++++++++++++++++++++++++++++                    " << def << endl;
 return 0;
}
