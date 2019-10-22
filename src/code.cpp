/* C++ Program - Encrypt File  and decrupt a file */		
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
using namespace std;
string encryptDecrypt(string toEncrypt) {
	    char key[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 

    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i];
    
    return output;
}
int main()
{
	char fname[20], ch,s[80],en[80];
	string t;
	fstream fps,fpt,fp,fpp;
	cout<<"Enter file name (with extension like file.txt) to encrypt : "<<endl;
	gets(fname);
	fps.open(fname,ios::out|ios::in|ios::app);

	if(!fps)
	{
		cout<<"Error in opening file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(1);
	}
		
	cout<<" File contain follwing data "<<endl;
	while(!fps.eof())
	{
		fps.getline(s,80);
		puts(s);
			}
  
    	fp.open(fname,ios::out|ios::in);
    		fpt.open("x.txt",ios::out|ios::in|ios::app);
   	while(!fp.eof())
	{
		fp.getline(en,80);
	  t=encryptDecrypt(en);
       fpt<<t<<endl;	
}      
fps.close();
	fpt.close();
	fp.close();
	 remove(fname);
	rename("x.txt",fname);
	fpp.open(fname,ios::out|ios::in);
	cout<<endl<<"Data After Encruption "<<endl;
	while(!fpp.eof())
	{
			fpp.getline(s,80);
		puts(s);
			}
     
   fpp.close();   
   cout<<endl;
   
    cout<<endl;
    
    
		fstream fi,fo,f,foo;
	cout<<"Enter file name (with extension like file.txt) to dencrypt : "<<endl;
	gets(fname);
	fi.open(fname,ios::out|ios::in|ios::app);

	if(!fi)
	{
		cout<<"Error in opening file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(1);
	}
		
	cout<<" File contain follwing data "<<endl;
	while(!fi.eof())
	{
		fi.getline(s,80);
		puts(s);
			}
  
    	f.open(fname,ios::out|ios::in);
    		fo.open("tem.txt",ios::out|ios::in|ios::app);
   	while(!f.eof())
	{
		f.getline(en,80);
	  t=encryptDecrypt(en);
	  fo<<t<<endl;	
}      
fi.close();
	f.close();
	fo.close();
	 remove(fname);
	rename("tem.txt",fname);
	foo.open(fname,ios::out|ios::in);
	cout<<endl<<"Data After Decruption "<<endl;
	while(!foo.eof())
	{
			foo.getline(s,80);
		puts(s);
			}
     
   foo.close();
    
 return 0;   

getch();
}
