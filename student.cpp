#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"This programme is a menudriven programme in which you will enter any number between 1-5 for following operation\n";
    cout<<"1. For adding a new student.\n2. For listing all the students.\n3. For searching student by name.\n4. For seaching student by roll.\n5. To stop the programme.\n";
    
    while(1>0){
        cout<<"Enter any number\n";
        int n;
        cin>>n;
        if (n==1){
            cout<<"Enter name of the student\n";
        }
        else if(n==2){
            cout<<"YOu can get list of all student here\n";
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
