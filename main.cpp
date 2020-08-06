#include <iostream>
using namespace std;
int main(){
    string i , a ,n ;
    int d , score;
    float o ,fst_no , snd_no, ans;
    score = 0 ;
     cout<<"     EVERY ONE IS A MATHMATICIAN !!!!!!    " << endl;
    do
    {
        d = 3; 
        fst_no = rand();
        snd_no = rand();
        cout<<"current score "<<score<<endl<<"Do you want to continue ?(Yes or No )"<<endl ;
        cin>>i;
        if ( i == "yes")
        {
            cout<< " chose your level "<<endl<<"* for multiplycation"<<endl<<"/ for division"<<endl<<"+ for addition"<<endl<<"- for subtraction"<<endl<< "% for percentage"<<endl<<"A for area"<<endl<<  "P for perimeter"<<endl ;
            cout<<"Enter one of the sign from above list to continue"<<endl;
            cin>>n;
            if (n == "+")
            {
                cout<<fst_no<<"+"<<snd_no<<endl;
                cin>>ans;
                if (ans == fst_no + snd_no )
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = fst_no + snd_no;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<o<<endl;
                }
            
            }
            else if ( n == "-")
            {
                 cout<<fst_no<<"-"<<snd_no<<endl;
                cin>>ans;
                if (ans == fst_no - snd_no )
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = fst_no - snd_no;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<o<<endl;
                }
            
            }
            else if ( n == "*")
            {
                    cout<<fst_no<<"*"<<snd_no<<endl;
                cin>>ans;
                if (ans == fst_no * snd_no )
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = fst_no*snd_no;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<o<<endl;
                }
            }
            else if ( n == "/")
            {
                    cout<<fst_no<<"/"<<snd_no<<endl;
                cin>>ans;
                if (ans == fst_no / snd_no )
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = fst_no/snd_no;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<o<<endl;
                }
            }
            else if ( n == "%")
            {
                    cout<<fst_no<<"% of"<<snd_no<<endl;
                cin>>ans;
                if (ans == fst_no / 100 * snd_no )
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = fst_no/100*snd_no;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<(float)o<<endl;
                }
            }
            else if ( n == "A")
            {
                    cout<<"Find the area of rectangle whose lenght is "<<fst_no<<" and breadth is "<<snd_no<< ". "<<endl;
                cin>>ans;
                if (ans == fst_no * snd_no )
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = fst_no*snd_no;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<o<<endl;
                }
            }
             else if ( n == "P")
            {
                 cout<< "Find the perimeter of rectangle whose lenght is "<<fst_no<< "m and breadth is "<<snd_no<< "m . "<<endl;
                cin>>ans;
                if (ans == 2 * ( fst_no + snd_no ))
                {
                    cout<<"you are right"<<endl;
                    score = score + 10;
                }
                else
                {
                    o = 2 * ( fst_no + snd_no ) ;
                    cout<< "you are wrong"<<endl;
                    score = score - 5 ;
                    cout<<"correct answer was "<<o<< "m"<<endl;
                }
            
            }
            else
            {
                cout<<"invalid entry retry"<<endl;
            }
        }
        else
        {
            goto end;
        }
    } while (d == 3);
end:
     cout<<"game over"<<endl<<"final score"<<score<<endl;
     system("pause");
     return 0;
}