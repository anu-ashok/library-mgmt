#include <iostream>
#include <string>
 
using namespace std;
 
// Create Structure of Library
struct library {
    string book_name;
    string author;
    int pages;
    float price;
};
 
// Driver Code
int main(){
    library a[100];
 
    string ar_nm, bk_nm;
    
    int i,input, count;
    i=input=count=0;
    while(input!=6){
        
        cout << "\n\n********######"
             << "WELCOME TO E-LIBRARY "
             << "#####********\n";
        cout << "\n1. Add a book\n";
        cout << "2. Display complete library\n";
        cout << "3. List all books of given author\n";
        cout << "4. List the count of books in the library\n";
        cout << "5. Lookup Book information\n";
        cout << "6. Exit\n";
 
        // Enter the book details
        cout << "\n\nEnter one of the above: ";
        cin >> input;
        switch(input){
        case 1:
              cout << "Add book title: ";
              cin >> a[count].book_name;
              
              cout << "Enter author name: ";
              cin >> a[count].author;
              
              cout << "Enter no. of pages: ";
              cin >> a[count].pages;
              
              cout << "Price: ";
              cin >> a[count].price;
              count++;
              break;
              
              
        case 2:
          for(i=0;i<count;i++){
              cout << "S. No: " << i+1;
              cout<<"\t Book name: "<<a[i].book_name;
              cout<<"\t Author: "<<a[i].author;
              cout<<"\t Pages:  "<<a[i].pages;
              cout<<"\t Cost: "<<a[i].price<<endl;
              
          }
          break;
        case 3:
          cout<<"Enter author name: ";
          cin>>ar_nm;
          for(i=0;i<count;i++){
              if(ar_nm==a[i].author)
               cout<<a[i].book_name<<" "<<a[i].author<<" "<<a[i].pages<<" "<<a[i].price<<endl;
               
          }
          break;
        case 4:
          cout<<"\n no, of books"<<count<<endl;
          break;
        case 5:
         cout<<"Enter book name: ";
         cin>>bk_nm;
         for(i=0;i<count;i++){
             if(bk_nm==a[i].book_name)
               cout<<a[i].author<<" "<<a[i].pages<<" "<<a[i].price<<endl;
               
         }
         break;
         
        case 6:
          exit(0);
          
          
          
          
              
            
        }
 
    }
    return 0;
    
    
}
