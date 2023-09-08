#include <iostream>
#include <string >

using namespace std;

class clsMobile
{

    virtual void PhoneNumber (string Number) = 0;
    virtual void SendSMS (string Text,string Number) = 0;
    virtual void TakePicture () = 0;

};

class clsIphone :public clsMobile
{
    void PhoneNumber (string Number) 
    {


    };
    void SendSMS (string Text, string Number) 
    {


    };
    void TakePicture () 
    {


    };

};

int main()
{
    clsIphone Iphone;
    system("pause>0");
}