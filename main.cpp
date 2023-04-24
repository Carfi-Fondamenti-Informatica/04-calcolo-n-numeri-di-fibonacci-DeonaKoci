#include <iostream>
using namespace std;
int main() {

    int n=0;
    cout << "inserire un numero intero n\n";
    cin >> n;

    int c=0,f,a=1,b=1;
    if(n>=2){
        cout << a << endl;
        cout << b << endl;
        while (c<(n-2)){
            c++;
            f=a+b;
            cout << f << endl;
            a=b;
            b=f;
        }

    }else {
        cout << "errore";
    }

    return 0;
}
