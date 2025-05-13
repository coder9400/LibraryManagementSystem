#include<iostream>
using namespace std;
class Library{
    int book_number;
    string book_name;
    string author;
    string publisher;
    int noofcopiss;
    int noofcop;

    public:
        void input()
        {
            cout<<"Enter book number : ";
            cin>>book_number;
            cout<<"Enter book name : ";
            cin>>book_name;
            cout<<"Enter author name : ";
            cin>>author;
            cout<<"Enter publisher name : ";
            cin>>publisher;
            cout<<"Enter no of copies issued : ";
            cin>>noofcopiss;
            cout<<"Enter no of copies in stock : ";
            cin>>noofcop;
        }
        void issue(int a,string au,int i)
        {
            if(a==book_number && au==author)
            {
                if(noofcop>=i)
                {
                    cout<<"Ok! Book Issued!";
                    noofcopiss +=i;
                    noofcop -=i;
                }
                else cout<<"Sorry! Book as per your quantity is not available!";
            }
        }
        void returnn(int a,string au,int i)
        {
            if(a==book_number && au==author)
            {
                noofcop +=i;
                noofcopiss -=i;
                cout<<"Ok! Book Returned!\nThanks!\n";
            }
            else cout<<"Sorry! Book didn't returned\nPlease check the book number or author name once again!!!\n";
        }
        void display()
        {
            cout<<"Book Number : "<<book_number<<endl;
            cout<<"Book : "<<book_name<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Publisher : "<<publisher<<endl;
            cout<<"No of copies issued : "<<noofcopiss<<endl;
            cout<<"No of copies available in stock : "<<noofcop<<endl;
            cout<<endl;
        }
};
int main()
{
    Library obj;
    string au;
    int a;
    int i,n=0;
    obj.input();
    while(1)
    {
        cout<<endl;
        cout<<"Press 0 -> To Exit \nPress 1 -> To Issue the book \nPress 2 -> To Return the book \nPress 3 -> To Display \n";
        cin>>n;
        if(n==0)
        {
            cout<<endl<<"ThankYou!\n";
            return 0;
        }
        else if(n==1)
        {
            cout<<endl;
            cout<<"Enter book number : ";
            cin>>a;
            cout<<"Enter Author name : ";
            cin>>au;
            cout<<"Enter no of copies you want to issue : ";
            cin>>i;
            obj.issue(a,au,i);
        }
        else if(n==2)
        {
            cout<<endl;
            cout<<"Enter book number : ";
            cin>>a;
            cout<<"Enter Author name : ";
            cin>>au;
            cout<<"Enter no of copies you want to return : ";
            cin>>i;
            obj.returnn(a,au,i);
        }
        else if(n==3)
        {
            cout<<endl;
            obj.display();
        }
        else cout<<"Please choice form the given choices!!!!!!\n";
    }
    return 0;
}
