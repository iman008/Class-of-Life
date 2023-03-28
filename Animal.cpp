#include "Animal.h"

using namespace std;

vector<Animal> Az;
vector<Cell> Cz;

void setGz(int a){
  vector<Genome> r;
  Cell c;
  for(int i = 0; i < a; i++){
    string dn1, dn2;
    cout << "enter number " << i+1 << " Chromosome's part 1 DNA:" << endl;
    cin >> dn1;
    cout << "enter number " << i+1 << " Chromosome's part 2 DNA:" << endl;
    cin >> dn2;
    Genome tmp(dn1, dn2);
    r.push_back(tmp);
  }
  c.setCell(r);
  Cz.push_back(c);
}

void go(){
  y : ;
  int ch, tmp;
  cout << "please choose what you want to do:" << endl;
  cout << " 1- Create Animal(s)\n 2- Create a Virus\n 3- perform a similarity check between 2 Animals\n 4- breed check(== operator)\n 5- reproduction by Cell division(Asexual reproduction)"<< endl;
  cout << " 6- Sexual reproduction(operator +)\n 7- perform a virus check\n 8- perform cell die method on a specific Animal\n 9- exit\n";
  x : ;
  cin >> ch;
  if(ch > 9 or ch < 1){
    cout << "wrong number, please try again";
    goto x;
  }
  else if(ch == 1){
    cout << "how many animals do you want to create?" << endl;
    cin >> tmp;
    for(int i =0; i < tmp; i++){
      int gCount;
      cout << "enter your numbered " << i+1 << " animal's Cell size(count of Chromosomes):" << endl;
      cin >> gCount;
      setGz(gCount);
      cout << "you have succesfully added Animal number " << i+1 << " to database" << endl;
    }
    for(auto x:Cz){
      Az.push_back(Animal(x));
    }
    system("CLS");
    goto y;
  }
  else if(ch == 2){

  }
  else if(ch == 3){
    int f,s;
    cout << "please enter the first Animal's index which you want to compare:(1 based)" << endl;
    cin >> f;
    cout << "please enter the second Animal's index which you want to compare:(1 based)" << endl;
    cin >> s;
    cout << similarityPercentage(Az[f-1], Az[s-1]) << endl;
    goto y;
  }
  else if(ch == 4){
    int f,s;
    cout << "please enter the first Animal's index which you want to compare:(1 based)" << endl;
    cin >> f;
    cout << "please enter the second Animal's index which you want to compare:(1 based)" << endl;
    cin >> s;
    (Az[f-1] == Az[s-1]) ? cout << "True" << endl : cout << "False" << endl;
    goto y;
  }
  else if(ch == 5){
    cout << "please enter the Animal's index which you want to reproduct(1 based):" << endl;
    cin >> tmp;
    cout << "reproduction has been performed, new Animal's Cell structure:" << endl;
    Animal temp = Az[tmp - 1].clone();
    for(int i = 0; i < temp.gz.size(); i++){
      cout << "Chromosome " << i+1 << "'s DNA:" << endl;
      cout << temp.gz[i].getDNA().s1 << endl << temp.gz[i].getDNA().s2 << endl;
    }
    goto y;
  }
  else if(ch == 6){

  }
  else if(ch == 7){

  }
  else if(ch == 8){

  }
  else if(ch == 9) cout << "Good Bye!" << endl;
}

int main(){
  go();
}