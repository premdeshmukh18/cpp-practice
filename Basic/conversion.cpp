#include<iostream>
using namespace std;
int main()
{
    int x=3;
    char y='A';   //here char A is converted to int and ascii vaule of A is taken as 65.
    
    cout<<(x+y)<<endl;
 
{
    int a=13;
    int b=6;
    float c=a/b; // this problem occured cuz division happend first and then assignment happened.
     cout<<c<<endl;}
                        {
                         //c type conversion
                            int a=13;
                            int b=6;
                            float c=float(a)/b; 
                            cout<<c<<endl;
                                }
                                {
                         //c++ type conversion
                            int a=13;
                            int b=6;
                            float c=static_cast<float>(a)/b; //c++ type coversion gives a validity check whether you can convert it or not.
                            cout<<c;
                                }
                                /*{   string name;
                                    cout<<"enter your name";
                                    cin>>name; 
                                    cout<<name<<endl;
                                }*/
                                {
                                    string name;
                                    cout<<"enter your name";
                                    getline(cin,name);
                                    cout<<name;
                                }

return 0;
}