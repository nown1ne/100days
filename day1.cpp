#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =5;
    //pattern one
    for(int row = 1;row<=n;row++){
        for(int col = 1;col<=n;col++){cout<<col;}
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern two
    for(int row = 1;row<=n;row++){
        for(int col = 1;col<=n;col++){cout<<n-col+1;}
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern three
    int i3 =1;
    for(int row =1;row<=n;row++){
        for(int col =1;col<=n;col++){
            cout<<i3<<" ";
            i3 += 1;
        }
        cout<<"\n";
    }
    cout<<"\n\n";


    //pattern 4
    for(int row=1;row<=n;row++){
        for(int col =1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 5
    for(int row = 1; row<=n;row++){
        for(int col =1; col<=row;col++){cout<<row;}

        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 6
    int i6 =1;
    for(int row=1;row<=n;row++){
        for(int col =1;col<=row;col++){
            cout<<i6<<" ";
            i6 += 1;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 7
    for(int row = 1; row<=n;row++){
            int i7 =row;
        for(int col=1;col<=row;col++){
            cout<<i7;
            i7 += 1;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 8
    for(int row=1;row<=n;row++){
        for(int col =1;col<=row;col++){
            cout<<row-col+1;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 9
    for(char row='A';row<='A'+n;row++){
        for(int col =1; col<=n;col++){
            cout<<row;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 10
    char i = 'A';
    for(int row =1; row<=n;row++){
        for(int col=1;col<=n;col++){
            cout<<i;
            i += 1;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 11
    for(char row = 'A';row<='A'+n;row++){
        for(char col=row; col<=row+n;col++){
            cout<<col;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 12
    for(char row ='A';row<='A'+n;row++){
        for(int col = 65; col<=row;col++){
            cout<<row;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 13
    for(char row = 'A';row<='A'+n;row++){
        char i13 = row;
        for(char col='A'; col<=row;col++){
            cout<<i13;
            i13 += 1;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 14
    for(int row =1; row<=n;row++){
        char i = 'E';
        for(int col=1;col<=row;col++){
            char a = i-n+col+4;
            cout<<a;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 15
    for(int row = 1; row <= n; row++){
        int space = n-row ;
        while(space>=0){
            cout << " ";
            space-- ;
        }
        for(int col = 1;col<=row;col++){
        cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 16
    for(int row = 1; row <= n; row++){
        int stars = n-row+1;
        while(stars){
            cout<<"*";
            stars--;
        }
        for(int col =1 ; col <= row;col++){
            cout<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 17
    for(int row =1; row<=n;row++){
        int spaces = row -1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        for(int col = n-row+1 ; col>=1;col--){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 18
    for(int row =1;row<=n;row++){
        int spaces = row -1;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        for(int col =1;col<=n-row+1;col++){
            cout<<row;
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    

    //pattern 19
    for(int row = 1; row <= n; row++){
        int spaces = n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        for(int col =1; col <=row ; col++){
            cout<<row;
        }
        cout<<"\n";
    }
    cout<<"\n\n";

    //pattern 20
    int i20 = 1;
    for(int row = 1; row <= n ; row++){
        int spaces = n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        for(int col = 1;col<=row;col++){
            cout<<i20;
            i20 += 1;
    }
    cout<<"\n";
    }
    cout<<"\n\n";


    //pattern 21
    for(int row =1; row<=n;row++){
        int space1 = n-row;
        while(space1){
            cout<<" ";
            space1--;
        }
        for(int col =1 ; col <=row;col++){
            cout<<col;
        }
        for(int col = row-1;col>=1;col--){
            cout<<col;
        }
        cout<<"\n";
    }



}