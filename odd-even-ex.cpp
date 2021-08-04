#include <iostream>
#include<fstream>

using namespace std;


int main()
{
    int i; int j;

    ofstream myfile;
    
    myfile.open ("evenlines-text.txt");
    
    for (i=1; i<1000; i++)
    {
    
        
        myfile << endl <<" hi beautiful houssam" << endl;
    }
     myfile.close();       

     myfile.open ("oddlines-text.txt");
            
     for (j=1; j<1000; j++) 
       
    {
        
        myfile<<" hi ugly Ritwik" << endl<<endl;
    }
    myfile.close();
            
            

    
  
  return 0;
}
