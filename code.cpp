/* C++ Program - Encrypt File */		
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char fname[20], ch ,choice,s[80],t[10];
	fstream fps,fpt;
	cout<<"Enter file name (with extension like file.txt) to encrypt : "<<endl;
	gets(fname);
	fps.open(fname,ios::out|ios::in);
	if(!fps)
	{
		cout<<"Error in opening file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(1);
	}
			fpt.open("temp1.txt",ios::out|ios::in);
	
	while(!fps.eof())
	{
		fps>>t;
		fpt<<t;
			}
    
	fps.close();
	fpt.close();
	fps.open(fname,ios::out|ios::trunc);
	fps.close();
		cout<<"File "<<fname<<" encrypted successfully..!!";
		cout<<endl<<endl;
		
		fstream fp, ft;
	cout<<"Enter file name (with extension like file.txt) which you have encrypted earlier to decrypt : ";
	gets(fname);
	fp.open(fname,ios::out|ios::in);
	if(!fp)
	{
		cout<<"Error in opening source file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(7);
	}
	ft.open("tempo.txt",ios::in|ios::out);
  while(!ft.eof()) 
  {
  ft>>t;
  fp<<t;
}

	cout<<"File "<<fname<<" decrypted successfully..!!";
		while(!fp.eof())
	{
		fp>>ch;
		cout<<ch;
	}
	fp.close();
	ft.close();
	return 0;
}

