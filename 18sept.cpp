/*
file  handling  : read write  append  :  

read ==>  exiting  
write ==> new create  + write  + exiting  open  ==> over write 
append ==>  new  create  + append  + exiting  open  ==> append 

ifstream : for reading from file  
ofstream : for writing to file
fstream : for reading and writing to file

open  :  open file
close : close file

*/

// write to file  :

/*
#include <iostream>
#include <fstream>
using  namespace std;
int main()
{
    ofstream outfile("moksh.txt");  //  create  file  and  open  in write  mode   

    if(!outfile)
    {
        cout<<"file not created"<<endl;
        return 1;
    }
    outfile<<"my name is moksh."<<endl;  // write to file
    outfile<<"live in ahmedabad."<<endl;  // write to file
    outfile<<"best friend name is het."<<endl;  // write to file
    outfile<<"food lover."<<endl;  // write to file

    outfile.close();  // close file
    cout<<"file created and  writing  successfully."<<endl; 
    return 0; 
}
*/

// file read : 
/*
#include <iostream>
#include <fstream>
using namespace std; 
int main()
{
    ifstream infile("moksh.txt");
    string line; 
    if(!infile)
    {
        cout<<"file not created"<<endl;
        return 1;
    }
    while (getline(infile,line))
    {
        cout<<line<<endl;
    }
    infile.close();
    cout<<"file read successfully"<<endl;
    return 0;
    
}

*/ 

// append to file  : 

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream outfile("moksh.txt",ios::app);  // open file in append mode 

    if(!outfile)
    {
        cout<<"file not created"<<endl;
        return 1;
    }
    outfile<<"appendning  file ====="<<endl;  // append to file

    outfile<<"my name is pinal."<<endl;  // write to file
    outfile<<"live in ahmedabad."<<endl;  // write to file
    outfile<<"best friend name is  saloni patel."<<endl;  // write to file
    outfile<<"food lover."<<endl;  // write to file

    outfile.close();  // close file
    cout<<"file created and  writing  successfully."<<endl;
    return 0;

}

