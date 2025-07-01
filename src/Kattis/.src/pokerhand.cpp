#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string cardHand = "";
   std::getline(std::cin, cardHand);
   //cout<<cardHand<<endl;
   for (std::string::iterator it = cardHand.begin();it!=cardHand.end();++it)
   {
     char c = *it;
     std::cout<<c;
   }




    return 0;
}