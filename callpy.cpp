#include <iostream>

using namespace std;

void callpy(string path,string argument)
{
 cout<<"calling python"<<endl;
 system((string("python ")+ path + string(" ") + argument).c_str());
 getchar();
 getchar();
}

int main()
{
 char argument[255],path[255];
 cout<<"enter path of python code"<<endl;
 cin.getline(path,255);
 cout<<"enter an argument for python"<<endl;
 cin.getline(argument,255);
 callpy(path,argument);
 return 0;
}