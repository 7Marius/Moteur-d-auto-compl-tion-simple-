#include<iostream>
#include<vector>
#include<cstring>
#include<fstream>
#include<conio.h>
#include"centre.h"
std::string word_to_take="";
char touche='0';
    std::vector<std::string> words; //tableau dinamic de mots
    std::string result[9];
    int number;
    int len_word;
    int length(std::string word);// fonction pour la longueur des chaines de caractere
int main()
{
//initialisation des donnees
     std::ifstream file("donnees.txt");// ouverture du fichier
    std::string word;
    while(file >> word) 
    {
        words.push_back(word); // stockage de donnees
    }
    file.close(); // fermeture du fichier
    

    while(touche != '1' && touche != '2' && touche != '3' && touche != '4' && touche != '5' && touche != '6' && touche != '7' && touche != '8' && touche != '9'){
    std::cout << "saisir le mot" << std::endl;
    std::cout<<word_to_take<<std::endl;
     len_word = length(word_to_take); 
    
    
    std::cout << std::endl << std::endl <<"---------suggestion-------- "<< std::endl; 
     number = 1;
    //ecriture
    if(_kbhit()){
            touche = _getch();
            if(touche == 'a' || touche == 'A'){
                word_to_take += "a";
            }else if(touche == 'b' || touche == 'B'){
                word_to_take += "b";
            }else if(touche == 'c' || touche == 'C'){
                word_to_take += "c";
                }
            else if(touche == 'd' || touche == 'D'){
                word_to_take += "d";
                }
                else if(touche == 'e' || touche == 'E'){
                word_to_take += "e";
                }
                else if(touche == 'f' || touche == 'F'){
                word_to_take += "f";
                }
                else if(touche == 'g' || touche == 'G'){
                word_to_take += "g";
                }
                else if(touche == 'h' || touche == 'H'){
                word_to_take += "h";
                }
                else if(touche == 'i' || touche == 'I'){
                word_to_take += "i";
                }
                else if(touche == 'j' || touche == 'J'){
                word_to_take += "j";
                }
                else if(touche == 'k' || touche == 'K'){
                word_to_take += "k";
                }
                else if(touche == 'l' || touche == 'L'){
                word_to_take += "l";
                }
                else if(touche == 'm' || touche == 'M'){
                word_to_take += "m";
                }
                else if(touche == 'n' || touche == 'N'){
                word_to_take += "n";
                }
                else if(touche == 'o' || touche == 'O'){
                word_to_take += "o";
                }
                else if(touche == 'p' || touche == 'P'){
                word_to_take += "p";
                }
                else if(touche == 'r' || touche == 'S'){
                word_to_take += "r";
                }
                else if(touche == 't' || touche == 'T'){
                word_to_take += "t";
                }
                else if(touche == 'u' || touche == 'U'){
                word_to_take += "u";
                }
                else if(touche == 'v' || touche == 'V'){
                word_to_take += "v";
                }
                else if(touche == 'w' || touche == 'W'){
                word_to_take += "w";
                }
                else if(touche == 'x' || touche == 'X'){
                word_to_take += "x";
                }
                else if(touche == 'y' || touche == 'Y'){
                word_to_take += "y";
                }
                else if(touche == 'z' || touche == 'Z'){
                word_to_take += "z";
                }else if(touche == ' ' || touche == ' '){
                word_to_take += " ";
                }
              }
    for(int i = 0; i < words.size(); i++)
    {
        bool found = false;// to determine if the word was found
        int len_words = length(words[i]);// calculating the length of the words stocks in our array words
        for(int j = 0; words[i][j] != 0; j++)
        {
            if(word_to_take[0] == words[i][j]) // checking if the first letter of the word matches
            {
                if((len_words - 1 - j) >= (len_word - 1))// checkes is there are still enough space to fine the rest of the word
                {
                  int d = j + 1; // to store the next position for verification of the word to be found
                  found = true;
                  for(int c = 1; word_to_take[c] != '\0'; c++)// crossing through the rest of the word
                  {
                    if(word_to_take[c] != words[i][d]) // verifying is the words characters match each other
                    {
                        found = false;
                        break;
                    }
                    d++;
                  }
                }
                else break;
            }else break;
        }
        if(found && number<=9)
        {
           std::cout << number << "." <<words[i] << std::endl;// printing words that contain the word enterd by the user
           result[number-1]=words[i];
             number ++;
        }
    }
    system("cls");
    }
    int word_complition=(touche - '0');
    
    std::cout<<"votre mot est : "<<result[word_complition-1];
    
    return 0;
}


