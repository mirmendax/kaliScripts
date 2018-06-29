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
unsigned long sl = 50;
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
 return 0;
}
