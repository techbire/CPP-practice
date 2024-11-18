// #include<iostream>
// using namespace std;
// class multiplicationgame{
//     public:
//     void game(int n){
//         int p=1;
//         int multiplier=1;
//         while(p<n){
//             p=p*multiplier;
//             if(p>=n){
//                 if(multiplier%2==1){
//                     cout<<n<<"john wins"<<endl;

//                 }
//                 else{
//                     cout<<n<<"michile wins"<<endl;
//                 }
//                 return;
//             }
//             multiplier++;
//         }
//     }
// };



// int main(){
// int n;
// cin>>n;
// multiplicationgame game;
// game.game(n);
// return 0;
// }

//----------------------------------------------------------------------------------------


// #include<iostream>
// using namespace std;
// int main(){
// int r,c;
// cin>>r>>c;
// int matrix[10][10];
// for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         cin>>matrix[i][j];
//     }
// }

// for(int i=0;i<r;i++){
//     int rowsum=0;
//     for(int j=0;j<c;j++){
//         cout<<matrix[i][j]<<" ";
//         rowsum+=matrix[i][j];

//     }
//     cout<<"sum: "<<rowsum<<endl;
// }



// }

//----------------------------------------------------------------------------------------

//decontructor

// #include<iostream>
// using namespace std;

// class counter {
//     int id;

// public:
//     counter(int i) {
//         id = i;
//         cout << "contructor of object with id=" << id;
//     }
//     ~counter() {
//         cout << "destructor with id=" << id;
//     }
// };

// int main() {
//     counter c1(1);
//     counter c2(2);
//     counter c3(3);
//     cout << "\n end of main";
//     return 0;
// }

//----------------------------------------------------------------------------------------


// //writing a file
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream of("result.txt");
//     of<<"hello";
//     of.close();
//     cout<<"data saved\n";
// }

//----------------------------------------------------------------------------------------


//writing and reading a file
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     char s[30];
//     ofstream of("result.txt");
//     of<<"hello ansh how are you?";
//     of.close();
//     cout<<"data saved\n";
//     ifstream inf("result.txt");
//     inf>>s;
//     cout<<s;
//     inf.close();
//     return 0;

// }

//----------------------------------------------------------------------------------------


//apppend mod
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     char s[300];
//     ofstream fileout;
//     ifstream filein;
//     fileout.open("result.txt",ios::app);
//     fileout<<"hey hello";
//     fileout.close();

//     filein.open("result.txt",ios::in);
//     filein.getline(s,30);
//     cout<<s;
// }

//----------------------------------------------------------------------------------------


//manipulators of fstream
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     char s[300];
//     ofstream fileout;
//     fstream file;
//     fileout.open("result.txt",ios::out);
//     fileout<<"hey 1";
//     fileout.close();

//     file.open("result.txt",ios::in|ios::out);
//     cout<<file.tellg();
//     cout<<file.tellp();
//     file.seekp(6);
//     file.seekg(6);
//     cout<<file.tellg();
//     cout<<file.tellp();
//     file>>s;
//     cout<<s;

// }


//----------------------------------------------------------------------------------------


//putting string in file  {input based}
// #include<iostream>
// #include<string.h>
// #include<fstream>


// using namespace std;
// int main(){
//     char s[300];
//     cout<<"enter a string: ";
//     cin>>s;
//     int len=strlen(s);
//     fstream file;
//     file.open("result.txt",ios::in|ios::out);
//     for(int i=0;i<len;i++){
//         file.put(s[i]);
//     }
//         file.seekg(0);
//         char ch;
        
//     while (file.get(ch)) {
//         cout << ch;
//     }
//         return 0;

//     }


//----------------------------------------------------------------------------------------


//operator overloading
//uniary operator overloading

// #include<iostream>
// using namespace std;
// class data{
//     public:
//     int num1;
//     data(int n){
//         num1=n;
//     }
//         data operator++();
//         void display(){
//             cout<<"value of num1="<<num1;         
//             } };
            
//             data data::operator++()
//             {
//                 num1=++num1;
//                 return num1;
//             }


// int main(){
//     data d1(10),result(0);
//     result=++d1;
//     result.display();
//     return 0;
// }

//----------------------------------------------------------------------------------------

//binary operator overloading

// #include<iostream>
// using namespace std;
// class data{
//     public:
//     int num1;
//     data(int n){
//         num1=n;
//     }
//         data operator+(data d2);
//         void display(){
//             cout<<"value of num1="<<num1;         
//             } };
            
//             data data::operator+(data d2)
//             {
//                 data d3(0);
//                 d3.num1=num1+d2.num1;
//                 return d3;

//             }


// int main(){
//     data d1(10),d2(20),result(0);   //10+20
//     result=d1+d2;
//     result.display();
//     return 0;
// }

//----------------------------------------------------------------------------------------


//type conversion

// #include<iostream>
// using namespace std;
// class time{
//     private:
//     int h,m;
//     public:
//     time(){
//         h=m=0;
//     }
//     time(int t){
//         h=t/60;
//         m=t%60;
//     }

// void show_data(){
//     cout<<h<<"hrs"<<m<<"mins";
// }
// };
// int main(){
//     int min;
//     cout<<"\nenter the mintues: ";
//     cin>>min;
//     time t1;
//     t1=min;
//     t1.show_data();
// }


//----------------------------------------------------------------------------------------


//order of execution of construction/destruction during single inheritance
//{default constructor in both classes} [2base class+child]
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     A()
//     {
//         cout<<"\ncalling default base class constuctor";
//     }
//     ~A()
//     {
//         cout<<"\ncalling base class destructor";
//     }
// };


// class C
// {
//     public:
//     C()
//     {
//         cout<<"\ncalling default base class constuctor";
//     }
//     ~C()
//     {
//         cout<<"\ncalling base class destructor";
//     }
// };

// class B:public A,public C
// {
//     public:
//     B()
//     {
//         cout<<"\ncalling default derived contructor";
//     }
//     ~B()
//     {
//         cout<<"\ncalling derived class destructor";
//     }
// };

// int main(){

//     B obj1;

//    return 0;
// }


//----------------------------------------------------------------------------------------



//inheritance 
// #include<iostream>
// using namespace std;
// int main(){

// using namespace std;
// class A
// {
//     public:
//     A()
//     {
//         cout<<"\ncalling default base class constuctor";
//     }
//     ~A()
//     {
//         cout<<"\ncalling base class destructor";
//     }
// };


// class C
// {
//     public:
//     C()
//     {
//         cout<<"\ncalling default base class constuctor";
//     }
//     ~C()
//     {
//         cout<<"\ncalling base class destructor";
//     }
// };

// class B:public A,public C
// {
//     public:
//     B()
//     {
//         cout<<"\ncalling default derived contructor";
//     }
//     ~B()
// class C{
//     cout<<"/ncalling derived class destructor";
//     int 
//     }
//     }
// };


// class D:{
    
// }



//----------------------------------------------------------------------------------------
//memory allocation failure
// #include<iostream>
// #include<stdlib.h>

// using namespace std;
// int main(){
//     int *p=NULL;
//     p=new int;
//     if(p==NULL){
//         cout<<"\nmemory allocation failure";
//         exit(1);
//     }
//     return 0;
// }


//----------------------------------------------------------------------------------------
//program to allocate and delocate one memory location
// #include<iostream>
// #include<stdlib.h>

// using namespace std;
// int main(){
//     int *p=NULL;
//     p=new int;
//     if(p==NULL){
//         cout<<"\nMemory allocation failure";
//         exit(1);
//     }
//     else {
//         cout<<"\nMemory allocated\n";
//         *p=12;
//         cout<<"Integer value stored is: "<<*p;
//         delete p;
//         cout<<"\nMemory dellocated";
//     }
// }

//----------------------------------------------------------------------------------------
// //program using throw outside of try block
// #include<iostream>
// using namespace std;
// void divide(int x,int y,int z){
//     cout<<"we are inside the function";
//     if((x-y)!=0){
//         int r=z/(x-y);
//         cout<<"result: "<<r;
//     }
//     else{
//         throw(x-y);
//     }
// }
// int main(){
//     try{
//         cout<<"we are inside the try block";
//         divide(10,20,30);
//         divide(10,10,20);
//        }
//        catch(int i){
//         cout<<"caught the exception";
//        }
//        return 0;
// }

//----------------------------------------------------------------------------------------
// //program multiple catch statment
// #include<iostream>
// using namespace std;
// void Test(int x){
//     try{
//         if(x==1)throw x;  //int
//         else if(x==0)throw 'x';  //char
//         else if(x==-1)throw 1.0; //double
//         cout<<"end of try block";
//     }
//     catch(char c){  //catch 1
//     cout<<"caught a character "; 
//     }
//     catch(int m){
//         cout<<"caught an integer ";
//     }
//     catch(double d){
//         cout<<"caught a double ";
//     }
//     cout<<"end of try-catch system ";
// }

// int main(){
//     cout<<"testing multiple catches ";
//     cout<<"x==1";
//     Test(1);
//     cout<<"x==0";
//     Test(0);
//     cout<<"x==-1";
//     Test(-1);
//     cout<<"x==2";
//     Test(2);    //doesnt throw any exception
//     return 0;
// }


//----------------------------------------------------------------------------------------
//program catch all exception

#include<iostream>
using namespace std;
void Test(int x){
    try{
        if(x==0)throw x;  //int
        if(x==-1)throw 'x';  //char
        if(x==1)throw 1.0; //float
    }
    catch(...)  //catch all
    {
        cout<<"caught an exception ";
    }
}

int main(){
    cout<<"testing genric catch ";
    Test(-1);
    Test(0);
    Test(1);
    return 0;
}























