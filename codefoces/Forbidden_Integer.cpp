// Link to question : https://codeforces.com/problemset/problem/1845/A

// Tn this question, we ae trying to make a number if we can digit 1 as we can make any number n by adding 1 n times.
//Now , if 1 is not available to use i.e if x==1 , then there are two possibilities , that the number is either even 
//or odd , if it is even then it will be possible to add 2 n/2 times to make n but if it is odd then we have to make that number using 2 and 3 , by anayzing that if a number is odd is either 2 or 1 closer than the multiple of 3. 


#include <iostream>
using namespace std;

int main(){
    int t,n,k,x;
    cin >> t;
    while (t--)
    {
        cin >>n >>k >>x;


        if (x!=1 && k>1){
            cout << "YES" << endl;
            cout << n << endl;
            for (int i =0 ; i<n ; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }


        else if (x==1){
            if (k==1){
                cout << "NO" << endl;
            }

            else if (k>1) {
                if (n%2==0){
                    cout << "YES" << endl;
                    cout << (n/2) << endl;
                    for (int i=2 ; i<=n ; i=i+2){
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else {//n>=3 && odd
                    if (k>=3){
                        //possible
                        if (k>=3){
                            cout << "YES" << endl;
                            if (n%3==0){
                                cout << n/3 << endl;
                                for (int i=3 ; i<=n ; i=i+3){
                                    cout << 3 << " ";
                                } 
                                cout << endl;
                            }
                            else{
                                if ((n+2)%3==0){
                                    cout << ((n-3)/2) + 1 << endl;
                                    for (int i=2 ; i<=n-3 ; i= i+2){
                                        cout << 2 << " ";
                                    }
                                    cout << 3 << endl;
                                }
                                else {
                                    cout << (n-2)/3 + 1 << endl;
                                    for (int i=3 ; i<=n-2 ; i=i+3){
                                        cout << 3 << " ";
                                    }
                                    cout << 2 << endl;
                                }
                            }
    
                        }
                    }
                    else {
                        //impossible
                        cout << "NO" << endl;
                    }
                }
            }

        }
    }
    return 0;
}