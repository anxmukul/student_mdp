#include <bits/stdc++.h>
#include <fstream>
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
    Student(string Name, int Standard, int Roll, char Section)
    {
        name = Name;
        standard = Standard;
        roll_no = Roll;
        section = Section;
    }
    void show_details()
    {   
        //ifstream objr;
        //objr.open("student_list.txt");
        cout<<"Name: "<<name<<endl<<"standard: "<<standard<<endl<<"roll no: "<<roll_no<<endl<<"section: "<<section<<endl;
    }
    bool search_name(string input_name){
        if(name == input_name){
            return true;
        }
        else{
            return false;
        }
    }
     bool search_roll(int input_roll){
        if(roll_no == input_roll){
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    cout<<"This programme is a menu driven program in which you will enter any number between 1-5 for following operation\n";
    cout<<"1. For adding a new student.\n2. For listing all the students.\n3. For searching student by name.\n4. For seaching student by roll.\n5. To stop the programme.\n";
    
    string p;
    int r;
    char s;
    int c;
    
    ofstream objw;   // creating object for file
    
    //Declearing Vector for storing data of more then one object work same as array
    vector<Student> student_array;
    
    while(1>0)
    {
        objw.open("student_list.txt");   // opening a file student_list.txt.
        cout<<"Enter any number:\n";
        int n;
        cin>>n;

        if (n==1){
            cout<<"Enter name of the student\n";
            cin.ignore();
            getline(cin, p, '\n');             //Accesing data member
            objw<<p<<endl;
            cout<<"Enter class of the student\n";
            cin>>c;
            objw<<c<<endl;
            cout<<"Enter roll no of student\n";
            cin>>r;
            objw<<r<<endl;
            cout<<"Enter section of the student\n";
            cin>>s;
            objw<<s<<endl;
            Student new_student(p, c, r, s);    //Creating object
            student_array.push_back(new_student);            

        }

        else if(n==2){
            cout<<"Student List:\n";
            int length = student_array.size(); 
            cout<<endl;   
            for(int k=0; k<length; k++){
                student_array[k].show_details();
                cout<<endl;
            }
        }
        
        else if(n==3){
            string input_name;
            cout<<"Enter name of the student"<<endl;
            cin.ignore();
            getline(cin, input_name, '\n');
            int length = student_array.size();
            for(int k=0; k<length; k++){
                if(student_array[k].search_name(input_name)){
                    student_array[k].show_details();
                    cout<<endl;
                }
            }
        }

        else if(n==4){
            int  input_roll;
            cout<<"Enter roll no of the student\n";
            cin>>input_roll;
            cout<<endl;
            int length = student_array.size();
            for(int k=0; k<length; k++){
                if(student_array[k].search_roll(input_roll)){
                    student_array[k].show_details();
                    cout<<endl;
                }
            }
        }

        else if(n==5){
            break;
        }
    
        objw.close();
    }

return 0;
}
