#include <iostream>
using namespace std;
class Book{
    public:
    string authorName;
    string bookName;
    int year;
};
int main(){
    Book s1,s2;
    s1.authorName="J.K Rowling";
    s1.bookName="Harry Potter";
    s1.year=1997;
    cout<<"The author name is:"<<s1.authorName<<endl;
    cout<<"The book name is:"<<s1.bookName<<endl;
    cout<<"The year of publication is:"<<s1.year<<endl;
    s2.authorName="Chetan Bhagat";
    s2.bookName="Half Girlfriend";
    s2.year=2014;
    cout<<"The author name is:"<<s2.authorName<<endl;
    cout<<"The book name is:"<<s2.bookName<<endl;
    cout<<"The year of publication is:"<<s2.year<<endl;
    return 0;
}