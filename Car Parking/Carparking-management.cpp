#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main();

//----------------------
//CLASS START HERE      |
//----------------------


class admin_panel{
private:
    string ad_name,ad_email,ad_pass,ad_repass,ad_number;
    string worker_time,worker_email,worker_id;
    int sum=0;
public:

//REGISTRATION FUNCTION
    void ad_reg(string name,string email,string adpass,string repass,string number);
    void pass();
    void condition();
    void ad_repass2(string adpass2,string retypass2);

//Admin function seeting start here
    void admin();
    void ad_login(string email,string adpass);
    void admin_reg_file();
    void admin_home_panel();
    void admin_car_search();
    void wrk_ext(string wrk_time,string wrk02_email,string wrk_id);
    void total_earn();

//Worker function seeting start here
    void worker();
    void wrk_login(string wrk_email,string wrk_adpass,string wrk_name);
    void wrk_reg_file();
    void wrk_home_panel();
    void wrk_car_entry(string dt_car_num);
    void parking_earn();
};


//----------------------
//CLASS END HERE       |
//----------------------


//REGISTRATION PANEL START HERE
void admin_panel :: ad_reg(string name,string email,string adpass,string repass,string number){

    getline(cin, name);
    cout<<" Enter Your Name:";
    getline(cin, ad_name);
    cout<<" Enter Your Username:";
    getline(cin, email);
    cout<<" Enter Your Phone Number:";
    getline(cin, number);

    ad_name==name;
    ad_email=email;
    ad_pass=adpass;
    ad_repass=repass;
    ad_number=number;
}

//PASSWORD SET PANEL
void admin_panel :: pass(){
    cout<<" Enter Your Password:";
    getline(cin,ad_pass);
    cout<<" Enter Your Password Again:";
    getline(cin, ad_repass);
system("cls");
}

//CONDITION PANEL
void admin_panel :: condition(){
        if(ad_pass==ad_repass){
        cout<<"\t \t \t[Re-Pass Matched!!]"<<endl;
    }
    else if(ad_pass!=ad_repass){
        string adpass2,retypass2;
    system("cls");
            cout<<"_____________________"<<endl;
            cout<<" Your Details Is!!!"<<endl;
            cout<<"_____________________"<<endl;
            cout<<" Your Name:"<<ad_name<<endl;
            cout<<" Your Username:"<<ad_email<<endl;
            cout<<" Your Number:"<<ad_number<<endl;
            cout<<endl;
            cout<<"[Your Repass Did't Match Set Again!!!]"<<endl;
            ad_repass2(adpass2,retypass2);

    }
}

//RE-PASS CHECK SET HERE
void admin_panel :: ad_repass2(string adpass2,string retypass2){
    ad_pass=adpass2;
    ad_repass=retypass2;
    cout<<"Enter Your Password:";
    cin>>ad_pass;
    cout<<"Enter Your Password Again:";
    cin>>ad_repass;
    system("CLS");
    if(ad_pass==ad_repass){
        cout<<"\t \t \t \tRe-Pass Matched"<<endl;
    }
    else if(ad_pass!=ad_repass){
            system("cls");
            cout<<"_____________________"<<endl;
            cout<<" Your Details Is!!!"<<endl;
            cout<<"_____________________"<<endl;
            cout<<" Your Name:"<<ad_name<<endl;
            cout<<" Your Username:"<<ad_email<<endl;
            cout<<" Your Number:"<<ad_number<<endl;
            cout<<endl;
            cout<<"[Your Repass Did't Match Set Again!!!]"<<endl;
            ad_repass2(adpass2,retypass2);

    }
}


//ADMIN LOGIN/REG/HOME PANEL START HERE
void admin_panel::admin(){
    admin_panel call;
    int choice;
    string name,email,adpass,repass,number;
    string adpass2,retypass2;
    cout<<"_______________________________"<<endl;
    cout<<"Welcome To Admin Login Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<" 1.Login"<<endl;
    cout<<" 2.Registration"<<endl;
    cout<<" 3.Back"<<endl;
    cout<<"Enter Your Choice[1],[2] or [3]:";
    cin>>choice;
    system("cls");
    if(choice==1){
    cout<<"_______________________________"<<endl;
    cout<<"Welcome To Admin Login Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    call.ad_login(email,adpass);
    }
    else if(choice==2){
    cout<<"_______________________________________"<<endl;
    cout<<"Welcome To Admin Registration Panel!!"<<endl;
    cout<<"_______________________________________"<<endl;
        call.ad_reg(name,email,adpass,repass,number);
        call.pass();
        call.condition();
        call.admin_reg_file();
        system("cls");
    }
    else if(choice==3){
        main();
    }
}


//ADMIN LOGIN PANEL SET HERE
void admin_panel:: ad_login(string email,string adpass){
    string um,pw;

    cout<<" Enter Your Username:";
    cin>>email;
    cout<<" Enter Your  Pass:";
    cin>>adpass;
    cout<<"Press [1] to get back:";

    ad_email=email;
    ad_pass=adpass;

  ifstream read(ad_email + ".admin.txt");
    getline(read,um);
    getline(read,pw);

    system("cls");

    if(um==ad_email && pw==ad_pass){
            admin_home_panel();

    }
    else if(um==ad_email && pw!=ad_pass){
        cout<<"Password Is Wrong Try Again!!"<<endl;
        ad_login(email,adpass);
    }
    else if(um!=ad_email && pw==ad_pass){
        cout<<"Username Is Wrong Try Again!!"<<endl;
        ad_login(email,adpass);
    }
    else if(um!=ad_email && pw!=ad_pass){
        cout<<"Username And Password Is wrong!!"<<endl;
        ad_login(email,adpass);

    }
}



//ADMIN FILE CREATE HERE
    void admin_panel::admin_reg_file(){
        int choice;
    ofstream file;
    file.open(ad_email + ".admin.txt");
        file << ad_email << endl << ad_pass;
        file.close();
        cout <<"\t\tWelcome " << ad_name << " Registration complete successfully!!!" << endl;
        cout<<endl;
        cout<<" Press [1] to go home page:";
        cin>>choice;
        if(choice==1){
                system("cls");
            main();
        }
    }



//ADMIN WORK-HOME-PANEL START HERE
void admin_panel::admin_home_panel(){

    int choice;
    cout<<"_______________________________"<<endl;
    cout<<"Welcome To Admin Work Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<" 1.Total Parked Car"<<endl;
    cout<<" 2.Total Earning"<<endl;//done
    cout<<" 3.Worker Details"<<endl;//done
    cout<<" 4.Car Search "<<endl;//done
    cout<<"Enter [5] to logout:";
    cin>>choice;
    system("cls");
//FOR GOTO MAIN MENU
    if(choice==5){
            system("cls");
        main();
    }
//FOR WORKER DETAILS
    else if(choice==3){
    cout<<"___________________________________"<<endl;
    cout<<"Welcome To Worker Details Panel!!"<<endl;
    cout<<"___________________________________"<<endl;
    cout<<endl;

    string line;
    ifstream wrk("workerlist.txt");

    while(getline(wrk,line)){
        cout<<line<<endl;

    }
    wrk.close();

    int coi;
    cout<<endl;
    cout<<"Press [3] To Get Back Admin Panel:";
    cin>>coi;
    system("cls");
    if(coi==3){
            admin_home_panel();
    }
  }


//FOR Search and user details
  else if(choice==4){
        int choi;
    admin_car_search();
    cout<<endl;
    cout<<" Enter [3] To Get Admin Work Panel:";
    cin>>choi;
  system("cls");
  if(choi==3){
        admin_home_panel();

  }
  }

  else if(choice==2){

    total_earn();
}

}

//EARN CAL HERE
void admin_panel::total_earn(){
    string line;
    ifstream wrk("totalearn.txt");
int index=0,choice;
    while(getline(wrk,line)){

        int sum=stoi(line);
        index=index+sum;

    }
    wrk.close();
    cout<<"_______________________________"<<endl;
    cout<<"Welcome To Total Earning Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<endl;
    cout<<"Your Total Earning IS: "<<index<<" BDT"<<endl;
    cout<<endl;
    cout<<"Enter [3] To Get Back:";
    cin>>choice;
    system("cls");

    if(choice==3){
        admin_home_panel();

    }

}

//WORKER LOGIN/REG/HOME PANEL START HERE
void admin_panel::worker(){

    string wrk_email,wrk_adpass,wrk_name;
    string name,email,adpass,repass,number;
    string adpass2,retypass2;
    string wrk_time,wrk02_email,wrk_id;

    admin_panel call;
    int choice;
    cout<<"_______________________________"<<endl;
    cout<<"Welcome To Worker Login Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<" 1.Login"<<endl;
    cout<<" 2.Registration"<<endl;
    cout<<" 3.Back"<<endl;
    cout<<"Enter Your Choice[1],[2] or [3]:";
    cin>>choice;
    system("CLS");

    if(choice==1){
    cout<<"_______________________________"<<endl;
    cout<<"Welcome To Worker Login Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    call.wrk_login(wrk_email,wrk_adpass,wrk_name);
    }
    else if(choice==2){
    cout<<"_______________________________________"<<endl;
    cout<<"Welcome To Worker Registration Panel!!"<<endl;
    cout<<"_______________________________________"<<endl;
        call.ad_reg(name,email,adpass,repass,number);
        call.wrk_ext(wrk_time,wrk02_email,wrk_id);
        call.pass();
        call.condition();
        call.wrk_reg_file();
    }
    else if(choice==3){
        main();
    }
}


//WORKER REG PANEL EXTRA
void admin_panel :: wrk_ext(string wrk_time,string wrk02_email,string wrk_id){

    cout<<" Enter Your Email:";
    getline(cin, wrk02_email);
    cout<<" Enter Working Hour(8:00-9:00):";
    getline(cin, wrk_time);
    cout<<" Enter Your ID:";
    getline(cin, wrk_id);

    worker_time=wrk_time;
    worker_id=wrk_id;
    worker_email=wrk02_email;
}


//WORKER LOGIN-PANEL SET HERE
void admin_panel:: wrk_login(string wrk_email,string wrk_adpass,string wrk_name){
    ad_name=wrk_name;
    ad_email=wrk_email;
    ad_pass=wrk_adpass;

    string um,pw;

    cout<<" Enter Your Username:";
    cin>>ad_email;
    cout<<" Enter Your  Pass:";
    cin>>ad_pass;
    cout<<"Press [1] to get back:";

  ifstream read(ad_email + ".worker.txt");
    getline(read,um);
    getline(read,pw);

    system("cls");

    if(um==ad_email && pw==ad_pass){
            wrk_home_panel();

    }
    else if(um==ad_email && pw!=ad_pass){
        cout<<"Password Is Wrong Try Again!!"<<endl;
        wrk_login(wrk_email,wrk_adpass,wrk_name);
    }
    else if(um!=ad_email && pw==ad_pass){
        cout<<"Username Is Wrong Try Again!!"<<endl;
        wrk_login(wrk_email,wrk_adpass,wrk_name);
    }
    else if(um!=ad_email && pw!=ad_pass){
        cout<<"Username And Password Is wrong!!"<<endl;
        wrk_login(wrk_email,wrk_adpass,wrk_name);

    }
}



//WORKER REG FILE CREATE HERE
void admin_panel::wrk_reg_file(){
    int choice;
    ofstream file;
    file.open(ad_email + ".worker.txt");
        file << ad_email << endl << ad_pass;
        file.close();

//THIS FOR WORKER-LIST
    ofstream wrk;
    wrk.open("workerlist.txt",ios::out|ios::app);
        wrk <<" Worker Name:"<<ad_name<<endl<<" Worker Username:"<<ad_email<<endl<<" Worker Number:"<<ad_number<<endl<<" Worker Email:"<<worker_email<<endl<<" Working Time:"<<worker_time<<endl<<" Worker ID:"<<worker_id<<endl<<"____________________________________________"<<endl;
        cout<<endl;
        wrk.close();

        cout <<"Welcome " << ad_name << " Registration complete successfully!!!" << endl;
        cout<<endl;
        cout<<" Press [1] to go home page:";
        cin>>choice;
        if(choice==1){
                system("cls");
            main();
        }

}

//WORKER WORK-HOME-PANEL START HERE
void admin_panel::wrk_home_panel(){
    int choice;
    string dt_car_num;
    cout<<"_______________________________"<<endl;
    cout<<"   Welcome To Worker Panel!!"<<endl;
    cout<<"_______________________________"<<endl;
    cout<<" 1.Car Entry"<<endl;//done
    cout<<" 2.Car Exit"<<endl;
    cout<<" 3.Car search"<<endl;//done
    cout<<" 4.Log out"<<endl;//done
    cout<<"Enter Your Choice:";
    cin>>choice;
    system("cls");
    if(choice==1){
            wrk_car_entry(dt_car_num);
    }
    else if(choice==4){
        main();
    }
    else if(choice==3){
            int ch;
        admin_car_search();
        cout<<endl;
        cout<<"Enter [3] To Get Back:";
        cin>>ch;
        system("cls");
        if(ch==3){
            wrk_home_panel();
        }
    }


}
//WORKER CAR MANAGEMENT START HERE
void admin_panel::wrk_car_entry(string dt_car_num){

    int choice,dt_hour;
    string dt_name,dt_phone,dt_email,dt_car_model;//need to work on date and time

    cout<<"______________________________________"<<endl;
    cout<<"     Welcome To Car Entry Panel!!   "<<endl;
    cout<<"______________________________________"<<endl;
    getline(cin,dt_name);
    cout<<" Enter Name:";
    getline(cin,dt_name);
    cout<<" Enter Phone Number:";
    getline(cin,dt_phone);
    cout<<" Enter Email:";
    getline(cin,dt_email);
    cout<<" Enter Car Model:";
    getline(cin,dt_car_model);
    cout<<" Enter Car Number:";
    getline(cin,dt_car_num);
    cout<<" Enter Parking Hour:";
    cin>>dt_hour;
    sum=(dt_hour*40);


    system("cls");

    cout<<"______________________________________"<<endl;
    cout<<"     Welcome To Car Entry Panel!!   "<<endl;
    cout<<"          Customer Details!!           "<<endl;
    cout<<"______________________________________"<<endl;
    cout<<endl;
    cout<<" Name: "<<dt_name<<endl;
    cout<<" Phone Number: "<<dt_phone<<endl;
    cout<<" Email: "<<dt_email<<endl;
    cout<<" Car Model: "<<dt_car_model<<endl;
    cout<<" Car Number: "<<dt_car_num<<endl;
    cout<<" Car Parking Hour: "<<dt_hour<<" Hour"<<endl;
    cout<<endl;
    cout<<"[ Total Amount For Parked: "<<sum<<" BDT ]"<<endl;
    cout<<endl;
    cout<<" Press [1] For Comfirm Details."<<endl;
    cout<<" Press [2] For Re-Entry Details."<<endl;
    cout<<endl;
    cout<<"Enter Your Choice:";
    cin>>choice;
    system("cls");

    if(choice==1){
        parking_earn();
        int choice;
        ofstream park;
        park.open(dt_car_num+".txt",ios::out|ios::app);
        park <<" Customer Name:"<<dt_name<<endl<<" Customer Phone Number:"<<dt_phone<<endl<<" Customer Email:"<<dt_email<<endl<<" Customer Car Model:"<<dt_car_model<<endl<<" Customer Car Number:"<<dt_car_num<<endl<<" Customer Car Parking Hour:"<<dt_hour<<endl<<" Total Amount:"<<sum<<"BDT"<<endl;
        park.close();
        cout<<"Entery Sucessfull!!!"<<endl;
        cout<<endl;
        cout<<"Press [1] To Get Worker Panel:";
        cin>>choice;
        system("cls");
    }
    if(choice==1){
        wrk_home_panel();
    }

}

//PARKING HOUR CHARGE CALCULATION
void admin_panel::parking_earn(){

    ofstream earn;
    earn.open("totalearn.txt",ios::out|ios::app);
    earn << sum << endl;
    earn.close();

}






//ADMIN AND WORKER CAR SEARCH PANEL WORK HERE
void admin_panel::admin_car_search(){

    string car_search;
    cout<<"______________________________________"<<endl;
    cout<<"     Welcome To Car Search Panel!!   "<<endl;
    cout<<"______________________________________"<<endl;
    cout<<endl;
    cout<<" Enter Car Number:";
    cin>>car_search;
    system("CLS");

    cout<<"______________________________________"<<endl;
    cout<<"Car Number ["<<car_search<<"] Details Is!!!!"<<endl;
    cout<<"______________________________________"<<endl;
    cout<<endl;
    string srh;
    ifstream sear(car_search+".txt");
    while(getline(sear,srh)){
        cout<<srh<<endl;
    }
    sear.close();
}


//MAIN FUNCTION
int main(){
    string name,email,adpass,repass,number;
    string adpass2,retypass2;
    int choice;
    admin_panel call;
    cout<<"____________________________________________"<<endl;
    cout<<"Welcome To Car Parking Management system!!"<<endl;
    cout<<"____________________________________________"<<endl;
    cout<<" 1.Admin"<<endl;
    cout<<" 2.Worker"<<endl;
    cout<<"Enter Your Choice[1]or[2]:";
    cin>>choice;
    system("cls");

    if(choice==1){
        call.admin();

    }
    else if(choice==2){
        call.worker();
    }

    return 0;
}
