"# library-mgmt" 
1. use the header iostream and strings
2. create the structure of library
2a write string book_name for book name
2b write string author for author name
2c write int pages  for number of pages
2d write float price for cost use float instead of int so thar you can show numbers in points eg "89.87"
3 now comes the driver code
3a use int main()
    library a[100];
define array library
string ar_nm, bk_nm;
for author name and book name
int i,input, count;
    i=input=count=0;
declare int i,input ,count and then put them =0 
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
here we use input to use the cases . here input!=6 because no. of operations listed are till 6 suppose if we do 1 then 1!=6 then it will perform operatiom related to 1 that is adding the book .
now if we want such operations to be executed we need to use switch case:-
  it depends on what type of input we have choosen.
  
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
  case 1 does the adding part of the book  that means it inserts the book one by one into the database .We have used cin>>a[count].book_name to accept book name one by one . Now at last we have used count++ so that it adds the book one by one and can also count total no. of books
 Never use a[i].book_name as i is not declared in this case as it is used for loops here we use otherwise it will not be able to store book one by one and when you add all the books and you just want to display it you only get the last book which you have entered and all 0
            
              
        case 2:
          for(i=0;i<count;i++){
              cout << "S. No: " << count;
              cout<<"\t Book name: "<<a[i].book_name;
              cout<<"\t Author: "<<a[i].author;
              cout<<"\t Pages:  "<<a[i].pages;
              cout<<"\t Cost: "<<a[i].price<<endl;
              
          }
          break;
          
 here loop is used after adding all the books count function has already counted total number of books. now suppose you have entered 2 books then loop goes like it takes i=1 which is <2  and then it takes 2 which is equal to 2 so the loop ends. by this method it displays all the books in the library
 
        case 3:
          cout<<"Enter author name: ";
          cin>>ar_nm;
          for(i=0;i<count;i++){
              if(ar_nm==a[i].author)
               cout<<a[i].book_name<<" "<<a[i].author<<" "<<a[i].pages<<" "<<a[i].price<<endl;
 now if you have taken a author name and if that is equal to the author which we stored or inserted in the database(a[i].author) then it displays the information related to it
               
          }
          break;
        case 4:
          cout<<"\n no, of books"<<count<<endl;
          break;
 it just counts total no. of books using the count function
        case 5:
         cout<<"Enter book name: ";
         cin>>bk_nm;
         for(i=0;i<count;i++){
             if(bk_nm==a[i].book_name)
               cout<<a[i].author<<" "<<a[i].pages<<" "<<a[i].price<<endl;
           
         }
         break;
 if book name(bk_nm) = book  which we have inserted in the database(a[i].book_name) then it displays all the info related to it.
        case 6:
          exit(0);
    it ends the program which is running.
          
          
          
          
              
            
        }
 
    }
    return 0;
    
    
}

    
  

