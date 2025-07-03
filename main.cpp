#include <iostream>
#include <string>

using namespace std; 

class player
{
   int numero;
   string nom;

   public:
   void initPlayer()
   {
       cout<<"identifiant :";
       cin>>ws;
       getline(cin,nom);

       cout<<"joueur 1 ou 2 :";
       cin>>numero;
       if(numero!=1 && numero!=2)
       {
           cout<<"veillez saisir 1 pour joueur 1 et 2 pour joueur 2";
           cin>>numero;
       }
       
   }


};


 class plateau
 {
    char plateau[3][3];
    
    public:
    //initialisation du plateau
    void reset()
    {
        for(int i=0;i<3;i++)
        {

            for(int j=0;j<3;j++)
            {
                plateau[i][j]='-';
            }
        }
    }
    
    void afficher()
    {
        for(int i=0;i<3;i++)
        {
            cout<<i+1<<" ";
            for(int j=0;j<3;j++)
            {
                cout<<"["<<plateau[i][j]<<"]";
            }
            cout<<endl;
        }   
        cout<<"  "<<" a  b  c "<<endl;
    }
 
    void deplacement(player , int , char)
    {

    }
};


int main()
{
plateau p;
p.reset();
p.afficher();

player Sam;
Sam.initPlayer();



return 0;
}