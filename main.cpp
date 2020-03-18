#include <iostream>
#include "unsortedtype.h"
#include "studentInfo.h"

using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    /*UnsortedType<int> list(6);
    for(int i=0;i<6;i++){
        int a;
        cout<<"Enter an integer : ";
        cin>>a;
        list.InsertItem(a);
    }
    cout<<endl;
    for(int i=0;i<list.LengthIs();i++){
        int a;
        list.GetNextItem(a);
        cout<<a<<" ";
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        cout<<endl;
        bool isfound;
        int a;
        cout<<"Enter a Num to retrive : ";
        cin>>a;
        list.RetrieveItem(a,isfound);
        if(isfound)
            cout<<"FOUND"<<endl;
        else
            cout<<"NOT FOUND"<<endl;
    }
    for(int i=0;i<2;i++){
        bool isfound;
        int a;
        cout<<"Enter a Num to delete : ";
        cin>>a;
        cout<<endl;
        list.DeleteItem(a);
        cout<<"DELETED"<<endl;
    }
    list.ResetList();
    for(int i=0;i<list.LengthIs();i++){
        int a;
        list.GetNextItem(a);
        cout<<a<<" ";
    }
    cout<<endl;*/
    student *st=new student[3];
    for(int i=0;i<2;i++){
        string n;
        int id;
        float cg;
        cout<<"Enter name : ";
        cin>>n;
        cout<<"Enter id : ";
        cin>>id;
        cout<<"Enter cgpa : ";
        cin>>cg;
        st[i].value(id,n,cg);
    }
    UnsortedType<student> s;
    for(int i=0;i<2;i++){
        s.InsertItem(st[i]);
    }
    student ss2;
    for (int i=0;i<2;i++){
        int iid;
        student ss;
        s.GetNextItem(ss);
        ss.printInfo();
    }
    int di;
    cout<<"Enter id to retrive : ";
    cin>>di;
    s.ResetList();
    student ss;
    bool isFound=false;
    for(int i=0;i<s.LengthIs();i++){
        s.GetNextItem(ss);
        if(ss.getId()==di){
            ss.printInfo();
            isFound=true;
        }
    }
    if(!isFound)
        cout<<"NOT FOUND"<<endl;

    return 0;
}