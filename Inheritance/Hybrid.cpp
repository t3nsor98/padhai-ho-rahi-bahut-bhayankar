#include <iostream>
using namespace std;

class Smartphone
{
public:
    void Call()
    {
        cout << "Start Calling" << endl;
    }
};

class Android : public Smartphone
{
public:
    void Map()
    {
        cout << "Start Map App" << endl;
    }
};

class Iphone : public Smartphone
{
public:
    void Camera()
    {
        cout << "Start Camera App." << endl;
    }
};


class Android_watch: public Android{
    public:
    void Show_time(){
        cout<<"This is the time"<<endl;
    }
};

int main(){

    
    return 0;
}