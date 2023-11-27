    #include<stdio.h>
    int main()
    {
        int test,num;
        printf("Test Case = ");
        scanf("%d",&test);
        while(test > 0){

            char input; 
            scanf(" %c",&input);
            printf("\n");

            if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {

                if((input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') || (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U')) 
                {
                    printf("%c is an Alphabet. It is an Vowel\n\n",input);
                }
                else { 
                    printf("%c is an Alphabet. It is an Consonant\n\n",input);
                }
            }
            else if(input >= '0' && input <= '9') {

                printf("%c is a Digit.\n\n",input);

            }
            else { 

                printf("%c is a special charecter\n\n",input);

            }

            test--;
        }
    }