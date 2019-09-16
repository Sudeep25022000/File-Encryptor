/* C++ Program - Encrypt File */		
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char fname[20], ch,s[80],t[80];
	fstream fps,fpt;
	cout<<"Enter file name (with extension like file.txt) to encrypt : ";
	gets(fname);
	fps.open(fname,ios::in|ios::out);
	if(!fps)
	{
		cout<<"Error in opening file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(1);
	}
       cout<<" File contains following data "<<endl;
		while(!fps.eof())
	{
		fps.getline(s,80);
		puts(s);
		
	}
	fpt.open("temp.txt");
	
	while(!fps.eof())
	{
		fps.getline(s,80);
		for(int j=0;j<80;j++)
		fpt.put(s[j]);
	}
	while(!fpt.eof())
	{
		fpt.getline(s,80);
		for(int i=0;i<80;i++)
	{
			s[i]=s[i]+10;
		fps.put(s[i]);
	}
}
	cout<<"File "<<fname<<" encrypted successfully..!!";
	cout<<" Encrupted data is"<<endl;
		while(!fps.eof())
	{
			fps.getline(s,80);
		puts(s);
	}
	fps.close();
	fpt.close();
	fstream fp, ft;
	cout<<"Enter file name (with extension like file.txt) which you have encrypted earlier to decrypt : ";
	gets(fname);
	fp.open(fname,ios::in|ios::out);
	if(!fp)
	{
		cout<<"Error in opening source file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(7);
	}
	while(!fp.eof())
	{
    	fp.getline(s,80);
		for(int i=0;i<80;i++)
{
		s[i]=s[i]+10;
		fp.put(s[i]);
	}
}
	cout<<"File "<<fname<<" decrypted successfully..!!";
	fp.close();
	ft.close();

	return 0;
}

