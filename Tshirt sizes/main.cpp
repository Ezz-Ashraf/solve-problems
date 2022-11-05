#include <iostream>
#include <string>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
   /* int x = 40;
    char words[x];
    cin.getline(words,x);
    cout <<words << endl;
    string z = "I added another string";
    cout<<z <<" And x ="<< words <<endl;*/
    /*string x,y;
    cin  >>x >>y;
    cout << "x = "<<x[x.length()-1] <<"y =  " <<y[y.length() -1];*/

    int i,NoOfShirts;
    cin >>NoOfShirts;
    char results[NoOfShirts];
    for(i =0;i<NoOfShirts;i++)
    {

    string firstShirt, secondShirt;
    cin>>firstShirt>>secondShirt;
/* if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='M')
    cout<<"<"<<endl;
 else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='L')
    cout<<"<"<<endl;
 else if(firstShirt[firstShirt.length()-1] == 'M' && secondShirt[secondShirt.length() -1] =='S')
    cout<<">"<<endl;
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='S')
    cout<<">" <<endl;
 else if(firstShirt[firstShirt.length()-1] == 'M' && secondShirt[secondShirt.length() -1] =='L')
    cout<<"<" <<endl;
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='M')
    cout<<">"<<endl;
 else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='S' && firstShirt.length()> secondShirt.length() )
    cout<<"<"<<endl;
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='L' && firstShirt.length()> secondShirt.length() )
    cout<<">" <<endl;
 else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='S' && firstShirt.length() == secondShirt.length() )
    cout<<"="<<endl;
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='L' && firstShirt.length() == secondShirt.length() )
    cout<<"="<<endl;
    else {
        cout<<"="<<endl;
    }*/
    if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='M')
    results[i]= '<';
 else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='L')
    results[i]='<';
 else if(firstShirt[firstShirt.length()-1] == 'M' && secondShirt[secondShirt.length() -1] =='S')
    results[i]='>';
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='S')
    results[i]='>';
 else if(firstShirt[firstShirt.length()-1] == 'M' && secondShirt[secondShirt.length() -1] =='L')
    results[i]='<';
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='M')
    results[i]='>';
 else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='S' && firstShirt.length()> secondShirt.length() )
    results[i]='<';
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='L' && firstShirt.length()> secondShirt.length() )
    results[i]='>';
 else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='S' && firstShirt.length() == secondShirt.length() )
    results[i]='=';
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='L' && firstShirt.length() == secondShirt.length() )
    results[i]='=';
     else if(firstShirt[firstShirt.length()-1] == 'S' && secondShirt[secondShirt.length() -1] =='S' && firstShirt.length()< secondShirt.length() )
    results[i]='>';
 else if(firstShirt[firstShirt.length()-1] == 'L' && secondShirt[secondShirt.length() -1] =='L' && firstShirt.length()< secondShirt.length() )
    results[i]='<';
    else {
        results[i]='=';
    }
    }
   for(i =0;i<NoOfShirts;i++)
   {
       cout<<results[i]<<endl;
   }
    return 0;
}
