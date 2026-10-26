// Made with Blocks to C++
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name= "";
    string gender= "";
    cout<<"What is your name?"<< endl;
    getline(cin>> ws,name);
    cout<<"What is your gender?"<< endl;
    getline(cin>> ws,gender);
    cout<<"hello, "<< name<<endl;
    if (gender=="M" || gender == "m"){
        cout<<"You are a clever Man"<<endl;
    }

    if (gender=="F" ||gender=="f"){
        cout<<"You are a clever Lady"<<endl;
    }
    return 0;


}
