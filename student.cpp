#include <bits/stdc++.h>
using namespace std;
class Student
{
    //Access specifier
    public:
    //Data members
    string name; 
    int standard; 
    int roll_no;
    char section;
    //Member functions
    void print_details()
    {
        cout<<"Name:"<<name<<endl<<"standard:"<<standard<<endl<<"roll no:"<<roll_no<<endl<<"section:"<<section<<endl;

    }

};

int main()
{
    cout<<"This programme is a menu driven program in which you will enter any number between 1-5 for following operation\n";
    cout<<"1. For adding a new student.\n2. For listing all the students.\n3. For searching student by name.\n4. For seaching student by roll.\n5. To stop the programme.\n";
    
    cout<<"Enter name of the student\n";
    Student student1;    //declaring an object
    student1.name = "Mukul";    //Accesing data member
    student1.standard = 10;
    student1.roll_no = 18;
    student1.section = 'C';

    while(1>0){
        cout<<"Enter any number\n";
        int n;
        cin>>n;
        if (n==1){
            cout<<"Enter name of the student\n";
            //Student student1;    //declaring an object
            //student1.name = "Mukul";    //Accesing data member
            //student1.standard = 10;
            //student1.roll_no = 18;
            //student1.section = 'C';
        }
        else if(n==2){
            //cout<<"You can get list of all student here\n";
            //accesing member function
            student1.print_details();

        }
        else if(n==3){
            cout<<"Enter name of the student.\n";
        }
        else if(n==4){
            cout<<"Enter the roll no of the student\n";
        }
        else if(n==5){
            break;
        }
    }


return 0;
}
