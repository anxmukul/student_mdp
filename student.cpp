#include <bits/stdc++.h>
#include <string.h>
using namespace std;
struct  student_data
{
    string name;
    int standard;
    int roll;
    char section;
}s[40];

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
    void initialize(string Name, int Standard, int Roll, char Section)
    {
        name = Name;
        standard = Standard;
        roll_no = Roll;
        section = Section;
    }
    void show_details(int k)
    {
        cout<<"Name:"<<s[k].name<<endl<<"standard:"<<s[k].standard<<endl<<"roll no:"<<s[k].roll<<endl<<"section:"<<s[k].section<<endl;
        cout<<endl;
    }
    bool search_name(string input_name){
        name == input_name;
    }

};

int main()
{
    cout<<"This programme is a menu driven program in which you will enter any number between 1-5 for following operation\n";
    cout<<"1. For adding a new student.\n2. For listing all the students.\n3. For searching student by name.\n4. For seaching student by roll.\n5. To stop the programme.\n";
    Student student1;    //declaring an object

    /*cout<<"Enter name of the student\n";
    Student student1;    //declaring an object
    student1.name = "Mukul";    //Accesing data member
    student1.standard = 10;
    student1.roll_no = 18;
    student1.section = 'C';*/
    
    int i = 0;
    while(1>0){
        cout<<"Enter any number\n";
        int n;
        cin>>n;

        if (n==1){
            cout<<"Enter name of the student\n";
            cin>>student1.name;              //Accesing data member
            cout<<"Enter class of the student\n";
            cin>>student1.standard;
            cout<<"Enter roll no of student\n";
            cin>>student1.roll_no;
            cout<<"Enter section of the student\n";
            cin>>student1.section;

            student1.initialize(student1.name, student1.standard, student1.roll_no, student1.section);
                s[i].name = student1.name;
                s[i].standard = student1.standard;
                s[i].roll = student1.roll_no;
                s[i].section = student1.section;
                i++;
        }

        else if(n==2){
            cout<<"Student List:\n";
            //accesing member function
            for(int j=0; j<i; j++){
                student1.show_details(j);
                cout<<endl;
            }
        }
        else if(n==3){
            cout<<"Enter name of the student.\n";
            string input_name;
            cin>>input_name;
            for(int j=0; j<i; j++){
                if(s[j].name == input_name){
                    student1.show_details(j);
                }
            }

        }

        else if(n==4){
            cout<<"Enter the roll no of the student\n";
            int input_roll;
            cin>>input_roll;
            for(int j=0; j<i; j++){
                if(s[j].roll == input_roll){
                    student1.show_details(j);
                }
            }
        }

        else if(n==5){
            break;
        }

    }


return 0;
}
