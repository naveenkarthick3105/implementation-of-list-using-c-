#include<iostream.h>#include<conio.h>#include<process.h>voidcreate();
void insert();void deletion();void search();voiddisplay();
inta,b[20],n,d,e,f,i;voidmain()
{
intc;
char g='y';clrscr();do
{
cout<<"\nMainMenu";
cout<<"\n1.Create\n2.Delete\n3.Search\n4.insert\n5.Display\n6.Exit";cout<<"\nenteryourchoice\n";
cin>>c;switch(c)
{
case 1: create(); break;case2:deletion();break;case 3: search(); break;case 4: insert(); break;case 5: display(); break;case 6: exit(0); break;default:
cout<<"Thegivennumberisnotbetween1-5\n";
}
 

cout<<"\nDouwanttocontinue\n";cin>>g;
clrscr();
}
while(g=='y'|| g=='Y');getch();
}
voidcreate()
{cout<<"\nEnterthenumber\n";cin>>n;
for(i=0;i<n;i++)
{
cin>>b[i];
}}
voiddeletion()
{
cout<<"Enterthelimituwanttodelete\n";cin>>d;
for(i=0;i<n;i++)
{
if(b[i]==d)
{b[i]=0;
}}}
void search()
{
cout<<"Enterthelimit\n";cin>>e;
for(i=0;i<n;i++)
{
if(b[i]==e)
{
cout<<"Valuefoundtheposition\n"<<b[i];
}}}
voidinsert()
{
cout<<"enterhowmanynumberuwanttoinsert\n";cin>>f;
for(i=0;i<f;i++)
{
cin>>b[n++];
}}
 

voiddisplay()
{
cout<<"\n\n\n";for(i=0;i<n;i++)
{
cout<<"\n\n\n"<<b[i];
}}

