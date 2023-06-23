#include<iostream>
#include<stdlib.h>
using namespace std;

void admin();
void admin_login();
void admin_reg();
void admin_pass();
void admin_panel();
void vehicle_management();

void worker();
void worker_login();
void worker_reg();
void worker_panel();
void worker_pass();


int main(){
    int i;
    cout<<" __________________________________________"<<endl;
    cout<<"|                                          |"<<endl;
    cout<<"| Welcome To Car Parking Management System |"<<endl;
    cout<<"|__________________________________________|"<<endl;
    cout<<"|                                          |"<<endl;
    cout<<"|             1.Admin-Panel                |"<<endl;
    cout<<"|__________________________________________|"<<endl;
    cout<<"|                                          |"<<endl;
    cout<<"|             2.Worker-Panel               |"<<endl;
    cout<<"|__________________________________________|"<<endl;


    cout<<" Enter your Panel Number (1 Or 2):"<<endl;
    cin>>i;
    system("cls");

    if(i==1){
        admin();

    }
    else if(i==2){
        worker();
    }

return 0;
}

//admin main panel start here.
void admin(){
    int in;
    cout<<" __________________________________________"<<endl;
    cout<<"|                                          |"<<endl;
    cout<<"|    Welcome To Car Parking Admin Panel    |"<<endl;
    cout<<"|__________________________________________|"<<endl;

cout<<" 1.Login"<<endl;
cout<<" 2.Registration"<<endl;
cout<<"[Press 3 To Get Back]"<<endl;
cout<<endl;
cout<<"Enter Your Choice(1,2 or 3):"<<endl;
cin>>in;
system("cls");
if(in==1){
    admin_login();
}
else if(in==2){
    admin_reg();
}
else if(in==3){
    main();
}
}


//Admin login panel start here.
void admin_login(){
    string lg_email,lg_pass;
cout<<" _______________________________"<<endl;
cout<<"|                               |"<<endl;
cout<<"| Welcome To Admin login-Panel! |"<<endl;
cout<<"|_______________________________|"<<endl;
cout<<endl;
cout<<" You Have To Login First!!!";
cout<<endl;
cout<<endl;
cout<<"|Enter Your Email:";
cin>>lg_email;
cout<<"|Password:";
cin>>lg_pass;
system("cls");
admin_panel();

}


//admin reg-panel start here.
void admin_reg(){
    string email,number,first_name,second_name;
    int bk;
cout<<" ______________________________________"<<endl;
cout<<"|                                      |"<<endl;
cout<<"| Welcome To Admin Registration-Panel!!|"<<endl;
cout<<"|______________________________________|"<<endl;
cout<<endl;
cout<<" Please Give Below Information!!!"<<endl;
cout<<endl;
cout<<"|Enter Your First Name:";
cin>>first_name;
cout<<"|Enter Your Secon Name:";
cin>>second_name;
cout<<"|Enter Your Email:";
cin>>email;
admin_pass();
system("cls");
cout<<"Congratulation Your Registration Successfull!!!";
cout<<endl;
cout<<endl;
cout<<"[Enter '3' To Login] OR [Press '0' To Go Home Page]"<<endl;
cin>>bk;
system("cls");
  if(bk==3){
    admin_login();
}
else if(bk==0){
    main();
}
}
//admin password.
void admin_pass(){
    string pass,re_pass;

    cout<<"|Enter Your Password:";
    cin>>pass;
    cout<<"|Re-Enter Password:";
    cin>>re_pass;
    if(pass!=re_pass){
        system("cls");
        cout<<" Your Re-Password Is Wrong Set Again!!!"<<endl;
        cout<<endl;
        admin_pass();
        system("cls");
    }
}

//admin_panel start here
void admin_panel(){
    int choice,bk;
cout<<" _________________________"<<endl;
cout<<"|                         |"<<endl;
cout<<"| Welcome To Admin Panel! |"<<endl;
cout<<"|_________________________|"<<endl;
cout<<endl;
    cout<<" 1.Vehicle Management"<<endl;
    cout<<" 2.Employ List"<<endl;
    cout<<" 3.Search Vehicle"<<endl;
    cout<<" 4.Total Earned Money"<<endl;
    cout<<" 5.Reports"<<endl;
    cout<<" 6.Logout"<<endl;
    cout<<endl;
    cout<<"Enter Your Choice(1-5):"<<endl;
    cin>>choice;
    system("cls");
    if(choice==1){
        vehicle_management();
        cout<<endl;
    }
    else if(choice==6){
    main();
    }

    else{
    cout<<"Sorry!!!Under Working...!!"<<endl;
    cout<<endl;
    }
    cout<<"[Enter '3' To Get Back] OR [Press '0' To Go Home Page]"<<endl;
    cin>>bk;
       system("cls");
  if(bk==0){
    main();
}
else if(bk==3){
    admin_panel();
}
}

//Vehicle management
void vehicle_management(){
cout<<" _______________________________________"<<endl;
cout<<"|                                       |"<<endl;
cout<<"| Welcome To Vehicle Management System! |"<<endl;
cout<<"|_______________________________________|"<<endl;
cout<<endl;
cout<<" Todays Vehicle's Entries:"<<endl;
cout<<" Today Vehicle's Out:"<<endl;
cout<<" Total Vehicle's Enter:"<<endl;
cout<<" Today's Earn:"<<endl;
}



//worker panel start here.
void worker(){
    int in;
    cout<<" __________________________________________"<<endl;
    cout<<"|                                          |"<<endl;
    cout<<"|    Welcome To Car Parking Worker Panel   |"<<endl;
    cout<<"|__________________________________________|"<<endl;

cout<<" 1.Login"<<endl;
cout<<" 2.Registration"<<endl;
cout<<"[Press 3 To Get Back]"<<endl;
cout<<endl;
cout<<"Enter Your Choice(1,2 or 3):"<<endl;
cin>>in;
system("cls");
if(in==1){
    worker_login();
}
else if(in==2){
    worker_reg();
}
else if(in==3){
    main();
}
}

//worker login panel here
void worker_login(){

string lg_email,lg_pass;
cout<<" _______________________________"<<endl;
cout<<"|                               |"<<endl;
cout<<"| Welcome To Worker login-Panel!|"<<endl;
cout<<"|_______________________________|"<<endl;
cout<<endl;
cout<<" You Have To Login First!!!";
cout<<endl;
cout<<endl;
cout<<"|Enter Your Email:";
cin>>lg_email;
cout<<"|Password:";
cin>>lg_pass;
system("cls");
worker_panel();
}

//worker panel here
void worker_panel(){
    int bk;
cout<<" _________________________"<<endl;
cout<<"|                         |"<<endl;
cout<<"| Welcome To Worker Panel!|"<<endl;
cout<<"|_________________________|"<<endl;
cout<<endl;
cout<<" 1.Vehicle Management"<<endl;
cout<<" 2.Vahicle search"<<endl;
cout<<" 3.Today's Parked Vahicle List"<<endl;
cout<<" 4.Today's Outed Vahicle List"<<endl;
cout<<" 5.Logout"<<endl;
cout<<endl;
cout<<"Enter Your Choice(1-5):"<<endl;
cin>>bk;

system("cls");
if(bk==5){
    main();
}
else{
    cout<<"Under Working.."<<endl;
}
}

//worker registration panel here
void worker_reg(){
    string email,number,first_name,second_name;
    int bk;
cout<<" ______________________________________"<<endl;
cout<<"|                                      |"<<endl;
cout<<"| Welcome To Worker Registration-Panel!|"<<endl;
cout<<"|______________________________________|"<<endl;
cout<<endl;
cout<<" Please Give Below Information!!!"<<endl;
cout<<endl;
cout<<"|Enter Your First Name:";
cin>>first_name;
cout<<"|Enter Your Secon Name:";
cin>>second_name;
cout<<"|Enter Your Email:";
cin>>email;
worker_pass();
system("cls");
cout<<"Congratulation Your Registration Successfull!!!";
cout<<endl;
cout<<endl;
cout<<"[Enter '3' To Login] OR [Press '0' To Go Home Page]"<<endl;
cin>>bk;
system("cls");
  if(bk==3){
    worker_login();
}
else if(bk==0){
    main();
}
}

//worker password

void worker_pass(){
    string pass,re_pass;

    cout<<"|Enter Your Password:";
    cin>>pass;
    cout<<"|Re-Enter Password:";
    cin>>re_pass;
    if(pass!=re_pass){
        system("cls");
        cout<<" Your Re-Password Is Wrong Set Again!!!"<<endl;
        cout<<endl;
        worker_pass();
        system("cls");
    }
}



