/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class library
{
    public:
      int id ;
      char name [100];
      char author [100];
      char student [100];
      int price;
      int pages;
      };
    int main()

{
    library lib[20];
    int input =0;
    int count=0;
    
    while (count !=3)
    {
        cout << " enter 1 to input details like id , prize,student name, author name,pagess"<<endl;
        cout<< " enter 2 to display details " << endl;
        cout << " enter 3 to quit "<< endl;
         cin >> input;
        switch (input )
        {
            case 1:
                     start:
                  cout << " enter book id "<< endl;
                  cin>> lib [count ].id;
                  cout << " enter book name"<< endl;
                  cin>> lib [input ].name;
                  cout << " enter book author "<< endl;
                  cin>>   lib[count ].author ;
                  cout << "enter student name"<< endl;
                  cin>> lib [count ].pages;
                  count=count +1;
        
                  break;
                  
    case 2:
                for (int i=0; i<=count ; i=i+1)
                {
                     cout << "  book id "<<lib[i].id<< endl;
                    cout << "  book name "<<lib[i].name<< endl;
                     cout << "  book author "<<lib[i].author<< endl;
                    cout << "  book student "<<lib[i].student<< endl;
                     cout << "  book prize "<<lib[i].price<< endl;
                      cout << "  book pages"<<lib[i].pages<< endl;
                }
                       break;
                       
                       
            case 3:
                exit (0);
                break ;
                default :
                 cout << "you have entered wrong value, please type again " << endl;
                 goto start;
        }
    }
    

return 0;
}



