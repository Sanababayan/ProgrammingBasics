#include  <iostream>
#include  <bits/stdc++.h>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

string vorodi;

/*int getNumberFromString(string s) {
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) { //try to convert string to int
         return temp_int;
      }
      temp_str = ""; //clear temp string
   }
}*/

/*int extractIntegerWords(string str)
{
    stringstream ss;
    ss << str;
    string temp;
    int found=0;
    while (!ss.eof()) {
        ss >> temp;
        if (stringstream(temp) >> found)
            return found;
            //cout << found << " ";

        temp = "";
    }
}*/
/*void insertDemo(string str1, string str2 , int index)
{

    // Inserts str2 in str1 starting
    // from 6th index of str1
    str1.insert(index, str2);
    cout << str1 << "\n";
}*/
void length()
{
    cout << vorodi.length() <<"\n" << vorodi << "\n";
}
void insert_(string dovomi,string sevomi)
{
    vorodi.insert(stoi(dovomi), sevomi);
    cout << vorodi << "\n";
    //insertDemo(vorodi,sevomi,stoi(dovomi));
}
void append(string dovomi)
{
    vorodi.append(dovomi);
    //vorodi = vorodi + dovomi;
    cout<< vorodi << "\n";
}
void erase_(string dovomi)
{
    while(1)
        {
            std::size_t ind = vorodi.find(dovomi); // Find the starting position of substring in the string
            if(ind !=std::string::npos){
                vorodi.erase(ind,dovomi.length()); // erase function takes two parameter, the starting index in the string from where you want to erase characters and total no of characters you want to erase.

            }else{
                std::cout<<vorodi<<"\n";
                break;
                //std::cout<<"Substring does not exist in the string\n";
            }
        }
}
void reverse_case(string dovomi,string sevomi)
{
    for(int i = stoi(dovomi); i <= stoi(sevomi); i++)
    {
        if(vorodi.at(i)>='a' && vorodi.at(i)<='z')
        {
            vorodi.at(i)=vorodi.at(i)-32;
        }else if(vorodi.at(i)>='A' && vorodi.at(i)<='Z')
        {
            vorodi.at(i)=vorodi.at(i)+32;
        }
    }
    cout << vorodi << "\n";
}
/*void MyString(string &SortStr,int star,int end_)
{
   sort(star,end_);
   cout << SortStr;
}*/
void sort_(string dovomi,string sevomi)
{
    char temp;
    for (int i = stoi(dovomi); i <= stoi(sevomi); i++)
    {
        for (int j = stoi(dovomi); j < stoi(sevomi); j++)
        {
            if (vorodi.at(j) > vorodi.at(j+1))
            {
                temp = vorodi.at(j);
                vorodi.at(j) = vorodi.at(j+1);
                vorodi.at(j+1) = temp;
            }
        }
    }
    cout << vorodi << "\n";
}
void swap_(string dovomi,string sevomi)
{
    int pos_do = vorodi.find(dovomi);
    int pos_se = vorodi.find(sevomi);
    if(pos_do>=pos_se && pos_do<pos_se+sevomi.length())
    {
        cout << vorodi << "\n";
        return;
    }
    if(pos_se>=pos_do && pos_se<pos_do+dovomi.length())
    {
        cout << vorodi << "\n";
        return;
    }
    if(pos_do+dovomi.length()-1 >= pos_se && pos_do+dovomi.length()-1 <pos_se+sevomi.length())
    {
        cout << vorodi << "\n";
        return;
    }
    if(pos_se+sevomi.length()-1 >= pos_do && pos_se+sevomi.length()-1 < pos_do+dovomi.length())
    {
        cout << vorodi << "\n";
        return;
    }

    if(pos_do!=std::string::npos && pos_se!=std::string::npos)
    {
        vorodi.erase(pos_do,dovomi.length());
        vorodi.insert(pos_do,sevomi);
        vorodi.erase(pos_se,sevomi.length());
        vorodi.insert(pos_se,dovomi);
    }



    /*vorodi.replace(pos_do,sevomi.length(),sevomi);
    vorodi.replace(pos_se,dovomi.length(),dovomi);*/
    cout << vorodi << "\n";
}
void resize_(string dovomi,char sevomi)
{
    //cout << "-" << vorodi << "-" << sevomi << "-\n";
    int ci=vorodi.length();
    if(ci>stoi(dovomi))
    {
        vorodi.resize(stoi(dovomi));
        cout << vorodi << "\n";
    }else if(ci<stoi(dovomi))
    {
        for(int i=0;i<stoi(dovomi)-ci;i++)
        {
            vorodi=vorodi+sevomi;
        }
        //vorodi.resize(stoi(dovomi),sevomi);
        cout << vorodi << "\n";
    }else

    {
        cout << vorodi << "\n";
    }

}
int main()
{
    getline(cin,vorodi);
    while(1)
    {
        string avali;
        string dovomi;
        string sevomi;

        cin >> avali;

        if(avali=="length")
        {
            length();
        }else if(avali=="insert")
        {
            cin >> dovomi;
            getchar();
            getline(cin,sevomi);
            insert_(dovomi,sevomi);
        }else if(avali=="append")
        {
            getchar();
            getline(cin,dovomi);
            append(dovomi);
        }else if(avali=="erase")
        {
            getchar();
            getline(cin,dovomi);
            erase_(dovomi);
        }else if(avali=="reverse_case")
        {
            cin >> dovomi;
            cin >> sevomi;
            reverse_case(dovomi,sevomi);
        }else if(avali=="sort")
        {
            cin >> dovomi;
            cin >> sevomi;
            sort_(dovomi,sevomi);
        }else if(avali=="swap")
        {
            cin >> dovomi;
            cin >> sevomi;
            swap_(dovomi,sevomi);
        }else if(avali=="resize")
        {
            char ch;
            cin >> dovomi;
            cin >> ch;
            resize_(dovomi,ch);
        }else if(avali=="end")
        {
            return 0;
        }
    }
    return 0;
}
