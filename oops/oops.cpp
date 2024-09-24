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



//writing and reading a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char s[30];
    ofstream of("result.txt");
    of<<"hello ansh how are you?";
    of.close();
    cout<<"data saved\n";
    ifstream inf("result.txt");
    inf>>s;
    cout<<s;
    inf.close();
    return 0;

}