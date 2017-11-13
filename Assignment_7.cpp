#include<iostream>
#include<string>
#include<fstream>
using namespace std; 

void addNewContact() { 
    string name,phone;
    cout<<"Name?"<<endl;
    cin>>name;
    cout<<"phone?"<<endl;
    cin>>phone;
    ofstream myfile("contacts.txt",ios::app);
    myfile<< name << " "<< phone <<endl;
    myfile.close();
}

void searchContact() { 
    ifstream infile("contacts.txt");
    string target;
    cout<< "Who?"<<endl;
    cin>>target;
    
    string name;
    string phoneNum;
    while(infile>>name>>phoneNum){
        if(name == target){
            cout<<"Name:"<<name<<"\tPhone:"<<phoneNum<<"\n\n";
            return;
        }
    }
    cout<<"can't find it!\n\n";
}

void displayContacts() { 
    ifstream infile("contacts.txt");
    string name;
    string phoneNum;
    while(infile>>name>>phoneNum){
        cout<<name<<" : "<<phoneNum<<endl;
    }
    cout<<"\n\n";
}



int main() 
{
    int choice; 
    
    while(1) { 
        cout << "Press 1 to add contact" << endl;
        cout << "Press 2 to search for a contact" << endl;
        cout << "Press 3 to display contacts" << endl;
        cout << "Anything else to quit" << endl;
        cin >> choice;
        
        switch(choice) { 
            case 1 : addNewContact();
                     break; 
                     
            case 2 : searchContact();
                     break;
                     
            case 3 : displayContacts();
                     break;
                
            default: exit(1);
        }
    }
    
    return 1;
}
