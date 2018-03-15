#include <iostream>          //for input output stream
#include<stdlib.h>           //for system("cls")
#include<fstream>            // for filestream
#include <iomanip>           // setw()
#include <ctime>             //for getting time
#include<windows.h>          //to use Sleep()
using namespace std;

int remainder()                        // this function for showing the time 
{                                      //and showing the correct remainder.                         
  time_t currentTime;
  struct tm *localTime;

  time( &currentTime );                          // Get the current time
  localTime = localtime( &currentTime );         // Convert the current time to the local time

  int Day    = localTime->tm_mday;
  int Month  = localTime->tm_mon + 1;
  int Year   = localTime->tm_year + 1900;
  int Hour   = localTime->tm_hour;
  int Min    = localTime->tm_min;
  int Sec    = localTime->tm_sec;
  cout<<setw(60)<<"===============\n";

  cout <<setw(50)<<"TIME :" << Hour << ":" << Min << ":" << Sec <<endl;
  cout<<setw(60)<<"===============\n"; 
 system("COLOR AC");
 
 int d;
 string s;

     if(Hour>12 && Hour<24)                    // converting the time in 12 hour format
	{
		int temp=Hour-12;
		Hour=temp;
		 s="PM";
		cout<<setw(48)<<Hour<<":"<<Min<<":"<<Sec<<" "<<s<<endl;
	}
	else
	{
		 s="AM";
		cout<<setw(48)<<Hour<<":"<<Min<<":"<<Sec<<" "<<s<<endl; 
		  }
		  cout<<setw(60)<<"===============\n";
		cout <<setw(50)<< "DATE :" << Day << "/" << Month << "/" << Year <<endl<<endl;
		cout<<"=================================================================================================================\n";
 
	
		cout<<"\t\tMONDAY"<<setw(10)<<"TUESDAY"<<setw(10)<<"WEDNESDAY"<<setw(10)<<"THURSDAY"<<setw(10)<<"FRIDAY"<<setw(10)<<"SATURDAY"<<setw(10)<<"SUNDAY";
		cout<<"\nPRESS:\n";
		cout<<"\t\t1"<<setw(10)<<"2"<<setw(10)<<"3"<<setw(10)<<"4"<<setw(11)<<"5"<<setw(10)<<"6"<<setw(12)<<"7"<<endl<<":";
		cin>>d;
		system("cls");
		cout<<"\n";
		
		switch(d)                                 //switch case to check the time table of class
		{                                         // and remaind the recent class as per time. 
			case 1:
				{
					if(Hour==9&&Sec>0&&(s=="AM"))
					{cout<<"It's your time for  ECE 131 class\n"; }
                    else if(Hour==10&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for CSE202 class\n";}
                    else if(Hour==11&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for MEC107 class\n";}
                    if(Hour==12&&Sec>0&&(s=="PM")){
                    cout<<"Relax you are having lunch break\n";}
				     else if((Hour+12)==13&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for PHY107 LAB class\n";}
                     else if((Hour+12)==14&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for PHY107 LAB class\n";}
                    else{
                    	cout<<setw(50)<<"No class right now. Enjoy!\n";
					}
					cout<<"*********************************************************************************************************************\n";
					cout<<endl<<setw(60)<<"Time Table For The Full Day\n\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"Time\tSubject\tRoom No\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"09-10\tECE131\t34-601A\n";
                    cout<<setw(50)<<"10-11\tCSE202\t34-404X\n";
                    cout<<setw(50)<<"11-12\tMEC107\t 34-601\n";
                    cout<<setw(50)<<"13-14\tPHY107\t 27-104\n";
					cout<<setw(50)<<"14-15\tPHY107\t 27-104\n";
					break;
				}
				case 2:
				{
					if(Hour==9&&Sec>0&&(s=="AM"))
					{cout<<"It's your time for  PEV 103 class\n"; }
                    else if(Hour==10&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for MTH108 class\n";}
                    else if(Hour==11&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for CSE202 class\n";}
                    else if(Hour==12&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for CSE202 class\n";}
				     else if((Hour+12)==13&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for LUNCH\n";}
                     else if((Hour+12)==14&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for PHY108 class\n";}
                    else if((Hour+12)==15&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for ECE132 class\n";}
                    else if((Hour+12)==16&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for ECE132 class\n";}
                    else{
                    	cout<<"\tNo class right now. Enjoy!\n";
					}
					cout<<"*********************************************************************************************************************\n";
					cout<<endl<<setw(60)<<"Time Table For The Full Day\n\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"Time\tSubject\tRoom No\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"09-10\tPEV103\t 34-601\n";
                    cout<<setw(50)<<"10-11\tMTH108\t 34-601\n";
                    cout<<setw(50)<<"11-12\tCSE202\t34-404X\n";
                    cout<<setw(50)<<"12-13\tCSE202\t34-404X\n";
					cout<<setw(50)<<"14-15\tPHY108\t34-601A\n";
					cout<<setw(50)<<"15-16\tECE132\t 33-110\n";
					cout<<setw(50)<<"16-17\tECE132\t 33-110\n";
					break;
				}
				case 3:
				{
					if(Hour==10&&Sec>0&&(s=="AM"))
					{cout<<"It's your time for  MEC 107 class\n"; }
                    else if(Hour==11&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for CHE110 class\n";}
                    else if(Hour==12&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for LUNCH \n";}
				     else if((Hour+12)==13&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for CSE202 class\n";}
                     else if((Hour+12)==14&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for CSE202 class\n";}
                    else if((Hour+12)==15&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for PEV103 class\n";}
                    else if((Hour+12)==16&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for ECE131 class\n";}
				    else{
                    	cout<<"\tNo class right now. Enjoy!\n";  }
					cout<<"*********************************************************************************************************************\n";
					cout<<endl<<setw(60)<<"Time Table For The Full Day\n\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"Time\tSubject\tRoom No\n";
					cout<<setw(58)<<"===============================\n";
                    cout<<setw(50)<<"10-11\tMEC107\t 34-604\n";
                    cout<<setw(50)<<"11-12\tCHE110\t 34-606\n";
                    cout<<setw(50)<<"13-14\tCSE202\t34-404X\n";
					cout<<setw(50)<<"14-15\tCSE202\t34-404X\n";
					cout<<setw(50)<<"15-16\tPEV103\t34-601A\n";
					cout<<setw(50)<<"16-17\tECE131\t34-601A\n";
					break;
				}
				case 4:
				{
					if(Hour==9&&Sec>0&&(s=="AM"))
					{cout<<"It's your time for  PEV 103 class\n"; }
                    else if(Hour==10&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for PEV103 class\n";}
                    else if(Hour==11&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for MEC107 class\n";}
                    else if(Hour==12&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for MNT002 class\n";}
				     else if((Hour+12)==13&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for LUNCH\n";}
                     else if((Hour+12)==14&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for CHE110 class\n";}
                    else if((Hour+12)==15&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for MTH108 class\n";}
                    else if((Hour+12)==16&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for PHY108 class\n";}
                    else{
                    	cout<<"\tNo class right now. Enjoy!\n";  }
					cout<<"*********************************************************************************************************************\n";
					cout<<endl<<setw(60)<<"Time Table For The Full Day\n\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"Time\tSubject\tRoom No\n";
					cout<<setw(58)<<"===============================\n";
                    cout<<setw(50)<<"09-10\tPEV103\t 34-601\n";
                    cout<<setw(50)<<"10-11\tPEV103\t 34-601\n";
                    cout<<setw(50)<<"11-12\tMEC107\t 34-601\n";
					cout<<setw(50)<<"12-13\tMNT002\t34-601A\n";
					cout<<setw(50)<<"14-15\tCHE110\t34-601A\n";
					cout<<setw(50)<<"15-16\tMTH108\t34-601A\n";
					cout<<setw(50)<<"16-17\tPHY108\t34-601A\n";	 
						 break;
				}
				case 5:
				{
					if(Hour==9&&Sec>0&&(s=="AM"))
					{cout<<"It's your time for  ECE131 class\n"; }
                    else if(Hour==10&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for MEC107 class\n";}
                    else if(Hour>=11&&Hour<12&&Sec>0&&(s=="AM")){
                    cout<<"Its your time for MTH108 class\n";}
                   else  if(Hour==12&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for ECE131 class\n";}
				     else if((Hour+12)==13&&Sec>0&&(s=="PM")){
                    cout<<"Its your time for PHY108 \n";}
                      else{
                    	cout<<"\tNo class right now. Enjoy!\n";  }
                    cout<<"*********************************************************************************************************************\n";
					cout<<endl<<setw(60)<<"Time Table For The Full Day\n\n";
					cout<<setw(58)<<"===============================\n";
					cout<<setw(50)<<"Time\tSubject\tRoom No\n";
					cout<<setw(58)<<"===============================\n";
                    cout<<setw(50)<<"09-10\tECE131\t 33-604\n";
                    cout<<setw(50)<<"10-11\tMEC107\t 34-606\n";
                    cout<<setw(50)<<"11-12\tMTH108\t 34-606\n";
					cout<<setw(50)<<"12-13\tECE131\t 34-606\n";
					cout<<setw(50)<<"13-14\tPHY108\t 34-606\n";
					break;
				}
            default:
					{
					cout<<endl<<setw(40)<<"HOLIDAY ! NO CLASSES TODAY\n";
					break;}
		
	           system("cls");
	}
	return 0;
  }
int diary()                                               // writing and reading from the  diary
{   
system("COLOR D1");
string linesread,a;
     int choice;
    cout<<"\n"<<setw(60)<<"what you want to do?\n\n";
	cout<<setw(50)<<"1"<<setw(10)<<"- Read and Write\n";                 //taking choice weather 
    cout<<setw(50)<<"2"<<setw(10)<<"- Write Only\n";
    cout<<setw(50)<<"3"<<setw(10)<<"- Read Only\n"; 
	cin>>choice;                                                         //user wants to write or not
    system("cls");
    if(choice==1)
    {
	ofstream ofs;
	cout<<"\n";
	cout <<setw(50)<< "Writing to the Diary" << endl;
    cin.ignore();
	getline(cin, a);
  	ofs.open ("afile.bin", ofstream::out | ofstream::app);
  	ofs <<a<<"\n";                                         // writing to the file
  	ofs.close();
  	
  	ifstream IFileObject ("afile.bin");
    system("cls");
  	if (IFileObject.is_open())                                //reading from the file 
    {
    	cout <<setw(60)<< "Reading from the Diary" << endl;
        while ( getline (IFileObject, linesread) )
        {
			cout <<setw(50)<< linesread << endl;
			Sleep(500);                                        //to show the out with little pause.
        }
        IFileObject.close();
    }
      }  
        cout<<"\n";
        
    if(choice==2)                                             //taking choice weather user wants to read or not
    {
	ofstream ofs;
	cout<<"\n";
	cout <<setw(50)<< "Writing to the Diary" << endl;
    cin.ignore();
	getline(cin, a);
  	ofs.open ("afile.bin", ofstream::out | ofstream::app);
  	ofs <<a<<"\n";                                         // writing to the file
  	ofs.close();
      }
        system("cls");                                     //for clearing the screen.
        cout<<"\n";
    
	
	if(choice==3)                                          //taking choice weather user wants to read or not
    {
	ifstream IFileObject ("afile.bin");
    system("cls");
  	if (IFileObject.is_open())                                //reading from the file 
    {
    	cout <<setw(60)<< "Reading from the Diary" << endl;
        while ( getline (IFileObject, linesread) )
        {
			cout <<setw(50)<< linesread << endl;
			Sleep(500);                                          //to show the out with little pause.
        }
        IFileObject.close();
    }}
	
return 0;
}

 int main()                           // main method.
 {
 	int temp;
 	goto  CH;
 	CH:
	 {
	 	system("COLOR BC");
	 cout<<setw(40)<<"Choose:\n";
	cout<<setw(50)<<"1"<<setw(10)<<"-Remainder\n";
	cout<<setw(50)<<"2"<<setw(5)<<"-Diary\n";
	cout<<setw(50)<<"3"<<setw(5)<<"-EXIT !\n";
	cin>>temp;
	
    if(temp==1) {                                             //when user chooses first option b/w remainder and diary
	  goto A;
	  goto CH;
      }
      
	 if(temp==2){                                             //when user chooses first option b/w remainder and diary
	goto B;
	goto CH;
    }
    
	if(temp==3){                                             //when user chooses first option b/w remainder and diary
		goto C;
	}
}
    A:
	 {
	 	system("cls");
	 remainder();
	 }
	 B:
	{ 
	 diary(); 		
	 goto D;	 }		
		 
	D:
	{	 
 	int cnt;
    cout<<"\n";   
 	cout<<setw(50)<<"Press:\n";
	 cout<<setw(50)<<"1"<<setw(10)<<"-Continue Again\n";
	 cout<<setw(50)<<"2"<<setw(5)<<"-Exit\n";
 	cin>>cnt;
 	if(cnt==1){                          //checking whether user want to do the process again.
 		system("cls");
 		goto CH;
	 }
	 else{
	 	goto C ;}
	 }
	C:
	{
	  system("COLOR E9"); 
	  system("cls");
	  char str[]="THANK YOU\n";
	  char str2[]="Created by: SHUBHAM DUBEY";
	  for(int i=0;i<strlen(str);i++){
	  	system("COLOR AC");
	  	Sleep(50);
	  	cout<<str[i];
	  	system("COLOR 3D");
	  	system("COLOR 95");
	  }
	  for(int i=0;i<strlen(str2);i++){
	  	system("COLOR 3C");
	  	Sleep(50);
	  	cout<<str2[i];
	  system("COLOR 49");
	  }
	    
	 }
   
	return 0;
 }
