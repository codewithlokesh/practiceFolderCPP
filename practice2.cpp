#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

string name[50];      
string phoneNo[50];    
string mobileNo[50]; 
string faxNo[50];
string email[50];
string Address[50];

int counter= -1;

int validatecontact(string tmpname){ 
for (int i=0; i<=counter; i++){
    if (name[i]==tmpname){
        return 0;
        }
   }
   return 1;
   }
   
   void add contact(){
       string tmpname= " ";
       
       cout<<"enter name:";
       cin>>tmpname;
       
 if(validate contact (tmpmame)==) {
     counter++;
     name[counter]=tmpname;
     }
     else{ 
     
     cout<<endl<<"contact already exist with thiis name "<<endl;
     return;
     }
     
     cout<<"enter phone no:";
     cin>>phoneNo[counter];
     cout<<"enter mobile no:";
     cin>>mobileNo[counter];
     cout<<"enter fax no:";
     cin>>faxNo[counter];
     cout<<"enter email :";
     cin>>email[counter];
     cout<<"enter address:";
     cin>>address[counter];
     
     }
     
     void print(int tmpcounter) {
         if (name[tmpcounter]== " ")
         return;
         if (counter> -1) {
             
  cout<<"Name:"<<name[tmpcounter]<<endl;
cout<<"phone no:"<<phoneNo[tmpcounter]<<endl;
  
cout<<"mobile no:"<<mobileNo[tmpcounter]<<endl;
     
cout<<"fax no:"<<faxNo[tmpcounter]<<endl;

cout<<"email:"<<email[tmpcounter]endl;

cout<<"address:"<<address[tmpcounter]<<endl<<endl;

cout<<"press any key to view nest / continuee..."<<endl<<endl;

getch();
}
}
     
     void printAll(){
         if (conter> -1){
             for (int i=0; i<=counter; i++) {
                 print(i);
                 }
         }
  }
      
      
 void update contact (int tmpcounter)
 {
     
    string tmpname= " ";
    cout<<"enter name :";
    cin>>tmpname;
    if (validate contact(tmpname)){
        name[tmpcounter]=tmpname;
        } else{
            cout<<endl<<"contact already exist with thiss name"<<endl;
            return ;
            }
            
            
 cout<<"enter phone no:";
 cin>>phoneNo[tmpcounter];    
     
cout<<"enter mobile no:";
 cin>>mobileNo[tmpcounter];
 
 
  cout<<"enter fax no:";
 cin>>FaxNo[tmpcounter];
 
cout<<"enter email:";
 cin>>email[tmpcounter];
 
  cout<<"enter address:";
 cin>>address[tmpcounter];
 
 }
 
void delete contact(tmpcounter){
    
    name[tmpcounter]= " ";
    phoneNo[tmpcounter]= " ";
    mobileNo[tmpcounter]= " ";
    faxNo[tmpcounter]= " ";
    email[tmpcounter]= " ";
   address[tmpcounter]= " ";
   
   }
   
   int find counter(){
       if (counter<0)
       return -1;
       
       string tmpname;
       cout<<"enter name";
       cin>>tmpname;
       for (int i=0; i<=counter; i++)
   {
       if (name[i]==tmpname){
           return i;
           }
       }
       return 1;
     }
     
     
    int main (){
        char op;
        do{
            system("cls");
            
      cout<<"1.Add contact"<<endl;
      cout<<"2.list contact"<<endl;
      cout<<"3.search contact"<<endl;
      cout<<"4.update contact"<<endl;
      cout<<"5.delete contact"<<endl;
      cout<<"6.exit"<<endl<<endl;
      cout<<"enter option(1-6):";
      cin>>op;
      
    
 
    switch(op) {
        case '1':
        { 
        add contact();
        cout<<"contact added successfully..."<<endl;
        cout<<"press any key to continuee";
        gectch();
        break; 
     }
  
  case '2':
  { 
  printAll();
  break;
  }
  
  case '3':
  {
   int tmpcounter=findcounter();
   if(tmpcounter> -1);{
   print(tmpcounter);
   }
   break;
   }
   
   case '4':
   {
       int tmpcounter=findcounter();
       if(tmpcounter> -1){
         update contact(tmpcounter);
         }
         break;
         }
         
   case '5':
   {
       int tmpcounter=findcounter();
       if (tmpcounter> -1){
           delete contact(tmpconter);
           }
           break;
           }
           
   case '6':
   {
       continue;
       break;
       }
   }
   
   }while(op !='6');
   
   return 0;
   
 }