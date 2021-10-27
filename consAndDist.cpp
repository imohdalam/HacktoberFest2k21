#include<iostream>
using namespace std;

class Dog
{
    private:
        int license;
    public:
        Dog();
        Dog(int licenseIn);
        void setLicense(int licenseIn);
        int getLicense();
        ~Dog();
};

Dog::Dog()
{
   license = 0;
}

Dog::~Dog()
{
    cout<<"\nDeleting the dog";
}

void Dog::setLicense(int licenseIn)
{
    license = licenseIn;
}

int Dog::getLicense()
{
    return license;
}

int main()
{
    Dog d1;
    cout<<d1.getLicense();
    return 0;
}
