#include <iostream>
#include<fstream>

using namespace std;


int main()
{
    int i;

    ofstream myfile;
    
    myfile.open ("text.txt");
    
    for (i=1; i<1000; i++)
    {
    
        
        myfile << endl <<" hi beautiful houssam" << endl;
    }
         
  return 0;
}
