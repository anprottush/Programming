#include<stdio.h>
#include<string.h>
int main()
{
    char dictionary[100][100],word[100][100];
    int i,j,d=0,w=0,len_w=0,len_d=0;
    printf("Enter the dictionary:\n");
    for(j=0;;j++){
            d++; //for counting the number of words in dictionary including #
            scanf("%s",&dictionary[j]);
            if(strcmp(dictionary[j],"#")==0)
                {
                break;        //when # will be given,taking input will stop
            }
    }
    printf("Enter the word to check:\n");
    for(i=0;;i++){
            w++; //for counting the number of words in checking including #
            scanf("%s",&word[i]);
            if(strcmp(word[i],"#")==0) //when # will be given,taking input will stop
                break;
    }
   printf("Corrected words:\n");
   for(i=0;i<w;i++){
        if(strcmp(word[i],"#")==0){
            break; //# is not be countable in this process
        }
        len_w=0;
        len_w=strlen(word[i]); //for counting lenth of each word in checking
        for(j=0;j<d;j++){
            if(strcmp(dictionary[j],"#")==0){
                break;//# is not be countable in this process
            }
            len_d=0;
            len_d=strlen(dictionary[j]); //for counting lenth of each word in checking
            if(len_w==len_d){
                printf("%s:",word[i]);
                for(j=0;j<d;j++){
                    if((word[i][0]==dictionary[j][0])&&(word[i][len_w-1]==dictionary[j][len_d-1])){
            //when first and last character are same in dictionary and checking word,the checking word is correct
                        printf("Correct");
                    }
                    else if((word[i][0]==dictionary[j][0])||(word[i][len_w-1]==dictionary[j][len_d-1])){
            //when first or last character is same in dictionary and checking word,the checking word is not correct
            //the dictionary word is correct for that checking word
                        printf("%s,",dictionary[j]);//the correct dictionary word is printed then

                    }
                }
                printf("\n");
            }

        }
    }
    return 0;
}
